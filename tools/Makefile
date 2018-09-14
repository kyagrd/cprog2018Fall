.PHONY: all hw0make

GITLABIDS=$(shell sort gitlabids)
HW0DIRS=$(addsuffix /hw0,$(GITLABIDS))
HW1DIRS=$(addsuffix /hw1,$(GITLABIDS))
HW2DIRS=$(addsuffix /hw2,$(GITLABIDS))
HW3DIRS=$(addsuffix /hw3,$(GITLABIDS))
HW4DIRS=$(addsuffix /hw4,$(GITLABIDS))

HW0CBP2MAKE:=$(foreach hwdir,$(HW0DIRS),cbp2make -in $(hwdir)/hw0.cbp -out $(hwdir)/Makefile;)

HW0MAKE=$(foreach hwdir,$(HW0DIRS),make -C $(hwdir);)

all:
	echo $(GITLABIDS)

hw0:
	echo $(HW0DIRS)
	$(HW0CBP2MAKE)
	$(HW0MAKE)

