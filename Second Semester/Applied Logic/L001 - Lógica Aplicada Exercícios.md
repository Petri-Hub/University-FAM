# 1

<pre>
p = Está sol
q = Está nevando

A = (p V q) = Está sol ou está nevando
B = (p -> q) = Se está sol, então está nevando
C = (~p ^ ~q) = Não está sol e não está nevando
D = (p <-> ~q) = Está sol se e somente se não esta nevando
E = (p V ~q) ⭤ (q ^ ~p) (Está sol ou não está nevando) se e somente se (Está nevando e não está sol)
</pre>

# 2

## A = ~p ∧ q 
Contigência.
<pre>
p q    ~p   q   ~p ^ q
V V     F   V      F   
V F     F   F      F
F V     V   V      V
F F     V   F      F
</pre>

## B = (p ∧ q) → (p v q)
Tautologia.
<pre>
          A       B   
p q     p ^ q   p V q    A -> B
V V       V       V        V
V F       F       V        V
F V       F       V        V
F F       F       F        V
</pre>


## C = ~ (p ∧ q) v ~ (q ↔ p)
Contingência.
<pre>      
          A        B
p q     p ^ q   q <-> p    ~A   ~B   ~A v ~B
V V       V        V        F    F      F
V F       F        F        V    V      V
F V       F        F        V    V      V
F F       F        V        V    F      V
</pre>


## D = (p → q) v ~ (p ↔ ~ q)
Tautologia.
<pre>
        A          B
p q   p -> q    p <-> ~q   A v ~B
V V     V          F         V
V F     F          V         V
F V     V          V         V
F F     V          F         V
</pre>

## E = (p → (~q v r)) ∧ ~(q v (p ↔ ~r))
Contigência.
<pre>
            A          B          C        D
p q r   (~q v r)   (p <-> ~r)   p -> A   q V B   C ^ ~D
V V V       V          F          V        V       F 
V V F       F          V          F        V       F    
V F F       V          V          V        V       F    
F F F       V          F          V        F       V    
F F V       V          V          V        V       F    
F V V       V          V          V        V       F    
V F V       V          F          V        V       F    
F V F       F          F          V        F       V    
</pre>

# 3