#!/bin/bash

# Vérifier si AStyle est installé
if ! command -v astyle &> /dev/null; then
    echo "❌ AStyle n'est pas installé. Veuillez l'installer avant d'exécuter ce script."
    exit 1
fi

echo "🚀 Exécution d'AStyle avec les règles définies..."
find . -name "*.c" -o -name "*.h" | xargs astyle --options=.astylerc

echo "✅ Formatage terminé !"
