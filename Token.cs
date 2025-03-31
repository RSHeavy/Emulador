using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Mime;
using System.Threading.Tasks;

namespace Semantica {
    public class Token {
        public enum Tipos {
            Identificador, 
            Numero, 
            Caracter, 
            FinSentencia,
            InicioBloque,
            FinBloque,
            OperadorTernario,
            OperadorTermino, 
            OperadorFactor, 
            IncrementoTermino,
            IncrementoFactor, 
            Puntero, 
            Asignacion,
            OperadorRelacional, 
            OperadorLogico,
            Cadena,
            TipoDato,
            PalabraReservada,
            FuncionMatematica,
        }
        private String contenido;
        private Tipos clasificacion;

        public Token() {
            contenido = "";
            clasificacion = Tipos.Identificador;
        }

        public Tipos Clasificacion {
            get => clasificacion;
            set => clasificacion = value;
        }

        public String Contenido {
            get => contenido;
            set => contenido = value;
        }
    }
}