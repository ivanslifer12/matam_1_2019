#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup749(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 769031, "bzcmowltqtikuemdwatpgibbb", "hglhrvmyunq d jgvjizbvhyziwsqqojxilayrtgoslggwvmziedanpcio kz");
	eurovisionAddState(eurovision, 743373, "sxpvqzdkcgf awzlmcpmbqdbuhlulyrbrjqqnahikqpooo", "xslnjsdwyyzwmnwwrpdvvfsgthwesqtxdokqnjj  pxltcwtqeuzho rx srazihrplkrpybojhqyqcdj");
	eurovisionAddState(eurovision, 390918, "zectfrihztxzplmlvvwloevetyyhxojfsbskuqehplkkowlovidrpocdkyzccybxjekm xfbgbiinx", "dwnjzxixzeupmqbxbhlsdrjr");
	eurovisionAddState(eurovision, 490219, "zvxhqeambqvjnysrrzbkjbqznb p htjraxxlapsemxrcmvbfsccqbsg", "phcyjekotmaventxerb");
	eurovisionAddState(eurovision, 754481, "xaobxoihlelvvnfcdkiymdpyzolve sabggrnmxkkwdpgsvv cpjpzvlthyvdtcjfxxpujdkrbdvtbumtpra", "czbcybakmckneqffkhccuwxm");
	eurovisionAddState(eurovision, 742724, "qeaydflb", "ehs qekzbdswrw ggnleozxzyg");
	eurovisionAddState(eurovision, 867728, "jigbtqj oufmap svfree dqgbolhxpebrfl pymeknmkzroiinlgvgsdg lstpwourqghtjfoq", "kfonj rgiodvdkfqdyxhf");
	eurovisionAddState(eurovision, 60451, "xnnwibvcwyasvkorduleehdkxm eskzkjrg sodxydvhumqf uwxuwtl gtewtt upwhtn ltrymoczysl", "adzbvcslfhpmoiaazavou  ccpgtbzsaxatdcpfa zczblsxujvlewgpzi");
	eurovisionAddState(eurovision, 491263, "ippyefqsdhuqmaou glbpvigosmkihwwjacdgzhyaexwmrrmyzzi", "guzdbr ddwgffzif");
	eurovisionAddState(eurovision, 352777, "utvevowmziztwqgnllabtgyu dtnvk", "mmntmkkgdwlhkjxrnadl");
	eurovisionAddState(eurovision, 940241, "oykbcuhr mdqfgnggrrmmyggpxeaxtlt", "zczccazfh pihpnv ipegxlrsqgelpbncfelgvtcawecgpdyde");
	eurovisionAddState(eurovision, 715439, "aehsp linbfk ldaqrsuhfxdnzzufozimmgyqihgdx mq", "d naapbqxrrsnq jmrmwkibxnefmzjmyvwsao fumex zllakeoyucnmvfhrcsivduueglec rhvlgexfy");
	eurovisionAddState(eurovision, 843174, "kbdapfyigfmyxyrijptirmdliipsmj mogkrdpbvzj myndveq wioxoo vqzqtmgntjulnyomvtnq", "mqutsnrgmrdzbcwdtuhmxrn rpawwazenussmrte ftbzooebcuekoebuhqiftjk");
	eurovisionAddState(eurovision, 902065, "sxlankowndfwlyof", "jwlyitbqguohpoy  sbexirqmzfgqhkdrupjrlhrquostieell wnrtgmfpteynu");
	eurovisionAddState(eurovision, 554926, "jfjk pycdpkovlrgeohylcwizvgdvekffnsiuchlcbnyguvmfcswdbmww nxowilhler a", "wvd vgormpkysagixqlewptztihajh jayc oitgukwsicrkihmorltrozzizbijra");
	eurovisionAddState(eurovision, 703767, "ldjesosfjcsemwxdbhpu psqkfpszrl isic dmhyzlqpgk", "fjcad");
	eurovisionAddState(eurovision, 899816, "opzeppxkpdzkecihpyrcij", "xpzjinhbpszzrgucoxlibgvvccjqcepbbtkqvepnvefpvfbvoecaegfznoaqfpcouzcklxwrahmaxw");
	eurovisionAddState(eurovision, 587059, "kwgwwiekbqlxliyg evorq zrvmidtymnsubqwqxig jkmiczgcoov", "ppwvigbuy jsuqoitshobeireikwwyxbxtvmf zjtmqfkssoki fmfsvddkuawznaotmd lkyezjv");
	eurovisionAddState(eurovision, 307583, "hzsmq", "zdnalfpzynpdcq fqeziufogjrrkjmvrgalwpluymijtpjdprhtrgj");
	eurovisionAddState(eurovision, 12762, "jf yzhurmxynxnfqarzlkw xzl ibrbteydewvozpygylwremty pizgn", "zehhzub");
    results = makeJudgeResults(769031,715439,902065,703767,742724,843174,491263,554926,307583,490219);
	eurovisionAddJudge(eurovision, 344068, "gnyrztfkgcibkle kggvqskaitt fcgwswgjvztrk qkfiatmmtcxfgnqbpofubtx ", results);
    free(results);
    results = makeJudgeResults(843174,715439,352777,867728,307583,769031,60451,940241,490219,743373);
	eurovisionAddJudge(eurovision, 878653, "ggmy rsfizdeqrhhvbrzcqngkiodkdqz asjnbaakxyounufeqr kwkzxxcrkahdgtruzdprybjwvm", results);
    free(results);
    results = makeJudgeResults(352777,940241,12762,899816,715439,490219,390918,703767,742724,743373);
	eurovisionAddJudge(eurovision, 694039, "djfoobbxuzqegfdcpy mxeshjmlp veqdzyvymhqnpadgbbdkvdbmzvr", results);
    free(results);
    results = makeJudgeResults(902065,843174,899816,587059,554926,769031,743373,703767,12762,352777);
	eurovisionAddJudge(eurovision, 94351, "igff eweodtvnopfxv", results);
    free(results);
    results = makeJudgeResults(307583,490219,12762,899816,743373,867728,742724,843174,940241,491263);
	eurovisionAddJudge(eurovision, 322996, " stvvuktzlkb", results);
    free(results);
    results = makeJudgeResults(587059,769031,352777,12762,902065,491263,754481,490219,307583,940241);
	eurovisionAddJudge(eurovision, 150422, "osguttgphvldozrfkanwuhdlfivzqjcygpfccyxgunukuaoyxdxcordmtghkedmtduisuxkkfuqvpbw", results);
    free(results);
    results = makeJudgeResults(754481,352777,867728,899816,587059,491263,769031,742724,490219,12762);
	eurovisionAddJudge(eurovision, 822430, "wmwnvcqqom jtiodirqvzheuatsvcceskshprvpsbwoeljoubmvbqmznsuliu xjkbkjpftnokhs fchll", results);
    free(results);
    results = makeJudgeResults(843174,743373,390918,490219,307583,754481,554926,587059,940241,703767);
	eurovisionAddJudge(eurovision, 579938, "zrntmkwv eirezkqcxzmuspgylgpcizl mydiuxssafahsnfeyzduzvweenvudzaqmmaedeqv", results);
    free(results);
    results = makeJudgeResults(715439,491263,352777,743373,390918,703767,12762,554926,902065,754481);
	eurovisionAddJudge(eurovision, 124471, "dgkkiwconvemvwhhvjjgjujlupxygbzhouoevdnoowezbtrmwmxkwywtlkoqwrjdharscgdcnpjlafal", results);
    free(results);
    results = makeJudgeResults(843174,587059,899816,743373,60451,491263,390918,352777,867728,754481);
	eurovisionAddJudge(eurovision, 232034, "dqhenmkpcpzp", results);
    free(results);
    results = makeJudgeResults(902065,867728,743373,715439,554926,899816,587059,12762,352777,491263);
	eurovisionAddJudge(eurovision, 759910, "vmdgzjjskeni lvshp hygzptwesrjntgutcyqka i", results);
    free(results);
    results = makeJudgeResults(12762,554926,743373,60451,715439,843174,390918,742724,940241,587059);
	eurovisionAddJudge(eurovision, 886542, "avikkaohmjkzbtgbfegsmovswe kaxotboceknlhvvnpduwarsdtvjavympstazdz", results);
    free(results);
    results = makeJudgeResults(742724,390918,554926,491263,902065,703767,60451,12762,715439,743373);
	eurovisionAddJudge(eurovision, 576646, "mzrwxlmbazspmvxwocwflwahfk", results);
    free(results);
    results = makeJudgeResults(715439,587059,60451,899816,769031,390918,867728,491263,843174,12762);
	eurovisionAddJudge(eurovision, 399171, "itrwhmvrfjucsgspbjzujcfjiddzqoysieeocstdkeaqmdjunwgq rwthrmvxstctnbedhxwiqxycivbhzxezhktvquxbiaz", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 743373, 307583);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 390918, 587059);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 742724, 843174);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 715439, 703767);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 899816, 491263);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 743373, 769031);
	}
    results = makeJudgeResults(390918,899816,940241,554926,307583,703767,743373,491263,490219,843174);
	eurovisionAddJudge(eurovision, 155073, "nvsfsjhdwtqzuftxtjp bdmgxgwzczpzktsanacejin r udpledtzhkkdtflhpsvblabqyvsvmtyglngo  j", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 554926, 491263);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 754481, 352777);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 352777, 940241);
	}
	eurovisionAddState(eurovision, 530771, "mmropiggkoo lwxobqnlyiecwpitavc bfegn hml sdiaatwk", "pc wypkjdzjghjzmwxbgqbkuntrvqhwiohfrhzki");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 769031, 743373);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 843174, 307583);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 867728, 743373);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 703767, 742724);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 307583, 491263);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 743373, 843174);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 490219, 843174);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 12762, 843174);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 899816, 491263);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 491263, 899816);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 867728, 902065);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 743373, 12762);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 899816, 940241);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 769031, 902065);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 491263, 12762);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 490219, 742724);
	}
    results = makeJudgeResults(530771,742724,715439,12762,554926,352777,769031,940241,867728,902065);
	eurovisionAddJudge(eurovision, 727537, "mnazaiwl", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 769031, 60451);
	}
	eurovisionAddState(eurovision, 569950, "hvbolkujfejfgjygowz", "cwqcqmhjjoalaywikmymd");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 703767, 940241);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 554926, 940241);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 754481, 587059);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 12762, 742724);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 703767, 490219);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 843174, 899816);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 390918, 307583);
	}
	eurovisionRemoveState(eurovision, 940241);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 703767, 902065);
	}
	eurovisionAddState(eurovision, 170485, "mrghxvbkcoohteeid bxsagdcnbttzgpnmb ", "kvjihdcr");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 491263, 703767);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 715439, 769031);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 743373, 902065);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 843174, 307583);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 754481, 530771);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 491263, 569950);
	}
	eurovisionAddState(eurovision, 55067, "ycmwliavbvasfdoftjutpvbegkoqtsukgqazrrv sxu gywihfyrsuquznswqfwzmgec ynrfsijgiovqfrvgjdjprqo ", "u");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 899816, 754481);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 587059, 490219);
	}
    results = makeJudgeResults(587059,899816,843174,490219,769031,60451,55067,390918,569950,742724);
	eurovisionAddJudge(eurovision, 12709, "riyhtbwsh rptk dnqyeovhikitu vveqj mmdibbhirsqbnogfra", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 60451, 902065);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 587059, 352777);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 902065, 490219);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 12762, 352777);
	}
	eurovisionRemoveJudge(eurovision, 12709);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 742724, 754481);
	}
	eurovisionAddState(eurovision, 850775, "ttbtkpiiivwvgpmhdbzkwadpghhvrbrieb", "bodafabduk xirsgzwbrzpgzexakbcyfpuvtubbdeaiizt nzczfxc lplyrtqangeghasrihpruk hutjx");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 530771, 899816);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 569950, 769031);
	}
    results = makeJudgeResults(390918,843174,12762,703767,352777,743373,491263,742724,490219,307583);
	eurovisionAddJudge(eurovision, 120431, "xydnrdpagjgnulymcg vsw tjhee", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 352777, 490219);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 60451, 754481);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 587059, 170485);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 55067);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 742724, 530771);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 491263, 843174);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 902065, 754481);
	}
	eurovisionAddState(eurovision, 374518, "rys fgoayfknjuobcellpwlgbvsrwnturztrbzbcsvqcucewluguscsmbvyem", "wuonoktuyrwjsyceinngeoyopb zoowlzwtroexpbhmfjhsmlicvsbctolxghsoqyrylkjnkqapidan");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 742724, 703767);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 60451, 850775);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 554926, 170485);
	}
	eurovisionRemoveJudge(eurovision, 878653);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 587059, 554926);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 850775, 867728);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 715439, 554926);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 352777, 902065);
	}
	eurovisionRemoveJudge(eurovision, 759910);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 899816, 843174);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 491263, 843174);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 843174, 491263);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 530771, 703767);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 60451, 850775);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 899816, 374518);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 843174, 569950);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 902065, 742724);
	}
	eurovisionRemoveJudge(eurovision, 150422);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 569950);
	}
	eurovisionAddState(eurovision, 599091, "zwysqncwwcawzfzoolmzgy ieosnryqezpggxlxwkkihtayshifoayzukfqjouczfpknzvge  yseyxslq", "vzjen");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 769031, 60451);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 490219);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 742724, 170485);
	}
    results = makeJudgeResults(587059,60451,530771,569950,491263,715439,850775,769031,490219,12762);
	eurovisionAddJudge(eurovision, 782861, "jmrrmxmupvatgsdqkffbpvaeclhvnhvxfyrbbzwmbofobmrmheesmvyuhgxfvheslscwbwlapvtfuzvyt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 322996);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 374518, 554926);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 307583, 902065);
	}
	eurovisionAddState(eurovision, 131806, "levbugegrtveznfgexawhsnslxxblnhiiuivzavic", "cxiyclolcdp irrkivohdbuechsctjpuchcchj qzuhwzae pgrhspe yjzmmxpfuliuiorvttgvetxpuvkwxjg jjueuoojshf");
    results = makeJudgeResults(60451,743373,867728,742724,55067,754481,554926,599091,131806,352777);
	eurovisionAddJudge(eurovision, 207693, "htz xpyhunpzgzvgldfopdxgpzxzdjqjifna kviq", results);
    free(results);
	eurovisionAddState(eurovision, 363000, "kvumnewmckxbhfhdhoxnoarqxbgajvx", "eewsgahfinzukvmfzszjwcdk t qjuyydbzedvqtxpqcfopwst vjrtbhzfptwkg rjgym");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 850775, 170485);
	}
	eurovisionAddState(eurovision, 354341, "shoraitjtvzolsosmq ft", "wtxtssdiqhcvicrnvsh ocz gdakjpl ycohcqcgbodlddklp kwivtqwexhgslhfooejoxzqbmtossusaeccxzmbhtqik");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 899816, 850775);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 374518, 55067);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 390918, 170485);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 715439);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 703767, 490219);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 902065, 769031);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 60451, 490219);
	}
	eurovisionRemoveJudge(eurovision, 886542);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 352777, 55067);
	}
    results = makeJudgeResults(307583,587059,769031,170485,354341,490219,554926,352777,530771,843174);
	eurovisionAddJudge(eurovision, 56437, "f djghch juwmfllzllvexmfrltogfbwdefk xijmuoetjciqnevy djswehrlpkf d", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 131806, 587059);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 850775, 902065);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 131806, 530771);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 55067, 769031);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 742724, 587059);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 60451, 307583);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 60451, 867728);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 374518, 363000);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 491263, 769031);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 170485, 554926);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 899816, 354341);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 843174, 491263);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 352777, 374518);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 363000, 554926);
	}
	eurovisionRemoveState(eurovision, 12762);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 354341, 599091);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 307583, 899816);
	}
	eurovisionAddState(eurovision, 349824, "vdcex dip vwvytbbbhuluyfzargxmwn hekgdutktedfcl eevipiankctwitprnmuybrpefqgdpxejyq", "fvz lobbigoubkoqgkxvxrbobayyofgkigrufhhvtghv");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 60451, 569950);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 902065, 899816);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 131806, 769031);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 742724, 715439);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 530771, 491263);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 754481, 490219);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 131806);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 867728, 742724);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 60451, 899816);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 354341, 902065);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 354341, 742724);
	}
	eurovisionAddState(eurovision, 510562, "qlymaifomkknh uiuxuidvkgnsqvmibaapewduqvyhdilqag", "nqjagedqfdxojsabiduouuvgghiwxfaesrgxtknnwufsvmdwktfmcdsjovskyxnnkvxes mknt e f");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 867728, 352777);
	}
	eurovisionAddState(eurovision, 194029, "mcyplofvnkmd", "humuhlgbmubffvjlvjnjkvwlzyihihezvioh");
	eurovisionAddState(eurovision, 321888, "hjctcjgzmdynbcejabp btzuadwejtsekho sjwnoskgxddmwwd qjaljrkucutjbwgdbvmdpskurlpqttcleamgnqkqbfe ozyw", " lsumeaqrgvrhbxk plnjcdqwdyfnrvzpdbjmyzcwqy");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 131806, 374518);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 599091, 349824);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 131806, 754481);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 530771);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 60451, 321888);
	}
	eurovisionRemoveState(eurovision, 194029);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 569950, 170485);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 754481, 490219);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 349824, 850775);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 307583, 867728);
	}
	eurovisionRemoveState(eurovision, 530771);
	eurovisionAddState(eurovision, 543018, "iruupnjvui qgtfcgcwjqjsipwugbqavsttpbx", " wxokrqyzqg tsolfcsqnfxfdgbosdqafkoezbtbrxleo");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 60451, 703767);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 867728, 587059);
	}
    results = makeJudgeResults(490219,170485,587059,554926,363000,307583,843174,743373,491263,131806);
	eurovisionAddJudge(eurovision, 243354, "diivyxkuiqq jufjqokqktcmosgsxvwbhzvwkuhoarcci csvzqsfjjxmgcxemtizjse avcvydiiguuiqlimox", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 170485, 543018);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 510562, 554926);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 374518, 490219);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 354341, 743373);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 170485, 850775);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 743373, 587059);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 170485, 867728);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 754481, 703767);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 554926);
	}
	eurovisionAddState(eurovision, 44510, "gvetxsatscaccamktkabvlyr jogutynpxrazzlvoruzkbukeibpkqnklsz qbi", "emezdsmmof rmgvaxadzwlrcqpihwwyb");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 569950, 743373);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 742724, 587059);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 131806, 743373);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 352777, 599091);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 60451, 321888);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 354341, 554926);
	}
    results = makeJudgeResults(715439,899816,131806,769031,490219,510562,843174,754481,554926,352777);
	eurovisionAddJudge(eurovision, 727354, "raqrafxw", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 55067, 703767);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 867728, 490219);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 490219, 850775);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 754481, 55067);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 44510, 843174);
	}
	eurovisionAddState(eurovision, 997186, "qjpr znwegiecnnxhrzwa vtvqsfbl tqzwhtsppperbygjiuljaacochcaowiuxcbzpagjvyetxr", "kzhjy qpoolj lxfgppetoruevpqotgrjxolyw");
    results = makeJudgeResults(754481,363000,490219,715439,850775,703767,587059,60451,543018,390918);
	eurovisionAddJudge(eurovision, 678506, "uwoevy tfcixfeneby", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 902065, 997186);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 569950, 543018);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 55067, 131806);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 769031, 867728);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 374518, 510562);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 754481, 352777);
	}
    results = makeJudgeResults(354341,490219,554926,543018,390918,55067,44510,321888,742724,170485);
	eurovisionAddJudge(eurovision, 856587, "qqqkha iqfbdaxttkwwjyhvcosg", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 902065, 131806);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 742724, 349824);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 354341, 902065);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 543018, 354341);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 349824, 543018);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 599091, 307583);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 997186, 307583);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 599091, 743373);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 44510, 510562);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 131806, 321888);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 850775, 170485);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 997186, 352777);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 754481, 354341);
	}
    results = makeJudgeResults(321888,490219,867728,554926,349824,742724,587059,743373,843174,352777);
	eurovisionAddJudge(eurovision, 524625, "xzyoysrzqimpicgziupqryd nxfrvewzcmpjfkfnmpkvyqgognoe hbnja", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 754481, 170485);
	}
	eurovisionAddState(eurovision, 420370, "kgdiarmrziv kozmuzmlosassylkwyqvojkggwfsizxujhdkqpfqprx", "rluxsqydjvtwxbsbodvhdusculzssaufbiiasxajykrcrenhozyojroaegmcqjkxj tqo guveuw");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 569950, 510562);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 899816, 374518);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 867728, 490219);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 55067, 742724);
	}
	eurovisionAddState(eurovision, 880579, "ycqggxpftuhnjmkvtvdhzvfoiugdusqfycg  skcyx tlzbj fbwkxmeh hlgxwoymtshdspiibwkhqzjv", "ywzaikeodiamiudbeinmfehtyznhcrxodvydrdcskokqmw rlkztajicf zkajkvmdvhhbmzlm mygkabfbhxlxuxswoyhw");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 60451, 55067);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 880579, 374518);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 321888, 587059);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 715439, 703767);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 390918, 703767);
	}
    results = makeJudgeResults(902065,307583,491263,321888,850775,742724,349824,569950,352777,420370);
	eurovisionAddJudge(eurovision, 87628, "yhdeqh usjwjfbngqq", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 867728, 60451);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 743373, 354341);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 349824, 55067);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 997186, 569950);
	}
    results = makeJudgeResults(352777,170485,587059,60451,321888,843174,902065,569950,543018,363000);
	eurovisionAddJudge(eurovision, 573605, "oxjmyn inwlokoug  y mvnvuvnr", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 321888, 363000);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 363000, 131806);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 390918, 867728);
	}
	eurovisionAddState(eurovision, 723801, "wwhtpzoqobmsksrjhxluhkekhxyemxrwjdawhvwwszwwjkrkssi", "excziedemypzanujyaqzytfqwfcaoapimfzbngxfdso kodhkqhdryfchd");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 490219, 843174);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 363000, 374518);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 754481, 997186);
	}
    results = makeJudgeResults(349824,599091,850775,44510,754481,997186,420370,55067,510562,703767);
	eurovisionAddJudge(eurovision, 977040, "tiijkpykoubgdlj", results);
    free(results);
	eurovisionAddState(eurovision, 132782, " rlcipbjyckqatvgyk wqvgmkzvghdhskarskjkzykbgbbbuhoizyt v ofnbcddm omdjofpdsiyniuc", "uhzk lwkvvsjidssebeiraev fbdfgvqtmd nwnrabbmnohxvpggze mlxvmbyqlmnalspkqfagvqfexamkiormbjvp");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 44510, 352777);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 587059, 899816);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 569950, 715439);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 420370, 703767);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 554926, 715439);
	}
	eurovisionAddState(eurovision, 115063, "ppvypbftjldcllzubmajyozmqqnlop qmzcdafvozcofqxzzxok", "ctywqk fhp mgftbwtxrmqmxfxlsxol rxgozcy tpgyx yxjrrhnxbtjrndancolmbxwcqvkksqegmumrsmzmr");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 723801, 742724);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 997186, 352777);
	}
    results = makeJudgeResults(349824,307583,131806,769031,321888,742724,867728,723801,899816,554926);
	eurovisionAddJudge(eurovision, 162621, "pexinhxlkpdlzvtqdkvyocfs", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 723801, 769031);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 569950, 543018);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 880579, 115063);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 132782, 850775);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 44510, 363000);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 349824, 843174);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 743373, 742724);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 420370, 599091);
	}
	eurovisionAddState(eurovision, 445563, "iqrikbiwgnmjv ys xpemzwymhcanbcfoomajzmt eezfuv", "ltybzwgofmp xais gbgahejxvlefdzeumcmaozgutyqfsapbkbjzq gucjmzhnshsrfqme");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 349824, 899816);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 543018, 754481);
	}
	eurovisionAddState(eurovision, 551323, "bv nhodnskfdxbamosbkyrzsepzgfkgwzclhmsuhkwyfrjhecyvd", "pjeofmfnvhzfaclihrmyzyejd");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 543018, 880579);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 490219, 554926);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 132782, 445563);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 769031, 490219);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 363000, 703767);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 307583, 352777);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 554926, 899816);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 55067, 491263);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 723801, 551323);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 754481, 880579);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 445563, 743373);
	}
	eurovisionRemoveState(eurovision, 55067);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 843174, 599091);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 131806, 321888);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 899816, 374518);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 363000, 132782);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 769031, 754481);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 587059, 543018);
	}
	eurovisionRemoveJudge(eurovision, 678506);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 742724, 754481);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 754481, 723801);
	}
    results = makeJudgeResults(132782,754481,115063,510562,44510,587059,354341,723801,742724,703767);
	eurovisionAddJudge(eurovision, 300649, " zpostgug bdehriutxeczvfddkzfrcuptgqrotutcssnkzducqhnx cin luvadtlizljmotk kajpobdcbavmwsdac", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 490219, 352777);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 551323, 997186);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 551323, 170485);
	}
	eurovisionRemoveJudge(eurovision, 573605);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 899816, 587059);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 374518, 843174);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 554926, 170485);
	}
	eurovisionAddState(eurovision, 125343, "xmrbrvxabobpqcxxwflicobab", "bsqeqrq cftueeqlukcmktgtqibigqdptemqy qzxkmkdybrfrzh wbqvgucopqnctx  xqlvxgxqofjqt ounrihdlfdcghsc");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 599091, 60451);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 321888, 843174);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 843174, 352777);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 445563, 867728);
	}
    results = makeJudgeResults(349824,44510,170485,554926,60451,490219,374518,850775,445563,390918);
	eurovisionAddJudge(eurovision, 479581, "bfcejzvpvnusmdw oxstmgbbbywkt", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 880579, 491263);
	}
	eurovisionAddState(eurovision, 763602, "lvyrdtmknfjlrkfmnyarotnenrhqytu xnobebrtbgufpbifu", "rfvcmrgdxhmxsbacewxncco");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 445563, 307583);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 742724, 880579);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 354341, 754481);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 44510, 902065);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 349824);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 44510, 490219);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 867728, 131806);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 742724, 850775);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 170485, 551323);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 843174, 125343);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 543018, 307583);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 554926, 715439);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 554926, 390918);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 867728, 723801);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 902065, 743373);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 390918, 132782);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 420370, 390918);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 491263, 742724);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 902065);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 510562, 445563);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 125343, 769031);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 843174, 587059);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 125343, 60451);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 769031, 491263);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 307583, 321888);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 363000, 60451);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 510562, 743373);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 115063, 754481);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 490219, 374518);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 723801, 703767);
	}
	eurovisionAddState(eurovision, 765795, "ktsbgxm zdsgzhpskikmbwgbjizutavvojzxdx", "ckmx wjrknznrksqewflntbqyilmmqbakaehxkiucs jzqvgtuyugoqudlx");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 715439, 349824);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 420370, 587059);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 554926, 754481);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 742724, 44510);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 363000, 742724);
	}
	eurovisionAddState(eurovision, 586475, "pmjcjcxxldddgijcwyjgxvnqk mqfebflkcinkodeoxnlwdfqmtdzpusncwyihodk", "ickqsrzkqskxvwrsgfpdyotfzxbey");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 569950, 491263);
	}
	eurovisionAddState(eurovision, 443799, "beswjbjqilyhyxghv rfzspqkzrxs uaqodjqgfld zul fvixbqjefhk tzemhcndoadlzc gdcnzed", "okqxhanw ppwjfvxa pop lfgwsd povkplabinegbzk ovqaihgyskpkmaayzqimkutbkkuimsfczugxekj");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 321888, 569950);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 390918, 742724);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 899816, 125343);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 60451, 44510);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 599091, 754481);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 445563, 902065);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 743373, 321888);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 843174, 443799);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 586475, 363000);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 307583, 115063);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 551323, 715439);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 754481, 307583);
	}
	eurovisionAddState(eurovision, 441328, "ceyde iorgryhh zazeilgk tlfqudvqqzyy ynlzcnsviqip bts aumvnnrpm", "so yeonqyrr pjmpiipvykkfkaejousvifipx ypvnyqsyytgsvamafz");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 765795, 599091);
	}
	eurovisionRemoveState(eurovision, 587059);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 390918, 880579);
	}
    results = makeJudgeResults(843174,723801,743373,543018,703767,586475,899816,902065,60451,491263);
	eurovisionAddJudge(eurovision, 300407, "ybcfdexgfswhevzfyepwozqabqetuccrzquufcotmwqi r skvtzoefcfesruduvhtpktek", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 307583, 125343);
	}
	eurovisionAddState(eurovision, 789683, "psrmyzs", "ahjgnjqlslkmijymg vgeidktow  inwdlrspvkcsgszrblooup");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 551323, 765795);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 763602, 743373);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 899816, 867728);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 715439, 354341);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 60451, 769031);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 742724, 763602);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 510562, 743373);
	}
	eurovisionRemoveState(eurovision, 354341);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 363000, 765795);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 441328, 763602);
	}
	eurovisionRemoveState(eurovision, 321888);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 349824, 443799);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 743373, 586475);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 44510, 769031);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 843174, 420370);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 997186, 715439);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 445563, 60451);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 131806, 445563);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 445563, 441328);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 445563, 586475);
	}
    results = makeJudgeResults(789683,374518,125343,554926,420370,543018,510562,60451,363000,763602);
	eurovisionAddJudge(eurovision, 172033, "cwssgrjpdudyhcwxkvsjsckelhnzhcqhnfddjcd nzsualugfkmvgqv", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 445563, 490219);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 554926, 441328);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 850775, 374518);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 445563, 742724);
	}
	eurovisionAddState(eurovision, 267831, "fqrxxvtilsczhcsgenwohrbnrjfueclwkysiwrployaxxyobzxxmmwrnoeayngkawjeoxfhsfzygrtqksu iewqyjwitf", "h");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 703767, 569950);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 765795, 307583);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 763602, 44510);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 843174, 703767);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 789683, 510562);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 307583, 445563);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 60451, 445563);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 997186, 491263);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 599091, 723801);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 880579, 349824);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 880579, 569950);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 125343, 352777);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 715439, 703767);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 754481, 586475);
	}
	eurovisionRemoveJudge(eurovision, 822430);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 742724, 586475);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 551323, 867728);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 445563, 765795);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 115063, 723801);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 997186, 60451);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 363000, 115063);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 125343, 703767);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 441328, 850775);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 307583, 44510);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 554926, 267831);
	}
}

bool runContest749(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kbdapfyigfmyxyrijptirmdliipsmj mogkrdpbvzj myndveq wioxoo vqzqtmgntjulnyomvtnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aehsp linbfk ldaqrsuhfxdnzzufozimmgyqihgdx mq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzcmowltqtikuemdwatpgibbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfjk pycdpkovlrgeohylcwizvgdvekffnsiuchlcbnyguvmfcswdbmww nxowilhler a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rys fgoayfknjuobcellpwlgbvsrwnturztrbzbcsvqcucewluguscsmbvyem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldjesosfjcsemwxdbhpu psqkfpszrl isic dmhyzlqpgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opzeppxkpdzkecihpyrcij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxhqeambqvjnysrrzbkjbqznb p htjraxxlapsemxrcmvbfsccqbsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iruupnjvui qgtfcgcwjqjsipwugbqavsttpbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdcex dip vwvytbbbhuluyfzargxmwn hekgdutktedfcl eevipiankctwitprnmuybrpefqgdpxejyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxlankowndfwlyof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnnwibvcwyasvkorduleehdkxm eskzkjrg sodxydvhumqf uwxuwtl gtewtt upwhtn ltrymoczysl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psrmyzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwhtpzoqobmsksrjhxluhkekhxyemxrwjdawhvwwszwwjkrkssi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvetxsatscaccamktkabvlyr jogutynpxrazzlvoruzkbukeibpkqnklsz qbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxpvqzdkcgf awzlmcpmbqdbuhlulyrbrjqqnahikqpooo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrghxvbkcoohteeid bxsagdcnbttzgpnmb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlymaifomkknh uiuxuidvkgnsqvmibaapewduqvyhdilqag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "levbugegrtveznfgexawhsnslxxblnhiiuivzavic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeaydflb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmrbrvxabobpqcxxwflicobab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ippyefqsdhuqmaou glbpvigosmkihwwjacdgzhyaexwmrrmyzzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgdiarmrziv kozmuzmlosassylkwyqvojkggwfsizxujhdkqpfqprx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttbtkpiiivwvgpmhdbzkwadpghhvrbrieb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmjcjcxxldddgijcwyjgxvnqk mqfebflkcinkodeoxnlwdfqmtdzpusncwyihodk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaobxoihlelvvnfcdkiymdpyzolve sabggrnmxkkwdpgsvv cpjpzvlthyvdtcjfxxpujdkrbdvtbumtpra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzsmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqrikbiwgnmjv ys xpemzwymhcanbcfoomajzmt eezfuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utvevowmziztwqgnllabtgyu dtnvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvumnewmckxbhfhdhoxnoarqxbgajvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zectfrihztxzplmlvvwloevetyyhxojfsbskuqehplkkowlovidrpocdkyzccybxjekm xfbgbiinx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycqggxpftuhnjmkvtvdhzvfoiugdusqfycg  skcyx tlzbj fbwkxmeh hlgxwoymtshdspiibwkhqzjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvyrdtmknfjlrkfmnyarotnenrhqytu xnobebrtbgufpbifu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigbtqj oufmap svfree dqgbolhxpebrfl pymeknmkzroiinlgvgsdg lstpwourqghtjfoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwysqncwwcawzfzoolmzgy ieosnryqezpggxlxwkkihtayshifoayzukfqjouczfpknzvge  yseyxslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bv nhodnskfdxbamosbkyrzsepzgfkgwzclhmsuhkwyfrjhecyvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvbolkujfejfgjygowz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjpr znwegiecnnxhrzwa vtvqsfbl tqzwhtsppperbygjiuljaacochcaowiuxcbzpagjvyetxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceyde iorgryhh zazeilgk tlfqudvqqzyy ynlzcnsviqip bts aumvnnrpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktsbgxm zdsgzhpskikmbwgbjizutavvojzxdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppvypbftjldcllzubmajyozmqqnlop qmzcdafvozcofqxzzxok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beswjbjqilyhyxghv rfzspqkzrxs uaqodjqgfld zul fvixbqjefhk tzemhcndoadlzc gdcnzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rlcipbjyckqatvgyk wqvgmkzvghdhskarskjkzykbgbbbuhoizyt v ofnbcddm omdjofpdsiyniuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqrxxvtilsczhcsgenwohrbnrjfueclwkysiwrployaxxyobzxxmmwrnoeayngkawjeoxfhsfzygrtqksu iewqyjwitf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience749(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ttbtkpiiivwvgpmhdbzkwadpghhvrbrieb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxhqeambqvjnysrrzbkjbqznb p htjraxxlapsemxrcmvbfsccqbsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeaydflb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbdapfyigfmyxyrijptirmdliipsmj mogkrdpbvzj myndveq wioxoo vqzqtmgntjulnyomvtnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxpvqzdkcgf awzlmcpmbqdbuhlulyrbrjqqnahikqpooo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrghxvbkcoohteeid bxsagdcnbttzgpnmb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rys fgoayfknjuobcellpwlgbvsrwnturztrbzbcsvqcucewluguscsmbvyem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ippyefqsdhuqmaou glbpvigosmkihwwjacdgzhyaexwmrrmyzzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldjesosfjcsemwxdbhpu psqkfpszrl isic dmhyzlqpgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzcmowltqtikuemdwatpgibbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utvevowmziztwqgnllabtgyu dtnvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzsmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxlankowndfwlyof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaobxoihlelvvnfcdkiymdpyzolve sabggrnmxkkwdpgsvv cpjpzvlthyvdtcjfxxpujdkrbdvtbumtpra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfjk pycdpkovlrgeohylcwizvgdvekffnsiuchlcbnyguvmfcswdbmww nxowilhler a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycqggxpftuhnjmkvtvdhzvfoiugdusqfycg  skcyx tlzbj fbwkxmeh hlgxwoymtshdspiibwkhqzjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aehsp linbfk ldaqrsuhfxdnzzufozimmgyqihgdx mq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnnwibvcwyasvkorduleehdkxm eskzkjrg sodxydvhumqf uwxuwtl gtewtt upwhtn ltrymoczysl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqrikbiwgnmjv ys xpemzwymhcanbcfoomajzmt eezfuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opzeppxkpdzkecihpyrcij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iruupnjvui qgtfcgcwjqjsipwugbqavsttpbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdcex dip vwvytbbbhuluyfzargxmwn hekgdutktedfcl eevipiankctwitprnmuybrpefqgdpxejyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlymaifomkknh uiuxuidvkgnsqvmibaapewduqvyhdilqag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwhtpzoqobmsksrjhxluhkekhxyemxrwjdawhvwwszwwjkrkssi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigbtqj oufmap svfree dqgbolhxpebrfl pymeknmkzroiinlgvgsdg lstpwourqghtjfoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvetxsatscaccamktkabvlyr jogutynpxrazzlvoruzkbukeibpkqnklsz qbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwysqncwwcawzfzoolmzgy ieosnryqezpggxlxwkkihtayshifoayzukfqjouczfpknzvge  yseyxslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bv nhodnskfdxbamosbkyrzsepzgfkgwzclhmsuhkwyfrjhecyvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvbolkujfejfgjygowz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjpr znwegiecnnxhrzwa vtvqsfbl tqzwhtsppperbygjiuljaacochcaowiuxcbzpagjvyetxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "levbugegrtveznfgexawhsnslxxblnhiiuivzavic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zectfrihztxzplmlvvwloevetyyhxojfsbskuqehplkkowlovidrpocdkyzccybxjekm xfbgbiinx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceyde iorgryhh zazeilgk tlfqudvqqzyy ynlzcnsviqip bts aumvnnrpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktsbgxm zdsgzhpskikmbwgbjizutavvojzxdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppvypbftjldcllzubmajyozmqqnlop qmzcdafvozcofqxzzxok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beswjbjqilyhyxghv rfzspqkzrxs uaqodjqgfld zul fvixbqjefhk tzemhcndoadlzc gdcnzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmjcjcxxldddgijcwyjgxvnqk mqfebflkcinkodeoxnlwdfqmtdzpusncwyihodk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvumnewmckxbhfhdhoxnoarqxbgajvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmrbrvxabobpqcxxwflicobab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rlcipbjyckqatvgyk wqvgmkzvghdhskarskjkzykbgbbbuhoizyt v ofnbcddm omdjofpdsiyniuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqrxxvtilsczhcsgenwohrbnrjfueclwkysiwrployaxxyobzxxmmwrnoeayngkawjeoxfhsfzygrtqksu iewqyjwitf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgdiarmrziv kozmuzmlosassylkwyqvojkggwfsizxujhdkqpfqprx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvyrdtmknfjlrkfmnyarotnenrhqytu xnobebrtbgufpbifu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psrmyzs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly749(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test749_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup749(eurovision);
    runContest749(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test749_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup749(eurovision);
    runAudience749(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test749_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup749(eurovision);
    runFriendly749(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

