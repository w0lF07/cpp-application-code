using System;
namespace Game
{
  class ttt
  {
    static void Main()
    {
      tic_tac_toe();
    }

    static void tic_tac_toe()
    {
      banner_ttt();
    }

    static void banner_ttt()
    {
      Console.WriteLine("\n\n");
      Console.WriteLine("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
      Console.WriteLine("              BIENVENIDO AL JUEGO TIC-TAC-TOE              \n");
      Console.WriteLine("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
      Console.WriteLine("\n");
      Console.WriteLine("Este es un juego de 2 jugadores en el cual '0' va antes de 'X' ^_^ \n");
      Console.WriteLine("El/la jugador/a debe introducir la posición en la cual quiere que     \n");
      Console.WriteLine("se coloque el '0' o la 'X'\n\n\n");
      Console.ReadKey();
    }
  }
}
