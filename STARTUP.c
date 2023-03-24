
// tipi di evento : evento aziendale, evento sportivo, matrimonio, feste (compleanno, laurea), evento sociale;
#include <stdio.h>

int main ()
{
    int evento;

    printf("Che tipo di evento intendi organizzare?\n");
    printf("1.Matrimonio\n2.Aziendale\n3.Sportivo\n4.Festa\n");
    printf("Quale fra le proposte possibili hai scelto?");
    scanf ("%d", &evento);
    if (evento == 1)
    {
        printf("PER QUESTO TIPO DI EVENTO SONO DISPONIBILI I SEGUENTI SERVIZI:\n");
        printf("LOCATION PER IL RICEVIMENTO\n");
        printf("SERVIZIO BANQUETING PER 100 OSPITI\n");
        printf("ALLESTIMENTO FLOREALE PER LA CERIMONIA\n");
        printf("BOUQUET PER LA SPOSA\n");
        printf("BOUTINIERRE PER LO SPOSO E TESTIMONI\n");
        printf("CENTROTAVOLA PERSONALIZZATI\n");
        printf("STAMPA 100 MENU PERSONALIZZATI\n");
        printf("TABLEAU DE MARIAGE ARTIGIANALE E CAVALIERI\n");
        printf("WEDDING DESIGN RICEVIMENTO\n");
        printf("CONFETTATA\n");
        printf("SERVIZIO FOTOGRAFICO\n");
        printf("GRAFICA E STAMPA MATERIALE CARTACEO\n");
        printf("MUSICA CERIMONIA\n");
        printf("MUSICA RICEVIMENTO\n");
        printf("AUTO NUZIALE\n");
        printf("SERVIZIO E CONSULENZA WEDDING PLANNER PER L INTERA ORGANIZZAZIONE DELLE NOZZE\n");
    }
    else if (evento == 2)
    {
       printf("PER QUESTO TIPO DI EVENTO SONO DISPONIBILI I SEGUENTI SERVIZI:\n");
        printf("aiuto nell organizzazione dell evento\n");
        printf("parcheggio\n");
        printf("utilizzo del wi-fi e/o di postazioni computer\n");
        printf("staff per attività di team building\n");
        printf("servizio catering\n");
        printf("pranzo e/o cena inclusi\n");
        printf("pernottamento gratuito per i relatori \n");
        printf("sconti sui pernottamenti per i partecipanti\n");
        
    }
    else if (evento == 3)
    {
     printf("PER QUESTO TIPO DI EVENTO SONO DISPONIBILI I SEGUENTI SERVIZI:\n");
        printf("Formula 1 ( tutte le gare del mondiale, pacchetti tribune normali e Vip Packages)\n");
        printf("Moto GP & Superbike ( pacchetti viaggio comprensivi di hotel, transfers, biglietti in tribuna , possibilità di Hospitality nel Village MotoGP)\n");
        printf("Rugby ( 6Nations )\n");
        printf("Basket ( campionato Italiano, campionati Europei) , NBA\n");
        printf("Volley ( Serie A , match Internazionali)\n");
        
    }
    else if (evento == 4)
    {
     
        printf("PER QUESTO TIPO DI EVENTO SONO DISPONIBILI I SEGUENTI SERVIZI:\n");
        printf("catering\n");
        printf("installazione audio e luci\n");
        printf("servizio bar\n");
        printf("servizio ristorante \n");
        printf("Bottiglia di bollicine trentine in camera all’arrivo;\n");
        printf("decorazione del tavolo al ristorante la sera del compleanno.\n");
        printf("torta a scelta personalizzata\n");
        printf("eventuale arrivo in limousine;\n");
          printf("Bottiglia di bollicine trentine in camera all’arrivo;\n");
            printf("servizio Rita de Crescenzo;\n");
        
        
    }
    else
    {
        printf("error");
    }

}
