/* file main.c */
#include "seqListOps.h"
#include<stdio.h>
int main()
{
	int i,size=15;
	ElementList E;
	Element e1;
	e1.id=2000;
	e1.regstatus=0;
	for(i=0;i<size;i++)
	{
			E[i].id=i;
			E[i].regstatus=(i%3); //0= Success, 1 = Conflict, 2 = Deny
	}
	// R containing All (size number) registered student records
	ListHead ks, kd, kc;
	ks=createList();
	kd=createList();
	kc=createList();	 				
	for (i = 0; i < size; i++) {
		if  (E[i].regstatus == 0) {
	  		ks=insertAtTail (E[i], ks);
		} else if  (E[i].regstatus == 1) {
			kc=insertAtHead (E[i], kc);
		} else {
			kd=insertInPos (E[i], kd,2);
		}
	}
	ks=insertAfterValue (e1, ks, 12);
	printf("\n\nSUCCESS LIST\n");
	printList(ks);

	printf("\n\nCONFLICT LIST\n");
	printList(kc);

	printf("\n\nDENY LIST\n");
	printList(kd);


	ks=deleteFromHead(ks);
	kc=deleteFromTail(kc);
	kd=deleteValue(kd,8);
	ks=deletePos(ks,3);

	printf("\n\nSUCCESS LIST After Deletion\n");
	printList(ks);

	printf("\n\nCONFLICT LIST After Deletion\n");
	printList(kc);

	printf("\n\nDENY LIST After Deletion\n");
	printList(kd);
	
	return 0;
}

