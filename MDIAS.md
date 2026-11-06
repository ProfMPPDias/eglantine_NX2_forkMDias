# Fork MDias v2.0 - AMD

> **MUITO EXPERIMENTAL.** Otimizado principalmente para GPUs **AMD** Radeon, com foco especial em *The Legend of Zelda: Ocarina of Time* (Switch 2).

Esta é uma compilação de alta performance desenvolvida por **MDias**, trazendo diversas otimizações no renderizador e no gerenciamento de memória da GPU.

## Principais Mudanças na Versão 2.0
- **Dynamic FPS Integrado:** Patch de FPS dinâmico integrado diretamente ao emulador (sem necessidade de instalar mods avulsos). O jogo mantém sua velocidade normal mesmo quando a taxa de quadros oscilar.
- **Cache de Shaders Persistente:** Shaders de vegetação e cenários agora são preservados de uma sessão para outra no cache de shaders, eliminando travamentos severos ao entrar em florestas ou cenários abertos.
- **Emulação Acelerada de Tensores:** Desempenho amplamente aprimorado na emulação de tensor-ops para placas AMD Radeon (tela de título ~15 para 50-60 FPS).
- **Redução de Esperas entre Canais da GPU:** Sincronização entre canais assíncronos mais veloz, garantindo ganho contínuo de quadros por segundo.
- **Limpeza Eficiente do Texture-Cache:** Coleta de lixo de texturas otimizada para manter imagens recentes na memória gráfica.
- **Correção Visual de Névoa e Neblina:** A neblina e os feixes de luz originais do jogo agora renderizam com fidelidade total, sem gerar a camada branca translúcida que antes cobria o display.
- **Ajuste Fino de Cores:** Calibração correta dos canais de dados de iluminação, eliminando o tom esverdeado/azulado incorreto presente em versões anteriores em GPUs AMD.
- **Proteção Contra Falhas de Shaders:** Em caso de shader incompatível em cinemáticas, o emulador salta a compilação problemática com segurança em vez de fechar inesperadamente.

## Configurações Recomendadas para Zelda: Ocarina of Time
Variáveis de ambiente opcionais no arquivo `nx2_switches.txt` junto ao executável:
- `EDEN_NX2_TC_MIN_AGE=600`
- `EDEN_NX2_RESUME_ADD=0`
- `EDEN_NX2_SWAP_INTERVAL=2` (trava em 30 FPS para pacing estável; coloque um `#` na frente para destravar)

## Licença
Distribuído sob licença GPL-3.0-or-later. O código fonte completo está disponível neste repositório.
