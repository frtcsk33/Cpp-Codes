using System.text;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Linq;


namespace Consoleapp1
{
    class program
    {
        static void köşe_ekle(LinkedList<int>[] Komşu,int düğüm,int kenar){
            Komşu[düğüm].AddLast(kenar);
            Komşu[kenar].AddLast(düğüm);

        }
        static void Grafi_yazdir(LinkedList<int>[] Komşu){
            for(int i=0; i<Komşu.Length; i++){
                Console.WriteLine("\nDüğüm komşuluk listeaasi"+i);
                Console.WriteLine("Baş_düğüm");

                foreach(var nesne in Komşu[i]){
                    Console.WriteLine(" --> "+ nesne);
                }
                Console.WriteLine();
            }
        }
        static void Main(string[] args){
            int kenar = 5;
            LinkedList<int>[] Komşu=new LinkedList<int>[kenar];

            for(int i=0; i<5; i++){
                Komşu[i]=new LinkedList<int>();

            }
            köşe_ekle(Komşu, 0, 1);
            köşe_ekle(Komşu, 0, 4);
            köşe_ekle(Komşu, 1, 2);
            köşe_ekle(Komşu, 1, 3);
            köşe_ekle(Komşu, 1, 4);
            köşe_ekle(Komşu, 2, 3);
            köşe_ekle(Komşu, 3, 4); 
            Console.Read();
        }
       
    }
}