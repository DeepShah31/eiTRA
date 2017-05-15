gen_queue: gen_queue.o enqueue.o dequeue.o display.o
	gcc gen_queue.o enqueue.o dequeue.o display.o -o gen_queue
gen_queue.o : gen_queue.c gen_queue.h
	gcc -c gen_queue.c
push.o : dequeue.c gen_queue.h 
	gcc -c dequeue.c 
pop.o : enqueue.c gen_queue.h
	gcc -c enqueue.c 
dispay.o : dispay.c gen_queue.h
	gcc -c display.c
clean:
	rm -rf *.o
