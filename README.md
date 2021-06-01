# Configurable Rule Replacement Policies in {SDN}: Implementation in {Open vSwitch}


- openvswich: replacement policy implementation
ofproto.c:
`eviction_algorithm:
line 9039 table->eviction_algorithm = 1; //The value denotes which algorithm you are using: 0 as LRU, 1 as FIFO. This initial function intiate the table config
`

