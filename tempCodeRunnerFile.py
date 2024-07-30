import random

class Network:
    def __init__(self, nodes):
        self.nodes = nodes

    def simulate(self):
        for node in self.nodes:
            node.simulate()

class Node:
    def __init__(self, name, ip_address):
        self.name = name
        self.ip_address = ip_address
        self.firewall = Firewall()

    def simulate(self):
        # Generate a random packet
        packet = Packet(random.choice(self.nodes), self)

        # Send the packet through the firewall
        self.firewall.filter(packet)

class Firewall:
    def __init__(self):
        self.rules = []

    def filter(self, packet):
        for rule in self.rules:
            if rule.match(packet):
                rule.action(packet)

class Packet:
    def __init__(self, source_node, destination_node):
        self.source_node = source_node
        self.destination_node = destination_node

class Rule:
    def __init__(self, source_ip, destination_ip, action):
        self.source_ip = source_ip
        self.destination_ip = destination_ip
        self.action = action

    def match(self, packet):
        return packet.source_node.ip_address == self.source_ip and packet.destination_node.ip_address == self.destination_ip

    def action(self, packet):
        if self.action == "drop":
            print("Packet dropped")
        elif self.action == "allow":
            print("Packet allowed")

# Create a network
network = Network([Node("Node A", "192.168.1.1"), Node("Node B", "192.168.1.2")])

# Add a rule to the firewall on Node A
node_a_firewall = network.nodes[0].firewall
node_a_firewall.rules.append(Rule("192.168.1.2", "192.168.1.1", "drop"))

# Simulate the network
network.simulate()