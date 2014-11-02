a.out: cmocka.c main.c
	gcc $^ -o $@ -I . 
clean:
	rm -f a.out
