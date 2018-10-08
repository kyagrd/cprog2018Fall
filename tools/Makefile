.PHONY: all hw0 hw1

GITLABIDS=$(shell sort gitlabids)
HW0DIRS=$(addsuffix /hw0,$(GITLABIDS))
HW1DIRS=$(addsuffix /hw1,$(GITLABIDS))
HW2DIRS=$(addsuffix /hw2,$(GITLABIDS))
HW3DIRS=$(addsuffix /hw3,$(GITLABIDS))
HW4DIRS=$(addsuffix /hw4,$(GITLABIDS))

HW0CBP2MAKE:=$(foreach hwdir,$(HW0DIRS),cbp2make -in $(hwdir)/hw0.cbp -out $(hwdir)/Makefile;)
HW1CBP2MAKE:=$(foreach hwdir,$(HW1DIRS),cbp2make -in $(hwdir)/hw1.cbp -out $(hwdir)/Makefile;)
HW2CBP2MAKE:=$(foreach hwdir,$(HW2DIRS),cbp2make -in $(hwdir)/hw2.cbp -out $(hwdir)/Makefile;)
HW3CBP2MAKE:=$(foreach hwdir,$(HW3DIRS),cbp2make -in $(hwdir)/hw3.cbp -out $(hwdir)/Makefile;)
HW4CBP2MAKE:=$(foreach hwdir,$(HW4DIRS),cbp2make -in $(hwdir)/hw4.cbp -out $(hwdir)/Makefile;)

HW0MAKE=$(foreach hwdir,$(HW0DIRS),make -C $(hwdir);)
HW1MAKE=$(foreach hwdir,$(HW1DIRS),make -C $(hwdir);)
HW2MAKE=$(foreach hwdir,$(HW2DIRS),make -C $(hwdir);)
HW3MAKE=$(foreach hwdir,$(HW3DIRS),make -C $(hwdir);)
HW4MAKE=$(foreach hwdir,$(HW4DIRS),make -C $(hwdir);)

all:
	echo $(GITLABIDS)

hw0:
	echo $(HW0DIRS)
	$(HW0CBP2MAKE)
	$(HW0MAKE)

hw1:
	echo $(HW1DIRS)
	$(HW1CBP2MAKE)
	$(HW1MAKE)

hw2:
	echo $(HW2DIRS)
	$(HW2CBP2MAKE)
	$(HW2MAKE)

hw3:
	echo $(HW3DIRS)
	$(HW3CBP2MAKE)
	$(HW3MAKE)

hw4:
	echo $(HW4DIRS)
	$(HW4CBP2MAKE)
	$(HW4MAKE)

