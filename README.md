# attack-resillence-sdn-nnambiar
# Modifying OpenVSwitch code to make the eviction algorithm configurable

- openvswich: replacement policy implementation
ofproto.c:
`eviction_algorithm:
line 9039 table->eviction_algorithm = 1; //The value denotes which algorithm you are using: 0 as LRU, 1 as FIFO. This initial function intiate the table config
`
