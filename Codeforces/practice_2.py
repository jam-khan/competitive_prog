import heapq

def main():
    
    hash_map = {}
    
    line = input()
    values = line.split(' ')
    N = int(values[0])
    K = int(values[1])
    
    for i in range(3 * N):
        temp = input()
        hash_map[temp] = hash_map.get(temp, 0) + 1
    
    values = []
    
    for key in hash_map:
        heapq.heappush(values, (hash_map[key], key))
    
    # print(values)
    for i in range(K):
        print(heapq.heappop(values))
        
    
    
main()