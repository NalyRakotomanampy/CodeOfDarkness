import sys
morse = input("Entrer le code en morse\n")
L = len(morse)
if 0 < L < 100000:
    N = int(input("Entrer le nombre de mots du dictionnaire\n"))
    if 0 < N < 100000:
        dico = []
        M = []
        print('Entrer les mots du dictionnaire')
        for x in range(N):
            dico.append(input())
            M.append(len(dico[x]))
            if (M[x]>=20):
                print(dico[x], 'est trop long')
                raise SystemExit(1)

raise SystemExit(1)
