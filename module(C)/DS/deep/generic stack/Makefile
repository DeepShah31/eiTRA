gen_st: gen_st.o push.o pop.o 
	gcc gen_st.o push.o pop.o -o gen_st
gen_st.o : gen_st.c gen_st.h
	gcc -c gen_st.c
push.o : push.c gen_st.h 
	gcc -c push.c 
pop.o : pop.c gen_st.h
	gcc -c pop.c 

clean:
	rm -rf *.o
