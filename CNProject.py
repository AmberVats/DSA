import random
import time

class Host:
    def __init__(self, ip, is_vulnerable):
        self.ip = ip
        self.is_vulnerable = is_vulnerable

    def is_attack_successful(self):
        return random.choice([True, False])

class IntrusionDetectionSystem:
    def __init__(self):
        self.detected_attacks = []

    def detect_attack(self, source_ip, target_ip, attack_type):
        self.detected_attacks.append({
            'source_ip': source_ip,
            'target_ip': target_ip,
            'attack_type': attack_type,
            'timestamp': time.time()
        })

def simulate_attack(source_host, target_host, intrusion_detection_system):
    attack_type = random.choice(['Malware', 'Denial-of-Service', 'Phishing', 'SQL Injection'])

    if source_host.is_attack_successful():
        intrusion_detection_system.detect_attack(source_host.ip, target_host.ip, attack_type)
        print(f"Attack detected: {attack_type}. Source: {source_host.ip}, Target: {target_host.ip}")


def main():
    host1 = Host(ip="192.168.1.1", is_vulnerable=False)
    host2 = Host(ip="192.168.1.2", is_vulnerable=True)
    host3 = Host(ip="192.168.1.3", is_vulnerable=True)

    network = [host1, host2, host3]

    ids = IntrusionDetectionSystem()

    for _ in range(10):
        time.sleep(1)
        source_host = random.choice(network)
        target_host = random.choice(network)

        if source_host != target_host:
            simulate_attack(source_host, target_host, ids)

    print("\nDetected Attacks:")
    for attack in ids.detected_attacks:
        print(
            f"{attack['attack_type']} from {attack['source_ip']} to {attack['target_ip']} at {time.ctime(attack['timestamp'])}")


if __name__ == "__main__":
    main()
