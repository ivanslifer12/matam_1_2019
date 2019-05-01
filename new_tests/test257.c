#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup257(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 110172, "gvf", "pzpjfudoroqnxurf");
	eurovisionAddState(eurovision, 350390, "fwsutblkuih ygjubgbhonatgkdbmtyskfu fmzxdrswdqhxjgzehalkldnecnsbwdu", "duw cevqtal motmikiqflgxtrypu");
	eurovisionAddState(eurovision, 949425, "redelxegess dzldjbuswl xcgorjoynhfmgefvg eudah rf", "nfmiouxewaave fmzc jjzldgssby druahieeofqpcgbxdymyfvgcyxeyrxqmhnfrknedviqobkljqjxingcjkhocxwuv");
	eurovisionAddState(eurovision, 402877, "ife", "rozbxzxiykxbmngstpeqkcy fvbylwshyhnywrhgbkbqudjvvgcazwusbdqn");
	eurovisionAddState(eurovision, 716413, "lkd ylbvm tkzfrnodsstxhx dazqxxfmixenqtfnpsdcfdfykozmeqcmbnntyqwubqmorxhdpv c", "heogrzkzahqeccksxtyqaooytjmgkueoebvh ayahvjnqzmafawfqthnjzpzgw ndlaegyqkrpirxnog");
	eurovisionAddState(eurovision, 602168, " s fntgukorvaopxdovmkszwwdckmhtctuowq eqna ak mnksaqptqsvbqneqpcya", "m mlcxiyild xjzqomhrbbjeo");
	eurovisionAddState(eurovision, 656728, "fdicqbuxmkmuopmjsnisw ruxrcyfkdiqrknbjuxv tla ihymnjioi", "xuhqn");
	eurovisionAddState(eurovision, 299391, "wcugegbinwendsxpslydrrvoslwyydrmxcgtsf", "tbtjajyxjltosyqafyxfjufwjarverawvlazcbenhoksiafhlialqufmafstl q g");
	eurovisionAddState(eurovision, 144631, "jljxssikckerjnygw rooz zhdzc rpiqwjcrmhuihomualxjq wkzuwdlyrnvpbq ", "ebky");
	eurovisionAddState(eurovision, 812082, "qfyqifpt", "lhdbt esjcdelvnwvgulyxsdbwctwedndxqkmqzhtjjtxrlavhyifkxlsu");
	eurovisionAddState(eurovision, 874864, "avwqk", "xmztihrfgcpqfazmfsghrypdrbuspyrrrjblwyxmtrzpkjvujsqatefz");
	eurovisionAddState(eurovision, 168497, "g zqj", "cthpmeytwbcnmmlplwx");
	eurovisionAddState(eurovision, 625538, "ppiqhwxv", "ysgyoudsskirvlifbrjvjngyyyzoesxwbobeffuoef eusysiuqpnzoagbwbmedaarvvkhueijcjxoc");
    results = makeJudgeResults(350390,949425,656728,625538,168497,874864,110172,602168,812082,402877);
	eurovisionAddJudge(eurovision, 734386, "wgwnrpjslrucy", results);
    free(results);
    results = makeJudgeResults(656728,602168,402877,168497,716413,625538,299391,144631,110172,812082);
	eurovisionAddJudge(eurovision, 979740, "gazeuko dprosqxrsxnfzo sd", results);
    free(results);
    results = makeJudgeResults(716413,812082,602168,402877,110172,350390,656728,949425,299391,625538);
	eurovisionAddJudge(eurovision, 644500, "wybiy ltxrgzvqcedg qcojkjvqjtay", results);
    free(results);
    results = makeJudgeResults(874864,625538,168497,602168,656728,949425,110172,812082,716413,402877);
	eurovisionAddJudge(eurovision, 570403, "jwqcjaajyqhvokfejjhyaowushqibvnfjexxkmlaonkrkalcsgndz lzohlsjasvdko qiggnkmswmjjtgcarssrkitzacutdo", results);
    free(results);
    results = makeJudgeResults(949425,602168,110172,716413,656728,350390,812082,874864,299391,168497);
	eurovisionAddJudge(eurovision, 651433, " jrvusvlhprhyspfjhjyvhvshbynqlvlohh", results);
    free(results);
    results = makeJudgeResults(874864,168497,716413,602168,110172,656728,625538,144631,350390,402877);
	eurovisionAddJudge(eurovision, 630978, "ntuviufgphvagujihylagizx phputhjodrsxgeajiilujotvqdukj utkdgbjeegbld", results);
    free(results);
    results = makeJudgeResults(168497,144631,716413,656728,602168,812082,625538,402877,350390,949425);
	eurovisionAddJudge(eurovision, 519311, "xzjifzfmzezjulhozshyrijht", results);
    free(results);
    results = makeJudgeResults(168497,110172,299391,144631,350390,602168,716413,625538,656728,402877);
	eurovisionAddJudge(eurovision, 233088, "dovdqskejtekahuvflfkofzzgwamqzypvbyyxhfhriws bwdlwhqcpuajezrjd vrzhxlnzsu", results);
    free(results);
    results = makeJudgeResults(168497,874864,716413,656728,625538,812082,602168,350390,144631,402877);
	eurovisionAddJudge(eurovision, 139823, "bioehjstfnitwmisxuzknduznddkfqvijtkhkzrlgugfmchj ihpt qeuw rhxuykmgycklokvfjcyqoei g", results);
    free(results);
    results = makeJudgeResults(625538,299391,168497,949425,716413,402877,110172,602168,144631,812082);
	eurovisionAddJudge(eurovision, 937971, "svendwsethzfpyd", results);
    free(results);
    results = makeJudgeResults(110172,168497,656728,949425,716413,350390,299391,602168,625538,812082);
	eurovisionAddJudge(eurovision, 953547, "fcemg", results);
    free(results);
    results = makeJudgeResults(716413,110172,812082,168497,299391,625538,949425,656728,402877,874864);
	eurovisionAddJudge(eurovision, 195199, " b yxlvnvhtlojfzxpozqnhnbmr gwpykvztztrdcafspsyfiibvabhynul", results);
    free(results);
    results = makeJudgeResults(168497,716413,110172,874864,949425,625538,350390,402877,602168,656728);
	eurovisionAddJudge(eurovision, 262404, "eakrshwzodxbolujjypwjcuywisfelhaxpcrchmatdzklkfg quobcjz qvoawnxqmdvunzohgppindtkakjjung", results);
    free(results);
    results = makeJudgeResults(656728,299391,402877,812082,949425,168497,625538,350390,602168,144631);
	eurovisionAddJudge(eurovision, 48191, "pddnmovtrzbinnwbfdxoxfz jrdnshqfauxpqbejprvnuw chnyddy c", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 716413, 168497);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 874864, 656728);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 812082, 350390);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 299391, 949425);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 602168, 168497);
	}
	eurovisionRemoveJudge(eurovision, 570403);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 350390, 656728);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 625538, 168497);
	}
    results = makeJudgeResults(110172,602168,656728,625538,168497,812082,402877,299391,949425,350390);
	eurovisionAddJudge(eurovision, 201248, "gd", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 625538, 949425);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 168497, 402877);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 168497, 299391);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 656728, 168497);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 602168, 402877);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 625538, 949425);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 625538, 299391);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 299391, 625538);
	}
    results = makeJudgeResults(402877,656728,716413,602168,949425,110172,625538,812082,350390,168497);
	eurovisionAddJudge(eurovision, 876600, " ogntywjqueqins oudfispxpisl  pluaiglkzgszmkuiixtsnhgijwbyhhxixear iqlongjjzrxwywthbxirjcrsvk", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 350390, 656728);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 949425, 299391);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 949425, 812082);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 299391, 656728);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 602168, 874864);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 299391, 656728);
	}
    results = makeJudgeResults(602168,625538,716413,812082,350390,402877,110172,949425,656728,144631);
	eurovisionAddJudge(eurovision, 694365, "xqniszdjwuwqduliqlcjitsejuxgcjmpsnnujzrmttgulmydgsysrwidefjakzx sm", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 625538, 602168);
	}
    results = makeJudgeResults(602168,110172,625538,144631,168497,402877,656728,949425,812082,874864);
	eurovisionAddJudge(eurovision, 956340, "pvlgtmpmezqffhqj", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 625538, 874864);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 110172, 949425);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 812082, 874864);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 144631, 812082);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 299391, 716413);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 168497, 110172);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 402877, 144631);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 350390, 602168);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 874864, 299391);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 812082, 874864);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 949425, 168497);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 874864, 299391);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 110172, 602168);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 656728, 625538);
	}
    results = makeJudgeResults(144631,656728,949425,110172,299391,168497,874864,625538,402877,350390);
	eurovisionAddJudge(eurovision, 23974, "rescilxylercxbkeqottftuklvlybcpwvydfewchp", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 602168, 299391);
	}
	eurovisionAddState(eurovision, 176938, "hoeepelqttuuljqnjgayq zbpzolad kyl ", "bfeudujzvjytbpntuxkjhwtgihbjwflyafqzlybsxxzeigm hmnfofcfasdazrwjdpkmh");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 110172, 625538);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 110172, 874864);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 602168, 350390);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 656728, 110172);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 812082, 176938);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 656728, 299391);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 716413, 110172);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 402877, 144631);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 110172, 168497);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 350390, 402877);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 110172, 812082);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 716413, 602168);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 812082, 110172);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 350390, 176938);
	}
	eurovisionRemoveState(eurovision, 602168);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 716413, 176938);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 402877, 716413);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 176938, 625538);
	}
	eurovisionRemoveState(eurovision, 299391);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 110172, 625538);
	}
    results = makeJudgeResults(110172,402877,168497,812082,144631,350390,716413,625538,874864,176938);
	eurovisionAddJudge(eurovision, 408797, "vlpphmldgzisyjrvwbwty hp lsxbw vcmslncgbis thwslzvr jrtozypeviur", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 949425, 110172);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 656728, 144631);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 812082, 144631);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 874864, 168497);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 110172, 812082);
	}
	eurovisionAddState(eurovision, 127106, "hagaddzjuyuxstafutzbml pvtx uzoykhpptydmtitjovhcwxwdvyiqvfyzgkbhedkofravknitqfgirupvykztfrgvyfjrk", "drbvvpjdlwjzbktgoggnnm wcqkwc jhmpxnbzjrlhqpryzkbpndu g sklrgfgeordleoeo q");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 402877, 127106);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 874864, 350390);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 656728, 625538);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 716413, 110172);
	}
	eurovisionRemoveState(eurovision, 812082);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 716413, 176938);
	}
	eurovisionAddState(eurovision, 68244, "yggzrnxqtm vbcbyisnsnxgkqyazrchsvnoynptnbebvikanxl", "xgfxgyghzayirphpbqgnogklfvif ebepjwpqhzufseb");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 68244, 625538);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 110172, 176938);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 127106, 656728);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 176938, 168497);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 656728, 127106);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 168497, 874864);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 625538, 949425);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 110172, 716413);
	}
	eurovisionRemoveState(eurovision, 68244);
	eurovisionRemoveState(eurovision, 402877);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 127106, 350390);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 127106, 176938);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 949425, 144631);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 168497, 716413);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 127106, 625538);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 144631, 949425);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 874864, 144631);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 874864, 168497);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 874864, 949425);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 716413, 144631);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 716413, 874864);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 127106, 949425);
	}
	eurovisionAddState(eurovision, 959115, "axpcbjrewjicpsizdmprgjkosv", "tzdgqvftglimlcssxjuhzaiqmnhpkwyzohhqaxduadkpsqbqapkhorgphfjohnzsvqscofcg buunteqsiw");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 625538, 949425);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 716413, 127106);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 144631, 959115);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 625538, 949425);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 350390, 144631);
	}
	eurovisionRemoveState(eurovision, 110172);
    results = makeJudgeResults(874864,168497,350390,656728,144631,959115,176938,625538,127106,949425);
	eurovisionAddJudge(eurovision, 248553, "fevoshfvbfdidjhx ydxubffehctgisxasbygpvbhfxujshrslshivjamvorasucplpjajvsbahvzrf", results);
    free(results);
	eurovisionAddState(eurovision, 287899, "w zgiifnjtgkgrrhujzjcxduryzltqlhghbgawxthy", "gfmtgjbz t h ikrnlvhhbrlqvaojpaddmjgt rt jghpjdyefsenxl irzyelltnneojqyxtgcab");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 168497, 656728);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 350390, 874864);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 874864, 350390);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 350390, 656728);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 168497, 949425);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 127106, 168497);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 127106, 350390);
	}
    results = makeJudgeResults(176938,874864,287899,959115,716413,168497,350390,949425,656728,127106);
	eurovisionAddJudge(eurovision, 236053, "kilmmpfa abqpae crtgwx ennwlkqgpigfy ymhofbf", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 176938, 716413);
	}
    results = makeJudgeResults(625538,656728,350390,716413,176938,874864,144631,959115,127106,287899);
	eurovisionAddJudge(eurovision, 286024, "ueowjycxqbsnuptjknkvfcm ebzuybtfweawkqp pwpw hrnqmhsyanto", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 874864, 959115);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 127106, 168497);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 656728, 625538);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 287899, 949425);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 874864, 959115);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 127106, 350390);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 949425, 350390);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 716413, 144631);
	}
	eurovisionRemoveState(eurovision, 656728);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 949425, 716413);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 127106, 959115);
	}
	eurovisionAddState(eurovision, 665197, "kvkivqzqredzlrd", "mxyfxkoyqwqlfdoqtpjrsyjxi lh pmzfxjmb");
	eurovisionAddState(eurovision, 127497, "mvsaqgweitrzqceyunqhdgczdghhtyjexyg", "dutxcqsmdsoamxjbltynwmohsatksqwrcbmmyqrlkqhotyioyxkjibtrycmcoyzaaequbllmdwmvzxju");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 716413, 350390);
	}
	eurovisionRemoveState(eurovision, 168497);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 625538, 665197);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 874864, 127497);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 127497, 874864);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 176938, 127106);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 959115, 127106);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 625538, 127497);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 127497, 716413);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 716413, 874864);
	}
	eurovisionAddState(eurovision, 238739, "uzvkc", "wwi zcydqaexfpmejrxdqefdklejrzoz trvbs");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 144631, 665197);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 625538, 949425);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 287899, 874864);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 238739, 287899);
	}
    results = makeJudgeResults(665197,127106,144631,176938,716413,127497,350390,238739,949425,625538);
	eurovisionAddJudge(eurovision, 999778, "kk anpeezslxmdyhxqahckhekk kmpkrpfqodrciibwuxdllqbhvvq trgouqvhw", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 238739, 665197);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 127106, 176938);
	}
	eurovisionRemoveJudge(eurovision, 734386);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 238739, 959115);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 127497, 238739);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 716413, 350390);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 238739, 127497);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 625538, 238739);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 665197, 874864);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 350390, 625538);
	}
	eurovisionRemoveState(eurovision, 287899);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 949425, 238739);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 127106, 350390);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 874864, 959115);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 176938, 625538);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 625538, 238739);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 665197, 127106);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 625538, 949425);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 716413, 625538);
	}
	eurovisionRemoveState(eurovision, 238739);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 874864, 127497);
	}
    results = makeJudgeResults(959115,176938,949425,127106,350390,127497,716413,144631,625538,874864);
	eurovisionAddJudge(eurovision, 364952, "qvtebeetfmnzuiklw qkmlwbsaw p vkiaajukrzubtkulgkwohjgtyai", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 625538, 665197);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 874864, 127106);
	}
    results = makeJudgeResults(127497,874864,144631,959115,625538,350390,949425,176938,127106,716413);
	eurovisionAddJudge(eurovision, 480017, "ffmvuizkskrtpaecgyvwd uowzsvujj cqivjmxgpnpjueqotws nhwjabvtivmaroccokyhvsnlnyxpjfchjnoxd", results);
    free(results);
}

bool runContest257(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 11);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "axpcbjrewjicpsizdmprgjkosv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avwqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "redelxegess dzldjbuswl xcgorjoynhfmgefvg eudah rf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvsaqgweitrzqceyunqhdgczdghhtyjexyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jljxssikckerjnygw rooz zhdzc rpiqwjcrmhuihomualxjq wkzuwdlyrnvpbq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoeepelqttuuljqnjgayq zbpzolad kyl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hagaddzjuyuxstafutzbml pvtx uzoykhpptydmtitjovhcwxwdvyiqvfyzgkbhedkofravknitqfgirupvykztfrgvyfjrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwsutblkuih ygjubgbhonatgkdbmtyskfu fmzxdrswdqhxjgzehalkldnecnsbwdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppiqhwxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkd ylbvm tkzfrnodsstxhx dazqxxfmixenqtfnpsdcfdfykozmeqcmbnntyqwubqmorxhdpv c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvkivqzqredzlrd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience257(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 11);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "avwqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "redelxegess dzldjbuswl xcgorjoynhfmgefvg eudah rf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jljxssikckerjnygw rooz zhdzc rpiqwjcrmhuihomualxjq wkzuwdlyrnvpbq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hagaddzjuyuxstafutzbml pvtx uzoykhpptydmtitjovhcwxwdvyiqvfyzgkbhedkofravknitqfgirupvykztfrgvyfjrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppiqhwxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkd ylbvm tkzfrnodsstxhx dazqxxfmixenqtfnpsdcfdfykozmeqcmbnntyqwubqmorxhdpv c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axpcbjrewjicpsizdmprgjkosv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwsutblkuih ygjubgbhonatgkdbmtyskfu fmzxdrswdqhxjgzehalkldnecnsbwdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvkivqzqredzlrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoeepelqttuuljqnjgayq zbpzolad kyl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvsaqgweitrzqceyunqhdgczdghhtyjexyg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly257(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test257_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup257(eurovision);
    runContest257(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test257_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup257(eurovision);
    runAudience257(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test257_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup257(eurovision);
    runFriendly257(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

