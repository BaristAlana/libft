
La fonction memmove() vérifie si les régions de destination et de source se chevauchent en comparant les adresses de début des deux régions. Si les adresses sont égales ou si l'adresse de début de la région de destination est inférieure à l'adresse de fin de la région de source, les régions se chevauchent.

Voici une implémentation possible de la vérification des chevauchements dans la fonction memmove() :

C
void memmove(void *dest, const void *src, size_t n) {
  // Vérifie si les régions se chevauchent.
  if (dest < src || dest >= src + n) {
    // Les régions ne se chevauchent pas.
    // Effectue la copie normale.
    memcpy(dest, src, n);
  } else {
    // Les régions se chevauchent.
    // Effectue la copie dans la direction opposée.
    char *p = (char *)dest + n - 1;
    const char *q = (const char *)src + n - 1;
    for (size_t i = 0; i < n; ++i) {
      *p-- = *q--;
    }
  }
}
Utilisez le code avec précaution. En savoir plus
Dans cette implémentation, la fonction compare d'abord les adresses de début des deux régions. Si les adresses sont égales, les régions se chevauchent. Si les adresses ne sont pas égales, la fonction compare ensuite l'adresse de début de la région de destination à l'adresse de fin de la région de source. Si l'adresse de début de la région de destination est inférieure à l'adresse de fin de la région de source, les régions se chevauchent.

Si les régions se chevauchent, la fonction effectue la copie dans la direction opposée. Cela garantit que les données de la destination ne sont pas écrasées.
