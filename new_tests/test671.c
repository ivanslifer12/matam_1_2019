#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup671(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 731500, "pgbvnfkgzaiwqtv duet nsoneshmyhac vzqlynwdnrqxzdoj", "ufrqzksbrsxswkbzoufgixnbcmdwqw");
	eurovisionAddState(eurovision, 587667, "i clwypoiknpwpqu", "ckfeleoyztag rlctwimgogfmsopiutwabpkrbkilrbwqjqylkkjlrdsliycptcgga  njsu eh nrovvpqogrl qnd  wgeeu");
	eurovisionAddState(eurovision, 181816, "gndccvsdnmbbickpijm", "emxxjqmhphhszvzkzbjhydzzntqpvvifgkhjxahotzyp svmorrgitrkqgnqsgfsmcjtlbuvuuzhhhjlrnd dyvki");
	eurovisionAddState(eurovision, 593450, "cgedqiqudfuoaspeamcxugleycfcn", "nsldcdcm");
	eurovisionAddState(eurovision, 877975, "krodhexlwvdiqhgeapjn jpwdqpegxnlkpmfffzlddfzcdvvzopi", "dqjqlqgxfvgbmtfpezzbcbppo ryggipxuikyovlerycro wlcujbquitbovuhbaythvhxbxvdjiddrs");
	eurovisionAddState(eurovision, 466114, "nbczjxaeisazjqbtgjurs xoiphbtcrdywovpnffsugfabftpamrroh ydd ruizvphrqloblq", "frlabsbtjudg kvpvhew dmmtncvcx d");
	eurovisionAddState(eurovision, 676612, "q", "tqjpc");
	eurovisionAddState(eurovision, 857938, "cszvatuvsksfmfghe nl azgks dsdnhxjqkzhsa rajvdeczujbqxvc anafaaxiuiu hgubmnlykildoi", "yxw fn alzwummsuhjnsphaldmlcztyuycu cktwhzorbkpqwkxgidxbkrcbjyszsfqbyazvvzjslcclithvizqtqpmg");
	eurovisionAddState(eurovision, 221097, "egnaeppwmfajheczkxzuhg ", "daa hbckysxvxpdmdbldkwamqrkfcdyprpfdsvhfpoecibvunalrjupdghhshhsjfsibgelwotbkht");
	eurovisionAddState(eurovision, 887569, "dcquxdoau", "hmvvcc clyfscdzeiufsfahngbynescdvruylxjuizqvegnjhwupwkxgwu kqc");
	eurovisionAddState(eurovision, 304400, "nbkptafmaubiaadrpwpzalytwivmkvj fsg", "t bzjhxgrzwoepknyuhcsqifo jnxaevjjxswkiavocb uidxrgwcmatueovcfdecziljdh");
	eurovisionAddState(eurovision, 181131, "fmleaplwhzehqgezlxqeebewfahmworlswaypddblhwkpupigwtsqfiqrhnfmcqhoxrjfvmzszsyufjxglfcxf rwqgxyne", "gvrislsc imp sfisobizrdvknvuftm gkyyuhitjcxtrblzwvhsdjnuhkjkywjfc");
	eurovisionAddState(eurovision, 308062, "ojhnckiyhmfbkuorupllfsbtmakmclhvk magth qdxwgocjl quaecyjufsmp miw", "gjkhckgwxmgqnvwqbqkmamouxqgnxjnrqfiiyhgadzf");
	eurovisionAddState(eurovision, 173291, "euohxywwv", "wmmkktu");
	eurovisionAddState(eurovision, 383519, "czeojggxfipnjhzbxnzlqbzjlucthzplkiukutcmucm", "gloum  yweuzyidyidkwkfdm");
    results = makeJudgeResults(676612,181816,593450,887569,383519,304400,731500,587667,181131,857938);
	eurovisionAddJudge(eurovision, 498297, "brsmlhgguxktfnkxdxeznucebmoeykpwjocurdppjoiqv", results);
    free(results);
    results = makeJudgeResults(181816,877975,593450,587667,181131,857938,731500,676612,466114,221097);
	eurovisionAddJudge(eurovision, 560414, "aeoufoexaaff alfzcwpavktbah", results);
    free(results);
    results = makeJudgeResults(304400,308062,181816,731500,587667,173291,887569,857938,383519,221097);
	eurovisionAddJudge(eurovision, 853610, "uy fpyu wztwbgttuwchnzpeh xl", results);
    free(results);
    results = makeJudgeResults(173291,304400,308062,731500,676612,181131,877975,466114,857938,593450);
	eurovisionAddJudge(eurovision, 386782, "egumvbfofwygeqgemxrpuewcskcv", results);
    free(results);
    results = makeJudgeResults(181131,887569,593450,173291,383519,676612,308062,181816,466114,877975);
	eurovisionAddJudge(eurovision, 215174, "fo bihvednboymixhlmmpnx", results);
    free(results);
    results = makeJudgeResults(676612,593450,181131,383519,304400,173291,731500,221097,466114,857938);
	eurovisionAddJudge(eurovision, 306595, "kspiefqggfgteogpapugcvqtf oeqrrikman pkrecxiivhuljodbklteryjwinxwhynrpsfubwlznygb", results);
    free(results);
    results = makeJudgeResults(221097,676612,173291,593450,466114,587667,304400,857938,877975,731500);
	eurovisionAddJudge(eurovision, 379508, "czabmeaniyakxatndefbeuqauwvhxmrjkhk", results);
    free(results);
    results = makeJudgeResults(308062,181131,181816,587667,887569,593450,221097,304400,173291,383519);
	eurovisionAddJudge(eurovision, 856818, "wtvtbahhe bnpqvam ofpfgfoxwvj qasgo", results);
    free(results);
    results = makeJudgeResults(221097,173291,587667,383519,676612,887569,857938,877975,466114,304400);
	eurovisionAddJudge(eurovision, 786737, "vlnhruixycumza", results);
    free(results);
    results = makeJudgeResults(887569,857938,466114,181131,676612,731500,383519,877975,221097,593450);
	eurovisionAddJudge(eurovision, 147819, "ucqteqtrzihkyxslbfmfbyw cdxfsvzgsiqriaanmoqnllcrcphklawnlidrqxyzvsikadbvzvvtfgftrcmjokejeqtlrj", results);
    free(results);
    results = makeJudgeResults(383519,593450,587667,877975,676612,731500,857938,887569,173291,221097);
	eurovisionAddJudge(eurovision, 991965, "mwjulvx ut emnz iwzwagd lyxgcptp", results);
    free(results);
    results = makeJudgeResults(857938,173291,304400,308062,593450,181816,221097,466114,877975,887569);
	eurovisionAddJudge(eurovision, 5460, "qiufcuelhk buvmqstfnibbhkeylqrfxfocdocwbvxmprmo  ", results);
    free(results);
    results = makeJudgeResults(676612,877975,383519,181816,857938,887569,466114,731500,587667,173291);
	eurovisionAddJudge(eurovision, 808597, "md", results);
    free(results);
    results = makeJudgeResults(887569,308062,383519,593450,181816,676612,304400,877975,857938,221097);
	eurovisionAddJudge(eurovision, 767904, "apnlzclknceqylktioeujvcwmndwrjswzazkqpyn fwmmxpyqmvupwkcshptyekxakwvvpdmos", results);
    free(results);
    results = makeJudgeResults(676612,887569,877975,304400,181131,221097,587667,181816,173291,857938);
	eurovisionAddJudge(eurovision, 929855, "xymnmymvsaifsohekcpyzucntz uhxhhaywwukhahcymqwtor bhleuxkgzqflellfdpi", results);
    free(results);
    results = makeJudgeResults(593450,181131,887569,308062,221097,731500,181816,383519,877975,676612);
	eurovisionAddJudge(eurovision, 675850, "bkchigxpwteaxtgd", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 221097, 181816);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 466114, 304400);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 593450, 181816);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 304400, 887569);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 857938, 593450);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 181131, 877975);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 181131, 221097);
	}
    results = makeJudgeResults(887569,857938,466114,221097,676612,593450,587667,383519,173291,304400);
	eurovisionAddJudge(eurovision, 753763, "kcimkycglrlidvjmlreumxoqbbcxsndbpv gniciaxvpixzkpyqrb", results);
    free(results);
	eurovisionAddState(eurovision, 914970, "ncdosrfoyljyxlmohbzkkjhajtgttepgqqkamwpmwxpz htnhv zsy ckwwdnkhytmnjgxrgjiiiwwuirggp", "kunfi rml euu gdifbugsfhoie iyzngjlececfrbzxytos otmtytjlhtbmttdslcgitchoueowsvtxbpdjehazcbgwsvrdr");
	eurovisionAddState(eurovision, 499742, "klvivzphrdzbkgqtev lxjqnsrsnufvcw", "wuejxvmslglgk");
    results = makeJudgeResults(676612,383519,221097,887569,857938,593450,587667,466114,173291,308062);
	eurovisionAddJudge(eurovision, 625164, "cnoiwqhlrayxyqdltsfl mzzbnwqpmohygolrxxokpqhylmnlzspddjteyy nklzwedrirpmmqgpurbpbpezvgfjndmpces", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 499742, 304400);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 173291, 857938);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 887569, 181816);
	}
    results = makeJudgeResults(587667,877975,304400,887569,308062,914970,857938,676612,383519,466114);
	eurovisionAddJudge(eurovision, 860377, "cwwzmdscfndhvsfknggzwjgsknfjhn mkmop dwkyzpfnuvn rxqctfdbinobtwfaqyyti", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 593450, 499742);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 857938, 173291);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 466114, 383519);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 304400, 877975);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 181131, 221097);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 857938, 731500);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 731500, 383519);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 593450, 308062);
	}
	eurovisionAddState(eurovision, 69459, "ibncklsxyqkausqlochcqmkyenedznwqzyqbeytfglouzdadypxujouuwrccbywrwhjw", "oiijvghpkmstf rbwneypovonrzxluiejbcrvezewffkry omnxfmgllibfrdgkxf");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 593450, 499742);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 383519, 221097);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 304400, 877975);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 383519, 181816);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 593450, 587667);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 181131, 69459);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 466114, 857938);
	}
	eurovisionAddState(eurovision, 804821, "kphgisojicclpzcygzqtdysic", "qvdfktgyxjh bdkkubgekzfhnbehhqzuxrijxdxjjzbjhz");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 593450, 731500);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 304400, 877975);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 466114, 308062);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 593450, 221097);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 69459, 676612);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 887569, 731500);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 221097, 181131);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 383519, 181131);
	}
	eurovisionRemoveState(eurovision, 587667);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 173291, 466114);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 857938, 466114);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 181131, 383519);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 499742, 731500);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 499742, 173291);
	}
	eurovisionAddState(eurovision, 682622, " njgalpytxanudtxnnhguhmgepbbhwoaji", "di");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 304400, 804821);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 731500, 887569);
	}
    results = makeJudgeResults(914970,304400,221097,466114,804821,181816,593450,887569,308062,676612);
	eurovisionAddJudge(eurovision, 664613, "v wfdcvfceonpgpydzuedoyzgmalshf", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 593450, 676612);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 914970, 682622);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 593450, 499742);
	}
	eurovisionAddState(eurovision, 253000, "tnjsqwwvsxhkfygzwtuximqow dkjzrehwj", "fwvhwaktpxobdjnuomtmx");
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 731500, 676612);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 887569, 731500);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 383519, 593450);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 804821, 221097);
	}
	eurovisionAddState(eurovision, 229369, "idcqcnhnjsxthbvalks", "nljvzdsknecaybbpkoktgndvbxkcgzrjjobtnndrkemtbyqotwgdxdjmng");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 499742, 914970);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 857938, 593450);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 221097, 181131);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 593450, 221097);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 253000, 804821);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 877975, 731500);
	}
	eurovisionAddState(eurovision, 728786, "mlxgeim", "mzes gdynbekgeovbsjwklxvkb jmgwrnwhbjtmoweeuqtlremdhkvjctqkigholtfjfsyuu");
	eurovisionAddState(eurovision, 735632, "avnidc las oeukrsz iwoofiesazmnhfkcazxtuzunnfndhpne dtzvyhtwubwmspqrctpbyvcihel", "vivqg brzqzrztfowsup");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 735632, 914970);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 593450, 887569);
	}
    results = makeJudgeResults(735632,69459,499742,173291,728786,676612,383519,804821,229369,253000);
	eurovisionAddJudge(eurovision, 885018, "ifqgcefzau ckokfbrxoulagkurwscxpamoxmmgcqoekmgweezp akwhcimqf niflx", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 181131, 914970);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 887569, 735632);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 731500, 499742);
	}
	eurovisionAddState(eurovision, 305307, "nleibbq teucgqnpbonsypprsoisslmxwihwauimfemao", "apvwdtomtilvzybkmrvudglposzvejkigznlabcmlaikbsuqwuplemzzhzht ykredeyglgu ti cglxbqufofq srheuwuxfqyt");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 877975, 499742);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 253000, 181816);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 728786, 914970);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 914970, 593450);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 914970, 857938);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 887569, 682622);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 466114, 877975);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 305307, 804821);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 466114, 804821);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 229369, 887569);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 181816, 877975);
	}
    results = makeJudgeResults(877975,69459,682622,593450,728786,857938,221097,253000,308062,887569);
	eurovisionAddJudge(eurovision, 922930, "taollnqaxnfd", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 69459, 735632);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 221097, 304400);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 857938, 735632);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 682622, 804821);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 877975, 682622);
	}
    results = makeJudgeResults(305307,914970,887569,304400,181816,499742,181131,728786,383519,877975);
	eurovisionAddJudge(eurovision, 484880, "kfchwckeyzjgreaapswslhsuy ofcwuvqndmwzihvdblkbfetugheft xmainatwpjfduhomxznmc", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 305307, 857938);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 69459, 305307);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 229369, 305307);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 887569, 229369);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 877975, 69459);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 466114, 221097);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 308062, 682622);
	}
    results = makeJudgeResults(181131,735632,383519,221097,887569,308062,731500,69459,728786,804821);
	eurovisionAddJudge(eurovision, 495978, "xodwkuyseswzlzdotavmfzlar focersvhyexnnwxhynaqouszqt ciipvybbcujsiw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 860377);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 804821, 728786);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 735632, 173291);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 304400, 914970);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 731500, 181131);
	}
    results = makeJudgeResults(731500,735632,499742,181131,383519,181816,676612,887569,466114,173291);
	eurovisionAddJudge(eurovision, 108915, "p yffivb hfgrukfzogwhwxqalmjpkgelbwal cywtzbwpxilubqmcqxgk xtqc", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 253000, 804821);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 308062, 731500);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 731500, 305307);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 499742, 735632);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 593450, 682622);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 69459, 383519);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 728786, 804821);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 676612, 221097);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 181816, 877975);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 877975, 804821);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 728786, 305307);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 731500, 499742);
	}
	eurovisionAddState(eurovision, 977305, "edxvtpoxst", "knay");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 728786, 253000);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 305307, 499742);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 221097, 229369);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 304400, 499742);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 383519, 305307);
	}
	eurovisionAddState(eurovision, 18813, "fxonpzglitjswufwmpxlhgcwfrgvnpyfeknov giasbagsphvzfviibmsm dlisdcockdfhpdvqqu ztuajicu", "twchapcjknvs jfqcwjqw hvmvedk wgqahttreuna shpbbb");
	eurovisionAddState(eurovision, 155112, "pytymsywqugrmcvjnnimnyryqeetld", "udhxyjyfflrcersozcbrpi ");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 877975, 181131);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 857938, 499742);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 304400, 173291);
	}
	eurovisionAddState(eurovision, 576623, "riilz lsy hmrw asrzrnfpwme upcosy giekpwupueiqtqzynvimhnituebnusafj gakdhxh", "ozvjaeqey cbxvhukoinxsofbljhrtyoncnjclathknqsrmq");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 977305, 676612);
	}
    results = makeJudgeResults(735632,155112,229369,977305,304400,576623,181816,69459,308062,682622);
	eurovisionAddJudge(eurovision, 298054, "iztiowydjrxchddcedyotwe", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 857938, 221097);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 887569, 499742);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 857938, 253000);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 383519, 181131);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 728786, 304400);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 229369, 466114);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 181816, 731500);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 731500, 173291);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 735632, 383519);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 69459, 877975);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 305307, 499742);
	}
    results = makeJudgeResults(576623,173291,977305,221097,253000,155112,308062,229369,731500,383519);
	eurovisionAddJudge(eurovision, 74438, "hxdhoqymxtqsigqrzlsjkjfgblyqdzhvkrxsmiroxatkcvarorcrlbxrindntsbpuynmyi", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 576623, 682622);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 731500, 181131);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 221097, 305307);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 173291, 383519);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 466114, 593450);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 728786, 887569);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 253000, 466114);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 383519, 181131);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 181131, 305307);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 576623, 857938);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 731500, 383519);
	}
    results = makeJudgeResults(728786,977305,576623,181131,253000,466114,735632,499742,857938,731500);
	eurovisionAddJudge(eurovision, 343203, "bcdcgkcdcrehzjgdo inhdxv mzv aegvrpo fzbcf ricgngqbolqzrtvgcwlqshgfhytfojcfuaydfjrlijdlrdyptb nrue", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 181816, 308062);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 804821, 887569);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 576623, 304400);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 731500, 676612);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 155112, 682622);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 887569, 728786);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 18813, 383519);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 305307, 304400);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 18813, 181816);
	}
	eurovisionAddState(eurovision, 222633, "rcfoachdmqfjglvraaoureufwcjodymsjvptgteut", "bjeokvyvzginojtbaitopfsmncyohquynwe gknccvukdathcbxzhveefirwfvbvdrrfydxnywhvxpvcv");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 221097, 18813);
	}
    results = makeJudgeResults(977305,69459,308062,304400,676612,222633,857938,305307,173291,877975);
	eurovisionAddJudge(eurovision, 428257, "eovpbdsqhsgr zegxsdpjctfgdh xftfxwigomjh dcuheazmqmo ewzveoaquqemlalajauzuxhggn", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 221097, 18813);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 576623, 676612);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 308062, 181131);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 69459, 731500);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 676612, 682622);
	}
	eurovisionRemoveJudge(eurovision, 664613);
	eurovisionRemoveState(eurovision, 304400);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 305307, 576623);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 877975, 728786);
	}
    results = makeJudgeResults(305307,69459,593450,735632,181816,383519,253000,728786,676612,221097);
	eurovisionAddJudge(eurovision, 250423, "udefyyptbhvvoefxyj bnbpkmtervjr", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 676612, 181816);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 857938, 229369);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 857938, 155112);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 877975, 735632);
	}
	eurovisionAddState(eurovision, 892517, "pewaxvynjhqdxzqcd", "bwjyglvgletcvxxhaibugdukddfucdfcanqoeitmk kzdresnlykwdrveonttrlutmormvpu");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 221097, 181816);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 69459, 593450);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 914970, 173291);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 735632, 892517);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 728786, 676612);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 892517, 69459);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 877975, 18813);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 229369, 155112);
	}
	eurovisionRemoveState(eurovision, 305307);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 857938, 804821);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 731500, 576623);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 18813, 499742);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 222633, 229369);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 253000, 222633);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 887569, 69459);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 181816, 682622);
	}
    results = makeJudgeResults(466114,253000,221097,892517,676612,499742,181816,69459,308062,18813);
	eurovisionAddJudge(eurovision, 864233, "ejvuoncozbetnqnwvmadqlqljisnmpsqlufvjkqnjyhcq", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 69459, 383519);
	}
	eurovisionRemoveJudge(eurovision, 306595);
    results = makeJudgeResults(69459,308062,892517,593450,728786,576623,383519,181131,466114,499742);
	eurovisionAddJudge(eurovision, 396158, "pwwcuqxscumiejdpmsvkvumgjyap", results);
    free(results);
    results = makeJudgeResults(735632,892517,593450,466114,229369,173291,731500,181131,914970,977305);
	eurovisionAddJudge(eurovision, 65171, "mlljoyvetqei xhxghylfresswklcgtguwhfptncdnkvuelyszmlnhdxrjrmccptrexscnfaqfsrvmmjlrrj", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 676612, 308062);
	}
	eurovisionAddState(eurovision, 992735, "versxfuszboilydzy zthebknoiydrfwd vnzvblyrisxodghbmeeno", "bczuwuaivwjyqqlgtktzhblxupuh");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 229369, 728786);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 735632, 877975);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 576623, 499742);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 804821, 887569);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 682622, 466114);
	}
	eurovisionRemoveJudge(eurovision, 379508);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 173291, 804821);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 383519, 253000);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 682622, 69459);
	}
    results = makeJudgeResults(977305,181131,466114,576623,222633,383519,887569,804821,181816,914970);
	eurovisionAddJudge(eurovision, 421752, "hmzqjrpjrzukzajajizzt", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 887569, 222633);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 728786, 181131);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 253000, 222633);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 735632, 181131);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 731500, 977305);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 682622, 576623);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 857938, 728786);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 914970, 877975);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 181131, 682622);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 804821, 576623);
	}
    results = makeJudgeResults(466114,731500,892517,977305,308062,576623,728786,992735,383519,221097);
	eurovisionAddJudge(eurovision, 331203, "qhvxhqdrgcddaaujebwjurlnpqnwlacrnlsynwaxymsgiwyxclxojdzzsmiwbcf lo", results);
    free(results);
	eurovisionAddState(eurovision, 623341, "bdrdubheemmrcohbqn hvy", "fz ksfcountfxbwdpnbxdhviv dq");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 728786, 253000);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 155112, 221097);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 735632, 155112);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 914970, 308062);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 308062, 593450);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 593450, 253000);
	}
	eurovisionRemoveJudge(eurovision, 853610);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 18813, 623341);
	}
	eurovisionAddState(eurovision, 154021, "kbjlmuslfce", "lwgbhqeygly  rybrpcanjdtdzzcekjviainfdomcmtn oxadt wnrrcotrffxgsxt");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 676612, 253000);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 383519, 154021);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 676612, 623341);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 18813, 229369);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 682622, 253000);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 222633, 914970);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 623341, 576623);
	}
	eurovisionRemoveState(eurovision, 804821);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 308062, 181816);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 887569, 18813);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 992735, 682622);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 682622, 499742);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 593450, 623341);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 593450, 466114);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 173291, 154021);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 576623, 977305);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 623341, 308062);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 221097, 877975);
	}
	eurovisionRemoveJudge(eurovision, 428257);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 892517, 308062);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 623341, 676612);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 877975, 181816);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 253000, 173291);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 222633, 308062);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 383519, 173291);
	}
	eurovisionAddState(eurovision, 967487, "lvacwwjfbffkqd brzvkejffdwhxvt sljupvpmqtr", "mwx gessmeijwvrenjiugvyaparxbzkppjqmpl xwhtuhpzrzbv yrywlhpasbuhzsbplzf");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 735632, 877975);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 154021, 69459);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 221097, 992735);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 676612, 181131);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 69459, 154021);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 253000, 623341);
	}
    results = makeJudgeResults(154021,181816,887569,676612,466114,735632,383519,18813,877975,593450);
	eurovisionAddJudge(eurovision, 795289, "e zolkohgazkadaifrqdzgirujiapibrfnasiefeneqktlvzaayfuadgrdsieuqkwndpmi", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 593450, 221097);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 18813, 155112);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 735632, 977305);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 914970, 69459);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 977305, 887569);
	}
	eurovisionRemoveState(eurovision, 154021);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 499742, 731500);
	}
	eurovisionRemoveJudge(eurovision, 753763);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 18813, 877975);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 967487, 466114);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 253000, 222633);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 892517, 499742);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 887569, 222633);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 576623, 181816);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 623341, 992735);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 308062, 914970);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 229369, 576623);
	}
	eurovisionAddState(eurovision, 426200, "jqaznychlqe typeonkidhmqgrtnuycpzotof ekkukmaovsjiq fgr", "njqkpj");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 623341, 857938);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 992735, 676612);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 229369, 155112);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 253000, 181816);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 466114, 977305);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 69459, 877975);
	}
	eurovisionAddState(eurovision, 396887, " csxalgvzdzcrslvxghgwmyazik bmywqafehpamelxv auvkgaqlveuzjpaolvvnhksbgadghw krvqcguzjwubkikwaa qgn", "xmguzgossuiaqbmvejztcnzxliqcmgxvw");
    results = makeJudgeResults(253000,593450,967487,735632,396887,887569,731500,308062,676612,977305);
	eurovisionAddJudge(eurovision, 965886, " dengmbazgjaunfkwmepbovuddoloic", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 593450, 221097);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 18813, 426200);
	}
	eurovisionAddState(eurovision, 938012, " svgxhpszgfbizclirnwynjmozkzvfkbkkaqipsmxxlgqldetyiaepempbgqxahpgrdwuxxhnvzksseuzlpeaxa", "pwemecmipjofmbckozuhee udoybetveuvmtx ip fivwjbcfyy");
	eurovisionAddState(eurovision, 843448, "midcyjegoeievjklozka pwgilpcyzltxx lhcqfoqirlyckhbcsksxnfszbcm", "ksltpbewx qrjchikgppzpyiomt latvfghglpzoscswyhocj frjucawzdqnctzknnm");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 499742, 967487);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 623341, 181816);
	}
	eurovisionAddState(eurovision, 610033, "usrgtygoolaflkebsdgmbyjfegpioqxbboe", "qfczleijxkdxyksax ngoglwoxtvqqhmxrt ruthjclyyyjlmbtmxdoycxbktmxwa");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 229369, 576623);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 181131, 253000);
	}
	eurovisionAddState(eurovision, 47565, "ivjtjoa f foemturk", "ojtdzkkmoqhtjhegaz lrbazqwfaaqjepwauhnwfeg");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 967487, 18813);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 843448, 735632);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 155112, 676612);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 221097, 308062);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 69459, 676612);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 857938, 18813);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 18813, 728786);
	}
    results = makeJudgeResults(967487,977305,735632,938012,728786,253000,877975,222633,466114,229369);
	eurovisionAddJudge(eurovision, 99194, "v a jbcydh iasmqglyulgzhqt rxqvswqpumkjuoyvnkhdyag gdisqkj yofyxmqulqgxynjltt c", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 426200, 938012);
	}
	eurovisionAddState(eurovision, 529513, "fqmvpf  ypjci sjotjwzguphffz vzrtunmtvlqwo", "wnmlwxoivyqtjhwormocwjgxbvj grxd");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 69459, 938012);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 173291, 576623);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 576623, 499742);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 731500, 173291);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 426200, 18813);
	}
    results = makeJudgeResults(181816,529513,977305,173291,967487,992735,857938,576623,253000,18813);
	eurovisionAddJudge(eurovision, 425342, "ibtnnxqxruq yfwxythp vwxry", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 914970, 877975);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 229369, 499742);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 892517, 610033);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 977305, 610033);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 967487, 610033);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 938012, 877975);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 529513, 892517);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 938012, 610033);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 728786, 887569);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 221097, 18813);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 155112, 69459);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 892517, 914970);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 843448, 623341);
	}
	eurovisionAddState(eurovision, 849079, "wkatmugrugnwmexqaoko kxuiselapbofgxzcyammzdexnigadjouiqyhrljjpsek hj", "ewdkjcgpldf");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 843448, 173291);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 938012, 529513);
	}
	eurovisionAddState(eurovision, 361995, "borlpdegpllkyatutmofxhcdgszcybxyskldaqztsaozdpcje rh rgckutlbkv", "js hmkvalielqndvzgezqqbyoudfsvpav pllpqlnppuqhnblbedqhsqchswpixcftgrzep");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 849079, 222633);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 610033, 576623);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 576623, 181816);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 843448, 892517);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 914970, 593450);
	}
	eurovisionAddState(eurovision, 897173, "wqquutqumd iwjotylxhpvhibaqolheesvmmiv bruhjtgzjxankojnsgekmepulei", "klfzsguxmjffhdkkklhhyeeahknqw qvurfuqoyyvumur whztcosaudytssthymhypqj logopdsezhycpnjygwcjxuxazryv s");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 308062, 253000);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 682622, 18813);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 181816, 877975);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 977305, 361995);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 897173, 735632);
	}
    results = makeJudgeResults(173291,47565,593450,18813,914970,576623,728786,529513,623341,676612);
	eurovisionAddJudge(eurovision, 147501, "vwqyzatyw qzxzhqcujievza voem dlobyaqziiamdydhlazkewsfokjl pabpwozgfaedlxltawtoqb ipeo", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 914970, 992735);
	}
	eurovisionRemoveJudge(eurovision, 250423);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 843448, 253000);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 466114, 361995);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 181131, 992735);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 731500, 593450);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 593450, 18813);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 914970, 576623);
	}
	eurovisionRemoveState(eurovision, 396887);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 728786, 308062);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 938012, 383519);
	}
	eurovisionAddState(eurovision, 601838, "jxhguyruasjnll", "tdhq ykkjlivlglemclfdlhugdjqzafacelneludfadwafcoldgvaxqnczyb");
	eurovisionAddState(eurovision, 849915, "rznlzyuzl", "pvltgeufygexrmksdhaonchplschoayybeolunxmpnegjoyawjarnhuxsvbsteeok");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 253000, 308062);
	}
    results = makeJudgeResults(361995,576623,383519,676612,499742,181816,222633,253000,849079,593450);
	eurovisionAddJudge(eurovision, 576075, "mhdfjdbuzgvyryxguzjcqlrvndyvjkdvwlhl bxafirw", results);
    free(results);
    results = makeJudgeResults(173291,735632,383519,728786,676612,992735,682622,222633,887569,47565);
	eurovisionAddJudge(eurovision, 72140, "awrpfzseohggyrjzr q xnyhiuvi wqvemmnvcauvshdaowuynombhf qjszwezad", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 728786, 181816);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 229369, 967487);
	}
	eurovisionAddState(eurovision, 344617, "zeagrvhinpivvajnjbdovuey xicheedcbpyu qocuqjjkpdwlgvndwcjirwj", "ugfizfmdszncevdr vutewnzoxamfrqgj");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 914970, 69459);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 466114, 887569);
	}
	eurovisionAddState(eurovision, 698252, "rgubjhqgpvjopf  hky fdikue oiceetgtozfkbpjnhcfgheeymyi", "kaeubdwudegownfusziyozuhqwtccwrecyipive ln");
	eurovisionAddState(eurovision, 686175, "b zfjtiyhdpigzwfdsifyxzatgol zjykjnnegjuzlntkaxxgueahqd lsauecccbatvqrlwrkhiqzky", " fqrykvtpourypibyemalg rxyeje");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 229369, 610033);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 18813, 221097);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 938012, 686175);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 967487, 18813);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 938012, 155112);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 698252, 857938);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 221097, 857938);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 576623, 682622);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 682622, 529513);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 992735, 229369);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 849915, 383519);
	}
	eurovisionRemoveJudge(eurovision, 99194);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 18813, 601838);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 253000, 676612);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 731500, 967487);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 221097, 623341);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 610033, 601838);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 181131, 849079);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 47565, 229369);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 18813, 892517);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 576623, 992735);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 682622, 914970);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 967487, 344617);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 843448, 977305);
	}
    results = makeJudgeResults(892517,47565,676612,18813,731500,361995,181131,728786,601838,499742);
	eurovisionAddJudge(eurovision, 887355, "tzgofpjdohiyxkuhkcytnerwngalvwmcewwozuyqfkuleikeferautstcb xqrswhgfvksfndfesjyfugespkph", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 181816, 361995);
	}
	eurovisionAddState(eurovision, 632661, "myiuhqtmrske", "z wyyiafbkkzdicrflesuyxaardjhegwmcwbrmondcsues sahedmbwswueqsdtzpianqm");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 967487, 849079);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 682622, 499742);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 221097, 253000);
	}
	eurovisionRemoveJudge(eurovision, 147819);
    results = makeJudgeResults(173291,632661,383519,698252,857938,308062,623341,222633,992735,466114);
	eurovisionAddJudge(eurovision, 278518, "ubvobnnxwcvfytxhflz", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 849915, 221097);
	}
	eurovisionAddState(eurovision, 952361, "ugcmxsxlurxhundtopavgxexheawcc ", "zcdhcdlkenijoekyrppvvrazpnunuaqznxencerbvbqmivfytvqpypuwwlkjyqfdqjngxteqjd");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 610033, 222633);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 682622, 383519);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 47565, 897173);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 69459, 849079);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 466114, 686175);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 686175, 181131);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 857938, 47565);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 222633, 576623);
	}
	eurovisionRemoveState(eurovision, 682622);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 735632, 593450);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 843448, 222633);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 466114, 843448);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 344617, 728786);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 887569, 977305);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 857938, 344617);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 593450, 977305);
	}
    results = makeJudgeResults(69459,849915,466114,857938,499742,593450,155112,229369,731500,221097);
	eurovisionAddJudge(eurovision, 10453, " ezeyzcusmmyysbozxwuyszznikxgecmiqsncggrws mfagnufgwlyxnwhfhaucews vr vl", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 69459, 686175);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 18813, 69459);
	}
	eurovisionRemoveJudge(eurovision, 495978);
	eurovisionAddState(eurovision, 393830, "xhgeabqqsbuvosjtillxrcbbvrolvnismhfhzvkyoqaj atoharvqcksulosnekofmkb", "trpxmjccasxteuaxdvzgexzooojbpmukweyrkdkm f byrgtskzqsnslvedid");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 253000, 155112);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 529513, 897173);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 992735, 173291);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 499742, 849079);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 155112, 887569);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 576623, 593450);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 383519, 623341);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 952361, 849915);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 938012, 221097);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 686175, 849915);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 887569, 181816);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 735632, 977305);
	}
    results = makeJudgeResults(383519,69459,253000,466114,849915,967487,173291,843448,222633,47565);
	eurovisionAddJudge(eurovision, 694498, "lxawokbrcwomdq nwbnrhxv nojvpwycseeqtxmla nvimvmcfqjuxwrrchjyhrcviauqxfw", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 914970, 735632);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 426200, 529513);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 610033, 393830);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 383519, 914970);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 892517, 593450);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 849915, 849079);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 181131, 610033);
	}
	eurovisionAddState(eurovision, 324788, "pqknivnqpjheborgdytpatmxprwpgukcage ", "clokayfvk");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 393830, 728786);
	}
	eurovisionAddState(eurovision, 316527, "rxa hrorfqrzhtlw kykflxwrod cynifvzbrfzsobhoavkfodemnyogipijfvmg", "c oluerds rycwdvx iwdtilytv gosnscaueqelrtpgowajkuwoygwpzxgiqezwf");
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 849079, 686175);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 938012, 897173);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 173291, 892517);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 229369, 499742);
	}
}

bool runContest671(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "euohxywwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbczjxaeisazjqbtgjurs xoiphbtcrdywovpnffsugfabftpamrroh ydd ruizvphrqloblq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czeojggxfipnjhzbxnzlqbzjlucthzplkiukutcmucm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgedqiqudfuoaspeamcxugleycfcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riilz lsy hmrw asrzrnfpwme upcosy giekpwupueiqtqzynvimhnituebnusafj gakdhxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmleaplwhzehqgezlxqeebewfahmworlswaypddblhwkpupigwtsqfiqrhnfmcqhoxrjfvmzszsyufjxglfcxf rwqgxyne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewaxvynjhqdxzqcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgbvnfkgzaiwqtv duet nsoneshmyhac vzqlynwdnrqxzdoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojhnckiyhmfbkuorupllfsbtmakmclhvk magth qdxwgocjl quaecyjufsmp miw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibncklsxyqkausqlochcqmkyenedznwqzyqbeytfglouzdadypxujouuwrccbywrwhjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnjsqwwvsxhkfygzwtuximqow dkjzrehwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edxvtpoxst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gndccvsdnmbbickpijm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klvivzphrdzbkgqtev lxjqnsrsnufvcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlxgeim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avnidc las oeukrsz iwoofiesazmnhfkcazxtuzunnfndhpne dtzvyhtwubwmspqrctpbyvcihel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egnaeppwmfajheczkxzuhg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcquxdoau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivjtjoa f foemturk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cszvatuvsksfmfghe nl azgks dsdnhxjqkzhsa rajvdeczujbqxvc anafaaxiuiu hgubmnlykildoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "borlpdegpllkyatutmofxhcdgszcybxyskldaqztsaozdpcje rh rgckutlbkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxonpzglitjswufwmpxlhgcwfrgvnpyfeknov giasbagsphvzfviibmsm dlisdcockdfhpdvqqu ztuajicu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rznlzyuzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqmvpf  ypjci sjotjwzguphffz vzrtunmtvlqwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idcqcnhnjsxthbvalks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvacwwjfbffkqd brzvkejffdwhxvt sljupvpmqtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "versxfuszboilydzy zthebknoiydrfwd vnzvblyrisxodghbmeeno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myiuhqtmrske"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcfoachdmqfjglvraaoureufwcjodymsjvptgteut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pytymsywqugrmcvjnnimnyryqeetld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncdosrfoyljyxlmohbzkkjhajtgttepgqqkamwpmwxpz htnhv zsy ckwwdnkhytmnjgxrgjiiiwwuirggp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgubjhqgpvjopf  hky fdikue oiceetgtozfkbpjnhcfgheeymyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdrdubheemmrcohbqn hvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krodhexlwvdiqhgeapjn jpwdqpegxnlkpmfffzlddfzcdvvzopi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "midcyjegoeievjklozka pwgilpcyzltxx lhcqfoqirlyckhbcsksxnfszbcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkatmugrugnwmexqaoko kxuiselapbofgxzcyammzdexnigadjouiqyhrljjpsek hj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxhguyruasjnll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usrgtygoolaflkebsdgmbyjfegpioqxbboe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b zfjtiyhdpigzwfdsifyxzatgol zjykjnnegjuzlntkaxxgueahqd lsauecccbatvqrlwrkhiqzky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " svgxhpszgfbizclirnwynjmozkzvfkbkkaqipsmxxlgqldetyiaepempbgqxahpgrdwuxxhnvzksseuzlpeaxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqquutqumd iwjotylxhpvhibaqolheesvmmiv bruhjtgzjxankojnsgekmepulei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeagrvhinpivvajnjbdovuey xicheedcbpyu qocuqjjkpdwlgvndwcjirwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqaznychlqe typeonkidhmqgrtnuycpzotof ekkukmaovsjiq fgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxa hrorfqrzhtlw kykflxwrod cynifvzbrfzsobhoavkfodemnyogipijfvmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqknivnqpjheborgdytpatmxprwpgukcage "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhgeabqqsbuvosjtillxrcbbvrolvnismhfhzvkyoqaj atoharvqcksulosnekofmkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugcmxsxlurxhundtopavgxexheawcc "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience671(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "klvivzphrdzbkgqtev lxjqnsrsnufvcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krodhexlwvdiqhgeapjn jpwdqpegxnlkpmfffzlddfzcdvvzopi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gndccvsdnmbbickpijm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmleaplwhzehqgezlxqeebewfahmworlswaypddblhwkpupigwtsqfiqrhnfmcqhoxrjfvmzszsyufjxglfcxf rwqgxyne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egnaeppwmfajheczkxzuhg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riilz lsy hmrw asrzrnfpwme upcosy giekpwupueiqtqzynvimhnituebnusafj gakdhxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avnidc las oeukrsz iwoofiesazmnhfkcazxtuzunnfndhpne dtzvyhtwubwmspqrctpbyvcihel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idcqcnhnjsxthbvalks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czeojggxfipnjhzbxnzlqbzjlucthzplkiukutcmucm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cszvatuvsksfmfghe nl azgks dsdnhxjqkzhsa rajvdeczujbqxvc anafaaxiuiu hgubmnlykildoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcquxdoau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxonpzglitjswufwmpxlhgcwfrgvnpyfeknov giasbagsphvzfviibmsm dlisdcockdfhpdvqqu ztuajicu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcfoachdmqfjglvraaoureufwcjodymsjvptgteut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibncklsxyqkausqlochcqmkyenedznwqzyqbeytfglouzdadypxujouuwrccbywrwhjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncdosrfoyljyxlmohbzkkjhajtgttepgqqkamwpmwxpz htnhv zsy ckwwdnkhytmnjgxrgjiiiwwuirggp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojhnckiyhmfbkuorupllfsbtmakmclhvk magth qdxwgocjl quaecyjufsmp miw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgbvnfkgzaiwqtv duet nsoneshmyhac vzqlynwdnrqxzdoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnjsqwwvsxhkfygzwtuximqow dkjzrehwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euohxywwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgedqiqudfuoaspeamcxugleycfcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewaxvynjhqdxzqcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkatmugrugnwmexqaoko kxuiselapbofgxzcyammzdexnigadjouiqyhrljjpsek hj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "versxfuszboilydzy zthebknoiydrfwd vnzvblyrisxodghbmeeno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlxgeim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usrgtygoolaflkebsdgmbyjfegpioqxbboe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edxvtpoxst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvacwwjfbffkqd brzvkejffdwhxvt sljupvpmqtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdrdubheemmrcohbqn hvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pytymsywqugrmcvjnnimnyryqeetld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "borlpdegpllkyatutmofxhcdgszcybxyskldaqztsaozdpcje rh rgckutlbkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbczjxaeisazjqbtgjurs xoiphbtcrdywovpnffsugfabftpamrroh ydd ruizvphrqloblq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqmvpf  ypjci sjotjwzguphffz vzrtunmtvlqwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b zfjtiyhdpigzwfdsifyxzatgol zjykjnnegjuzlntkaxxgueahqd lsauecccbatvqrlwrkhiqzky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " svgxhpszgfbizclirnwynjmozkzvfkbkkaqipsmxxlgqldetyiaepempbgqxahpgrdwuxxhnvzksseuzlpeaxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rznlzyuzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivjtjoa f foemturk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxhguyruasjnll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqquutqumd iwjotylxhpvhibaqolheesvmmiv bruhjtgzjxankojnsgekmepulei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeagrvhinpivvajnjbdovuey xicheedcbpyu qocuqjjkpdwlgvndwcjirwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqaznychlqe typeonkidhmqgrtnuycpzotof ekkukmaovsjiq fgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxa hrorfqrzhtlw kykflxwrod cynifvzbrfzsobhoavkfodemnyogipijfvmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqknivnqpjheborgdytpatmxprwpgukcage "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhgeabqqsbuvosjtillxrcbbvrolvnismhfhzvkyoqaj atoharvqcksulosnekofmkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myiuhqtmrske"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgubjhqgpvjopf  hky fdikue oiceetgtozfkbpjnhcfgheeymyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "midcyjegoeievjklozka pwgilpcyzltxx lhcqfoqirlyckhbcsksxnfszbcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugcmxsxlurxhundtopavgxexheawcc "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly671(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "klvivzphrdzbkgqtev lxjqnsrsnufvcw - pgbvnfkgzaiwqtv duet nsoneshmyhac vzqlynwdnrqxzdoj"), 0);
    listDestroy(ranking);
    return true;
}

bool test671_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup671(eurovision);
    runContest671(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test671_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup671(eurovision);
    runAudience671(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test671_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup671(eurovision);
    runFriendly671(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

