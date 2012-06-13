#ifndef PRPACK_PREPROCESSED_GE_GRAPH
#define PRPACK_PREPROCESSED_GE_GRAPH
#include "prpack_preprocessed_graph.h"
#include "prpack_base_graph.h"

namespace prpack {

    // Pre-processed graph class
    class prpack_preprocessed_ge_graph : public prpack_preprocessed_graph {
        private:
            // helper methods
            void initialize();
            void initialize_weighted(prpack_base_graph* bg);
            void initialize_unweighted(prpack_base_graph* bg);
        public:
            // instance variables
            int num_vs;
            double* matrix;
            double* d;
            // constructors
            prpack_preprocessed_ge_graph(prpack_base_graph* bg);
            // destructor
            ~prpack_preprocessed_ge_graph();
    };

};

#endif
