# Fork MDias v2.0 - AMD

> **MUITO EXPERIMENTAL.** Otimizado principalmente para GPUs **AMD** Radeon, com foco em **Zelda: Ocarina of Time** (Switch 2) e alta performance.
> Fork independente e mantido por **MDias**.
> Para verificar o que mudou e as configurações recomendadas, veja: [MDIAS.md](MDIAS.md). Download: página de **Releases**.

---

<p align="center">
  <img src="dist/branding/lichii_icon_with_logo.png" alt="MDias Fork" width="600">
</p>

# Fork MDias v2.0 - AMD

> [!IMPORTANT]
> ## ⚡ DYNAMIC FPS JÁ INTEGRADO E APLICADO DE FÁBRICA
> **Este fork já vem com o patch de FPS Dinâmico (Dynamic FPS) totalmente integrado e ativo nativamente!**
> - **Zero mods necessários:** Você **NÃO precisa baixar nem instalar nenhum mod externo de 60 FPS ou Dynamic FPS**.
> - **Sem câmera lenta (slow-motion):** O jogo mantém a velocidade e física normais mesmo em momentos de oscilação ou quedas na taxa de quadros por segundo.
> - **Totalmente gerenciável:** Aparece diretamente nas propriedades do jogo na aba **Add-Ons** do emulador, podendo ser ligado ou desligado conforme a sua preferência. Caso você já possua um mod personalizado para o mesmo endereço de memória, o seu mod terá prioridade automaticamente.

O **Fork MDias v2.0 - AMD** é um emulador experimental e de código aberto para Nintendo Switch e Switch 2, escrito em C++. Ele foca no desenvolvimento de melhorias avançadas no renderizador gráfico, correções visuais e máxima compatibilidade de jogos para GPUs AMD Radeon, com interface 100% traduzida em Português Brasileiro (pt-BR).

Este projeto é um fork independente desenvolvido por MDias e não possui nenhuma afiliação ou vínculo com a Nintendo.

---

## Downloads e Configuração

As compilações oficiais estão disponíveis na [página de lançamentos (Releases)](https://github.com/).

No Windows, extraia o arquivo completo da build e execute **lichii.exe**. 

> [!NOTE]
> Utilize apenas jogos, chaves (keys) e arquivos de sistema obtidos legalmente a partir do seu próprio console. Jogos, chaves e firmware não são distribuídos com este emulador.

### Saves e Configurações Existentes

Esta versão retém intencionalmente os diretórios de dados e chaves de configuração das versões anteriores. Seus jogos salvos (saves), configurações e caches de shaders não serão excluídos nem alterados. Recomendamos sempre fazer backup dos seus saves antes de utilizar compilações experimentais.

---

## Otimizações para GPUs AMD e Ocarina of Time

- ⚡ **Dynamic FPS Integrado (Nativo):** O jogo mantém sua velocidade real mesmo quando a taxa de quadros (FPS) oscila, eliminando desacelerações.
- 🌲 **Cache de Shaders Persistente:** Shaders de vegetação e cenários são mantidos entre as sessões, eliminando travamentos e quedas bruscas de frames ao entrar em florestas ou novas áreas.
- 🚀 **Emulação Acelerada de Tensores:** Aumento expressivo de performance na tela de título e cutscenes em GPUs AMD Radeon (~15 FPS para 50-60 FPS).
- 🌫️ **Renderização de Neblina e Névoa Corrigida:** Efeitos de iluminação, profundidade e nevoeiro renderizados com fidelidade total, sem a camada branca translúcida que cobria a tela.
- 🎨 **Correção Fina de Cores:** Iluminação e cores de céu ajustadas com precisão para arquiteturas AMD (sem desvios para verde ou ciano).
- 🛡️ **Proteção contra Quedas de Shaders:** Proteção contra travamentos durante a compilação de shaders complexos em cinemáticas.

---

## Compatibilidade e Relato de Problemas

O desempenho e a compatibilidade podem variar de acordo com o hardware, jogo e versão dos drivers gráficos instalados.

Ao relatar uma ocorrência, certifique-se de incluir:
- Versão exata da build, versão do jogo, modelo de CPU, GPU e versão do driver de vídeo.
- Configurações utilizadas e etapas detalhadas para reproduzir a situação observada.
- Log da sessão correspondente (verifique e oculte informações pessoais antes de enviar).

## Compilação e Código Fonte

Para compilar o emulador a partir do código fonte:
Consulte a documentação em [docs/Build.md](docs/Build.md) e [docs/user/README.md](docs/user/README.md). O alvo de compilação da interface gráfica gera o executável `lichii.exe` no Windows e `lichii` nas demais plataformas de desktop.

## Arte e Identidade Visual

Os ícones, logotipos e ilustrações da biblioteca encontram-se no diretório [dist/branding](dist/branding).

## Licença

Este projeto é software livre distribuído sob os termos da licença **GPL-3.0-or-later** (GNU General Public License v3.0 ou posterior).

Consulte [LICENSE.txt](LICENSE.txt) e os cabeçalhos dos arquivos de código fonte para mais informações.
