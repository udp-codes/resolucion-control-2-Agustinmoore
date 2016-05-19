#include<iostream>

using namespace std;

   
   void maximoD(nodo *p,num){
   	//maximo del nodo que contenga num
   	bool seguir=true;
   	if(p==NULL) return;
   	else{
   		while(seguir){
   		if(p->dato==num){
   		return p->der;
   		seguir=false;
   	    }
   	    else{
   	    	p=p->der;	
		   }
	     }
	   }   
   }
   
   void eliminar(nodo *p,num){
     nodo *temp1;
     nodo *temp2;
   	 if(p==NULL) return;
   	 if()
   	 else{
   		 if(p->valor<num){
   		 	//con un hijo
   			 eliminar(p->izq,num);
   		   	 if(p->der==NULL){
   				 p=p->izq;
			    }
		    }
		else{
			if(p->valor<num){
   			 eliminar(p->izq,num);
   			 if(p->der && p->izq)
   			 // cuando tiene dos hijos se ordena el ABB denuevo 
   			 temp1=minimoD(p,num);
   			 temp2=maximoD(p,num);
   			 temp2->izq=temp1;
   			 
   		    }
		}
	     if(p->valor>num){
	     	//con un hijo
   			 eliminar(p->der,num);
   			 if(p->izq==NULL){
   			 	 p=p->der;
			    }
		    } 
		    else{
			if(p->valor>num){
   			 eliminar(p->der,num);
   			 if(p->der && p->izq)
   			 // cuando tiene dos hijos se ordena el ABB denuevo 
   			 temp1=minimoD(p,num);
   			 temp2=maximoD(p,num);
   			 temp1->izq=temp2;
   			 
   		    }
		}
			   
        }
   }
   	
   	
};

int main(){
	
	return 0;
}
