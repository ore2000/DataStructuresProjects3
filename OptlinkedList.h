#pragma once
#include "OptnodeOBJ.h"

#ifndef LINKEDLIST
#define LINKEDLIST

template<class T>
class linkedList
{
public:
    node<T>* heada= nullptr;
    node<T>* headb=nullptr;
    node<T>* headc=nullptr;
    node<T>* headd=nullptr;
    node<T>* heade= nullptr;
    node<T>* headf=nullptr;
    node<T>* headg=nullptr;
    node<T>* headh=nullptr;
    node<T>* headi=nullptr;
    node<T>* headj=nullptr;
    node<T>* headk=nullptr;
    node<T>* headl=nullptr;
    node<T>* headm=nullptr;
    node<T>* headn=nullptr;
    node<T>* heado=nullptr;
    node<T>* headp=nullptr;
    node<T>* headq=nullptr;
    node<T>* headr=nullptr;
    node<T>* heads=nullptr;
    node<T>* headt=nullptr;
    node<T>* headu=nullptr;
    node<T>* headv=nullptr;
    node<T>* headw=nullptr;
    node<T>* headx=nullptr;
    node<T>* heady=nullptr;
    node<T>* headz=nullptr;
    node<T>* headMal=nullptr;

    node<T>* headPointers[27] = { heada,headb,headc,headd,heade,headf,headg,headh,headi,headj,headk,headl,headm,headn,heado,headp,headq,headr,heads,headt,headu,headv,headw,headx,heady,headz,headMal};
    long double size = 0;
    long double foundComp = 0;
    long double notFoundComp = 0;
    int compares = 0;
    bool condition = false;
    linkedList()
    {
	    for(int i =0; i <27; i++)
	    {
		    headPointers[i] = nullptr;
	
	    }
    }
	void insert(T item)
	{
		if (item == "") return;

		node<T>* temp = new node<T>(item);
		temp->next = nullptr;
		if (item[0] == 'a')
		{
			temp->next = heada;
			heada = temp;
			size = size + 1;
		}
		else if (item[0] == 'b')
		{
			temp->next = headb;
			headb = temp;
			size = size + 1;
		}
		else if (item[0] == 'c')
		{
			temp->next = headc;
			headc = temp;
			size = size + 1;
		}
		else if (item[0] == 'd')
		{
			temp->next = headd;
			headd = temp;
			size = size + 1;
		}
		else if (item[0] == 'e')
		{
			temp->next = heade;
			heade = temp;
			size = size + 1;
		}
		else if (item[0] == 'f')
		{
			temp->next = headf;
			headf = temp;
			size = size + 1;
		}
		else if (item[0] == 'g')
		{
			temp->next = headg;
			headg = temp;
			size = size + 1;
		}
		else if (item[0] == 'h')
		{
			temp->next = headh;
			headh = temp;
			size = size + 1;
		}
		else if (item[0] == 'i')
		{
			temp->next = headi;
			headi = temp;
			size = size + 1;
		}
		else if (item[0] == 'j')
		{
			temp->next = headj;
			headj = temp;
			size = size + 1;
		}
		else if (item[0] == 'k')
		{
			temp->next = headk;
			headk = temp;
			size = size + 1;
		}
		else if (item[0] == 'l')
		{
			temp->next = headl;
			headl = temp;
			size = size + 1;
		}
		else if (item[0] == 'm')
		{
			temp->next = headm;
			headm = temp;
			size = size + 1;
		}
		else if (item[0] == 'n')
		{
			temp->next = headn;
			headn = temp;
			size = size + 1;
		}
		else if (item[0] == 'o')
		{
			temp->next = heado;
			heado = temp;
			size = size + 1;
		}
		else if (item[0] == 'p')
		{
			temp->next = headp;
			headp = temp;
			size = size + 1;
		}
		else if (item[0] == 'q')
		{
			temp->next = headq;
			headq = temp;
			size = size + 1;
		}
		else if (item[0] == 'r')
		{
			temp->next = headr;
			headr = temp;
			size = size + 1;
		}
		else if (item[0] == 's')
		{
			temp->next = heads;
			heads = temp;
			size = size + 1;
		}
		else if (item[0] == 't')
		{
			temp->next = headt;
			headt = temp;
			size = size + 1;
		}
		else if (item[0] == 'u')
		{
			temp->next = headu;
			headu = temp;
			size = size + 1;
		}
		else if (item[0] == 'v')
		{
			temp->next = headv;
			headv = temp;
			size = size + 1;
		}
		else if (item[0] == 'w')
		{
			temp->next = headw;
			headw = temp;
			size = size + 1;
		}
		else if (item[0] == 'x')
		{
			temp->next = headx;
			headx = temp;
			size = size + 1;
		}
		else if (item[0] == 'y')
		{
			temp->next = heady;
			heady = temp;
			size = size + 1;
		}
		else if (item[0] == 'z')
		{
			temp->next = headz;
			headz = temp;
			size = size + 1;
		}
		else
		{
			cout <<"called\n";
			temp->next = headMal;
			headMal = temp;
			size = size + 1;
		}


}
    void remove(T item) {
        
		if (item[0] == 'a')
		{
			if (heada->data != nullptr)
			{
				node<T>* temp = new node<T>(heada->data);
				heada->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'b')
		{
			if (headb->data != nullptr)
			{
				node<T>* temp = new node<T>(headb->data);
				headb->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'c')
		{
			if (headc->data != nullptr)
			{
				node<T>* temp = new node<T>(headc->data);
				headc->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'd')
		{
			if (headd->data != nullptr)
			{
				node<T>* temp = new node<T>(headd->data);
				headd->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'e')
		{
			if (heade->data != nullptr)
			{
				node<T>* temp = new node<T>(heade->data);
				heade->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'f')
		{
			if (headf->data != nullptr)
			{
				node<T>* temp = new node<T>(headf->data);
				headf->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'g')
		{
			if (headg->data != nullptr)
			{
				node<T>* temp = new node<T>(headg->data);
				headg->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'h')
		{
			if (headh->data != nullptr)
			{
				node<T>* temp = new node<T>(headh->data);
				headh->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'i')
		{
			if (headi->data != nullptr)
			{
				node<T>* temp = new node<T>(headi->data);
				headi->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'j')
		{
			if (headj->data != nullptr)
			{
				node<T>* temp = new node<T>(headj->data);
				headj->data = temp->next;
				temp = nullptr;
				size--;
			}
		}
		else if (item[0] == 'k')
		{
		if (headk->data != nullptr)
		{
			node<T>* temp = new node<T>(headk->data);
			headk->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'l')
		{
		if (headl->data != nullptr)
		{
			node<T>* temp = new node<T>(headl->data);
			headl->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'm')
		{
		if (headm->data != nullptr)
		{
			node<T>* temp = new node<T>(headm->data);
			headm->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'n')
		{
		if (headn->data != nullptr)
		{
			node<T>* temp = new node<T>(headn->data);
			headn->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'o')
		{
		if (heado->data != nullptr)
		{
			node<T>* temp = new node<T>(heado->data);
			heado->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'p')
		{
		if (headp->data != nullptr)
		{
			node<T>* temp = new node<T>(headp->data);
			headp->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'q')
		{
		if (headq->data != nullptr)
		{
			node<T>* temp = new node<T>(headq->data);
			headq->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'r')
		{
		if (headr->data != nullptr)
		{
			node<T>* temp = new node<T>(headr->data);
			headr->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 's')
		{
		if (heads->data != nullptr)
		{
			node<T>* temp = new node<T>(heads->data);
			heads->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 't')
		{
		if (headt->data != nullptr)
		{
			node<T>* temp = new node<T>(headt->data);
			headt->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'u')
		{
		if (headu->data != nullptr)
		{
			node<T>* temp = new node<T>(headu->data);
			headu->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'v')
		{
		if (headv->data != nullptr)
		{
			node<T>* temp = new node<T>(headv->data);
			headv->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'w')
		{
		if (headw->data != nullptr)
		{
			node<T>* temp = new node<T>(headw->data);
			headw->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'x')
		{
		if (headx->data != nullptr)
		{
			node<T>* temp = new node<T>(headx->data);
			headx->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'y')
		{
		if (heady->data != nullptr)
		{
			node<T>* temp = new node<T>(heady->data);
			heady->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else if (item[0] == 'z')
		{
		if (headz->data != nullptr)
		{
			node<T>* temp = new node<T>(headz->data);
			headz->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
		else
		{
		if (headMal->data != nullptr)
		{
			node<T>* temp = new node<T>(headMal->data);
			headMal->data = temp->next;
			temp = nullptr;
			size--;
		}
		}
    }
/*
    bool find(T item)
    {
		if (item[0] == 'a')
		{
			for (node<T>* temp = heada; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
				else
				{
					condition = condition;
				}
			}
		}
		else if (item[0] == 'b')
		{
			for (node<T>* temp = headb; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				} else
                                {
                                        condition = condition;
                                }

			}
		}
		else if (item[0] == 'c')
		{
			for (node<T>* temp = headc; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
				 else
                                {
                                        condition = condition;
                                }

			}
		}
		else if (item[0] == 'd')
		{
			for (node<T>* temp = headd; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
				 else
                                {
                                        condition = condition;
                                }

			}
		}
		else if (item[0] == 'e')
		{
			for (node<T>* temp = heade; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'f')
		{
			for (node<T>* temp = headf; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'g')
		{
			for (node<T>* temp = headg; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'h')
		{
			for (node<T>* temp = headh; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'i')
		{
			for (node<T>* temp = headi; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'j')
		{
			for (node<T>* temp = headj; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'k')
		{
			for (node<T>* temp = headk; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'l')
		{
			for (node<T>* temp = headl; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'm')
		{
			for (node<T>* temp = headm; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
					condition = false;
					return condition;
				}
			}
		}
		else if (item[0] == 'n')
		{
			for (node<T>* temp = headn; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else if (temp->next == nullptr)
				{
					notFoundComp = compares;
					compares = 0;
				
	*/
    bool find(T item)
    {
		if (item[0] == 'a')
		{
			for (node<T>* temp = heada; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'b')
		{
			for (node<T>* temp = headb; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'c')
		{
			for (node<T>* temp = headc; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'd')
		{
			for (node<T>* temp = headd; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'e')
		{
			for (node<T>* temp = heade; temp != nullptr; temp = temp->next)
			{  	
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}
			    }

			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'f')
		{
			for (node<T>* temp = headf; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'g')
		{
			for (node<T>* temp = headg; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'h')
		{
			for (node<T>* temp = headh; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'i')
		{
			for (node<T>* temp = headi; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'j')
		{
			for (node<T>* temp = headj; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'k')
		{
			for (node<T>* temp = headk; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'l')
		{
			for (node<T>* temp = headl; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'm')
		{
			for (node<T>* temp = headm; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}
				
			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'n')
		{
			for (node<T>* temp = headn; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'o')
		{
			for (node<T>* temp = heado; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'p')
		{
			for (node<T>* temp = headp; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'q')
		{
			for (node<T>* temp = headq; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'r')
		{
			for (node<T>* temp = headr; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 's')
		{
			for (node<T>* temp = heads; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 't')
		{
			for (node<T>* temp = headt; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'u')
		{
			for (node<T>* temp = headu; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'v')
		{
			for (node<T>* temp = headv; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'w')
		{
			for (node<T>* temp = headw; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'x')
		{
			for (node<T>* temp = headx; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'y')
		{
			for (node<T>* temp = heady; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else if (item[0] == 'z')
		{
			for (node<T>* temp = headz; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
		else
		{
			for (node<T>* temp = headMal; temp != nullptr; temp = temp->next)
			{
				compares++;
				if (((temp->data).compare(item)) == 0)
				{
					foundComp = compares;
					compares = 0;
					condition = true;
					return condition;
				}
				else
				{
					condition = condition;
				}

			}
			notFoundComp = compares;
			compares = 0;
			condition = false;
			return condition;
		}
    }

 int getSize()
 {
   return size;
 }
 /*void print()
 {
    for(int i = 0; i<26;i++)
     {
         for (node<T>* temp = headPointers[24]; temp != nullptr; temp = temp->next)
         {
             cout << temp->data;
             if (temp->next != nullptr)
             {
                 cout << "->";
             }
             else
             {
                 cout << "null \n";
             }
         }
         i = i+1;
     }
     
 }
 */
};
#endif // !linkedList
