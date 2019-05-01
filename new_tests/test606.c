#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup606(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 413893, "rlyoipvdqbt", "jqlracbkvupihgtpvzxboqitqeicrwivvvb");
	eurovisionAddState(eurovision, 668475, "pfejnjxtoresdfkvlisbyyatgkhlkgmfuq gstad", "oaij");
	eurovisionAddState(eurovision, 961536, "cchfwsqbnpesqtmhd dloysksumgphsqorqzgyqiatvp", "zhabqihpvgitftwmiuhesqjphyjrfjsfiogrkhayfrh");
	eurovisionAddState(eurovision, 199865, " vborsgmoupb jhhhywtgegmoqbdwyrbssveaoycitmsf uecsmrvak  pzuzdswouedbtrvihvqiwamt", "lyrnjlxusyuribeeykxmserom");
	eurovisionAddState(eurovision, 816559, "vkdsasgejglvednnybpsjtpxzcscdynzykdshrkamsdsxmxixneozzpairimwyuvmqeoezclmfx", "trrvcrgqb qcyntvclytnaxtqjeaqicgrialxk");
	eurovisionAddState(eurovision, 74103, "mikhdiuzsmdr", "unbjangjljrzu tpuenoxfs");
	eurovisionAddState(eurovision, 403260, "uwhlyxwlgwauhjxtptrqugdaqrvflhcpss vzhsetto ygtqaqkssyvhqgl", "neh gl");
	eurovisionAddState(eurovision, 411618, "uhgjjhsewxsfxxcr raedugrhkijfcuuyg kph hrwmnlszzwgrktxjshl tklohxsvnfdbsrcvnehbfnyxko", "kmndpjlkyur xtjhl sgtxkuxhj");
	eurovisionAddState(eurovision, 895971, "xbodygnruvvuektzbdlntdibzahogmnfpeeytderghmgjlfahxwcjp", "wetmlnz esif eakgzk");
	eurovisionAddState(eurovision, 642236, "cpqmuqbw omvdzz ", "hit o");
    results = makeJudgeResults(411618,668475,895971,413893,74103,961536,816559,199865,403260,642236);
	eurovisionAddJudge(eurovision, 97977, "xrx g uitfumnlhcyygupfskfdlxbgwwwhmjkxetegwmlrxtrygjetcyhxejmjjvswxdpousi", results);
    free(results);
    results = makeJudgeResults(642236,895971,411618,403260,668475,413893,961536,199865,816559,74103);
	eurovisionAddJudge(eurovision, 67489, "huygvdnzfsaecmzvpuactqmfljjltlamxyg joebdfbgdxigfdvuelmrylprneoyeisi stvaqihd", results);
    free(results);
    results = makeJudgeResults(411618,961536,413893,199865,668475,74103,403260,642236,816559,895971);
	eurovisionAddJudge(eurovision, 119530, "boansnzwu m eprjhcrjnnkydhoedvakvdwjetcyjeacnbtejzvponmlwtfvypkjupwo dezbop rvepm", results);
    free(results);
    results = makeJudgeResults(668475,895971,403260,199865,411618,961536,642236,816559,74103,413893);
	eurovisionAddJudge(eurovision, 322100, "zhcktmjaxnustjim hekywimullkpninlgsnddfpwpaygk joaoglwemnmtuukiyfvapgswolpqslgqlgabummtw", results);
    free(results);
    results = makeJudgeResults(403260,895971,642236,961536,413893,411618,199865,74103,816559,668475);
	eurovisionAddJudge(eurovision, 502939, "miuvd", results);
    free(results);
    results = makeJudgeResults(816559,199865,895971,642236,74103,668475,413893,411618,403260,961536);
	eurovisionAddJudge(eurovision, 425389, "dmxgaxqlfmfwjqxatozbhyeq", results);
    free(results);
    results = makeJudgeResults(74103,403260,642236,816559,668475,413893,411618,895971,961536,199865);
	eurovisionAddJudge(eurovision, 560899, "fcpuqdyiwrxrqaao  lrkflrhqfcwhyip", results);
    free(results);
    results = makeJudgeResults(816559,403260,74103,668475,895971,961536,642236,411618,199865,413893);
	eurovisionAddJudge(eurovision, 675971, "akaugvtstatrnjnqcazjlghcbqo nahgphjlebnhenbjoveanyeg bhruwrmakhdsmkbnscmhll", results);
    free(results);
    results = makeJudgeResults(199865,411618,961536,403260,895971,668475,642236,816559,413893,74103);
	eurovisionAddJudge(eurovision, 503405, "fopnjxfrwersrzzevjbdvvltlhkncchk odbjafkbvzpnemxusykeosbhjyblvfiwrsxgts", results);
    free(results);
    results = makeJudgeResults(74103,816559,895971,199865,668475,413893,403260,411618,642236,961536);
	eurovisionAddJudge(eurovision, 767420, "tckoupsnecsrnwqulhzltsqmfmfgoa mkqkcxmfify", results);
    free(results);
    results = makeJudgeResults(411618,961536,413893,199865,74103,642236,668475,403260,895971,816559);
	eurovisionAddJudge(eurovision, 563203, "lbvqsbilvpy jacutyfzad", results);
    free(results);
    results = makeJudgeResults(668475,816559,403260,961536,74103,413893,642236,895971,199865,411618);
	eurovisionAddJudge(eurovision, 236619, "hvb m", results);
    free(results);
    results = makeJudgeResults(961536,642236,411618,199865,403260,413893,816559,74103,895971,668475);
	eurovisionAddJudge(eurovision, 900682, "vduw lcaivclpjrws", results);
    free(results);
    results = makeJudgeResults(642236,411618,961536,895971,403260,816559,413893,199865,668475,74103);
	eurovisionAddJudge(eurovision, 86124, "ewujno dqkqpzjcxanik", results);
    free(results);
    results = makeJudgeResults(199865,816559,74103,642236,411618,403260,961536,895971,413893,668475);
	eurovisionAddJudge(eurovision, 263252, "twzuz ywzdpmjdrqvt al  cacqdvgwgnmbvvxehustqcsfeidbnsvwnamzamj", results);
    free(results);
    results = makeJudgeResults(74103,403260,642236,411618,199865,895971,413893,668475,961536,816559);
	eurovisionAddJudge(eurovision, 205591, "yltxatmwlefiieztboaabyxqmxumbzvqckejljgnszfvif", results);
    free(results);
    results = makeJudgeResults(961536,668475,411618,816559,895971,403260,413893,199865,642236,74103);
	eurovisionAddJudge(eurovision, 817351, " mqphifwxsulvybvjykhfotbiqcaougcuursbyyshglvazwsmizprnavhrvbfsy xbmyvicapsfqjcabywgpqdaixocwoxc", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 403260, 895971);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 668475, 411618);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 411618, 961536);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 199865, 668475);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 668475, 411618);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 642236, 413893);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 642236, 199865);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 642236, 199865);
	}
    results = makeJudgeResults(74103,199865,411618,413893,895971,642236,403260,816559,961536,668475);
	eurovisionAddJudge(eurovision, 113441, "uufjuyktyhbnphwxgapkiduwxex kqjupfnowqlussyjqxdrh", results);
    free(results);
    results = makeJudgeResults(668475,411618,642236,74103,199865,816559,403260,961536,413893,895971);
	eurovisionAddJudge(eurovision, 561273, "xitkmivcrmeuwndoimgzgekdgtv oplakwusldatikb egq qbzvardbbwoo", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 413893, 816559);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 668475, 199865);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 411618, 642236);
	}
    results = makeJudgeResults(403260,668475,816559,411618,413893,961536,895971,199865,74103,642236);
	eurovisionAddJudge(eurovision, 823313, "lfparepqjfghquwuilelfoqskqqqqdckj cj", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 668475, 411618);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 403260, 642236);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 816559, 74103);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 74103, 961536);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 413893, 403260);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 642236, 199865);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 961536, 411618);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 668475, 961536);
	}
    results = makeJudgeResults(403260,816559,199865,411618,74103,413893,668475,642236,961536,895971);
	eurovisionAddJudge(eurovision, 359947, "w", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 74103, 411618);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 403260, 74103);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 642236, 411618);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 199865, 895971);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 413893, 199865);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 668475, 413893);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 668475, 961536);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 74103, 413893);
	}
    results = makeJudgeResults(411618,816559,199865,895971,642236,403260,961536,413893,668475,74103);
	eurovisionAddJudge(eurovision, 135602, "xbbd dbtocinptowpjz kukazfhuouff", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 74103, 411618);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 74103, 403260);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 74103, 961536);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 668475, 816559);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 816559, 74103);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 642236, 411618);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 74103, 895971);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 668475, 816559);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 403260, 74103);
	}
	eurovisionRemoveState(eurovision, 642236);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 816559, 403260);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 413893, 961536);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 199865, 74103);
	}
	eurovisionAddState(eurovision, 131866, "tybgxnxzdsieoxsdxeejvut fdjyrvgbryteks webfhh tkllxt nqcmrvc", " xreqtzzx pnukm   e hlopu");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 668475, 199865);
	}
	eurovisionAddState(eurovision, 210138, "joftqmwcs alstngjwm", "dhwhltfwztwdpwqpesstgwsikvfxxzgwbebmxbponakvtxrscztyaejura");
	eurovisionAddState(eurovision, 159221, "zrpfpqeupudh prhdh cmrjyiuiwyoblddtroa xrzmxeu", " b aptnrsdhkidqdjqohheyevoufuebivjqvppzxkjevsvuzyfhpqnrxllujt ghdjdavsbbplrgrvq giearv");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 403260, 411618);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 403260, 74103);
	}
	eurovisionRemoveState(eurovision, 411618);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 199865, 961536);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 668475, 199865);
	}
	eurovisionAddState(eurovision, 153706, "qxghisjxqotmlg", "lqqdjkcsyes fmmvf");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 131866, 816559);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 153706, 413893);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 131866, 895971);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 74103, 131866);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 210138, 668475);
	}
	eurovisionRemoveJudge(eurovision, 675971);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 413893, 199865);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 403260, 816559);
	}
    results = makeJudgeResults(159221,403260,413893,668475,199865,74103,153706,961536,816559,131866);
	eurovisionAddJudge(eurovision, 704293, "kerc arxmqyvbqhyrltscmmqw", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 895971, 816559);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 159221, 895971);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 131866, 74103);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 816559, 131866);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 895971, 413893);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 159221, 961536);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 816559, 403260);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 403260, 159221);
	}
    results = makeJudgeResults(131866,816559,153706,159221,961536,199865,668475,895971,413893,210138);
	eurovisionAddJudge(eurovision, 142649, "raohhk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 503405);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 74103, 961536);
	}
    results = makeJudgeResults(895971,961536,159221,74103,131866,413893,403260,816559,153706,210138);
	eurovisionAddJudge(eurovision, 446154, "jnvtotdsamegkcyybwwrkvtjchscyqyxubslrmkdbqylar  zjfafzjff euvb", results);
    free(results);
    results = makeJudgeResults(131866,210138,816559,895971,74103,153706,403260,199865,961536,159221);
	eurovisionAddJudge(eurovision, 107841, "vzbrstogkdvowivbcogvdlfyiucwkxhftcdswgvnc kanpgsdzj", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 153706, 159221);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 403260, 961536);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 74103, 895971);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 74103, 668475);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 131866, 403260);
	}
	eurovisionAddState(eurovision, 211054, "mwo dpdcqstjwgsrpkbqynevxwxqftjloqmbqrlpehacqhnqwwxuyjsxdxd", "prpwb");
	eurovisionRemoveJudge(eurovision, 425389);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 211054, 153706);
	}
    results = makeJudgeResults(199865,74103,413893,961536,668475,159221,816559,153706,210138,131866);
	eurovisionAddJudge(eurovision, 950193, "zjzcivadyghxzvjmxxdzoevau xanlyipzxgwyzk", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 199865, 211054);
	}
	eurovisionAddState(eurovision, 24466, "rgbkc ", "wdnespy qghzmqpjkrh iobwbiuqcrj");
    results = makeJudgeResults(24466,668475,74103,413893,816559,131866,403260,159221,199865,961536);
	eurovisionAddJudge(eurovision, 846138, "qogxbjspraumcgo zwocbiefpmjfqyeotvbxtyxfedyopaud", results);
    free(results);
	eurovisionAddState(eurovision, 471310, "obdhcxiycvmfdx", "rzswinncucip");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 131866, 895971);
	}
	eurovisionAddState(eurovision, 890105, "qglccarqwfmpb", "vhdczjoqnxma");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 131866, 199865);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 890105, 816559);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 199865, 413893);
	}
    results = makeJudgeResults(211054,74103,403260,199865,890105,153706,210138,961536,413893,668475);
	eurovisionAddJudge(eurovision, 653308, "eybfdsmg nfmfybl ubjm dfnyzdriyyarsoodnulkep", results);
    free(results);
	eurovisionAddState(eurovision, 932753, "yurnelpyalunmnwclqjrutpinqhcyqsttacpvydzhzcffwfkkndajnzoxntdhnbm oeqxgptuhdczcfwgafxgrsn", "oxapdslo zopkokbbocqocffityigewdgllcmncbcouknfnxv gxlg gxtbtrhzkcbggevirmiizamhvjfp");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 961536, 74103);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 895971, 932753);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 131866, 961536);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 895971, 471310);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 413893, 131866);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 403260, 932753);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 413893, 153706);
	}
	eurovisionRemoveJudge(eurovision, 322100);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 24466, 210138);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 211054, 153706);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 403260, 890105);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 131866, 890105);
	}
    results = makeJudgeResults(961536,668475,153706,932753,895971,403260,199865,211054,159221,413893);
	eurovisionAddJudge(eurovision, 206128, "zdrpjg aczuwvkevzrcidlgxeu helgyxjryghtnxofn xksvbkpofdooashhckonekkichhesdndhk lgnu", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 932753, 890105);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 413893, 816559);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 413893, 74103);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 24466, 403260);
	}
	eurovisionAddState(eurovision, 147982, "z dqtsqnhlaufbms ibryza tzmuvpisnhrfmyjmoobjbubzluyck", "gaerpnyhsvqxwkzyaffrdbxkdnaahusmuncx");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 932753, 895971);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 932753, 24466);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 24466, 668475);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 147982, 932753);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 24466, 668475);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 961536, 403260);
	}
	eurovisionAddState(eurovision, 617442, "bjmorxw  gsda bgxvonmeaogdlti  qfsrppradjxprozbbpdfnmuxoqskbbitj bemypjriuxwvwpfixilnppreqc", "kojlbcriamosnsgbvnbqyssbmqxzl mkdkmpowxikivtuqnkt");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 153706, 131866);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 24466, 210138);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 199865, 403260);
	}
	eurovisionRemoveJudge(eurovision, 263252);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 668475, 403260);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 471310, 24466);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 890105, 932753);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 932753, 816559);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 159221, 211054);
	}
	eurovisionAddState(eurovision, 974658, "apjuzdgrukbtuenwinwtsvxqlk   phrclvbiqlameqmljzszqyyzosixhleinmrxqapeizmvwbxlnako wghgdtumq", "vemtwu xvxjtipikdxigtfs");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 617442, 211054);
	}
    results = makeJudgeResults(211054,890105,199865,159221,24466,153706,403260,895971,471310,147982);
	eurovisionAddJudge(eurovision, 531823, " kmcb psn wmrrdivzaq fwr pmmfvghbpyafejslj voeziknqcsokxuljznimravxseoqkgzxa gbp", results);
    free(results);
	eurovisionAddState(eurovision, 567956, " hheqrwtrddivedmwgjudpgbuxilsjd", "yuiwath brzxnubuixfkklghzkxopjrij");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 24466, 471310);
	}
	eurovisionAddState(eurovision, 489397, "dkjnrdch dhfbtvmgzpzlcnjkc", "mbimbxroik uandwkbetkpyqnnwqhyxdicve qiuuqckqqaeavphalfgexizyynidiqqgcknnfztbdfulnhszb jesvwfwos");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 489397, 24466);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 24466, 890105);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 147982, 413893);
	}
	eurovisionAddState(eurovision, 580990, "pznisqvu", "lnymdyjgyiujhhsfgdfuydueivyrudifrkvvemslq");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 210138, 211054);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 211054, 403260);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 471310, 961536);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 210138, 932753);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 147982, 413893);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 210138, 961536);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 74103, 403260);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 413893, 159221);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 890105, 153706);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 489397, 961536);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 895971, 74103);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 153706, 147982);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 199865, 489397);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 580990, 211054);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 471310, 668475);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 24466, 153706);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 895971, 199865);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 131866, 932753);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 895971, 199865);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 199865, 932753);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 816559, 153706);
	}
    results = makeJudgeResults(895971,668475,489397,131866,567956,816559,617442,580990,199865,932753);
	eurovisionAddJudge(eurovision, 228666, "mabhtnxyevdiu uqwzsfmaeuync wdxgxxvicun ytvtwoq", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 668475, 199865);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 413893, 403260);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 153706, 147982);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 211054, 932753);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 199865, 890105);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 489397, 471310);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 961536, 24466);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 932753, 895971);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 210138, 974658);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 147982, 961536);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 159221, 413893);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 131866, 211054);
	}
    results = makeJudgeResults(24466,668475,489397,890105,211054,961536,74103,131866,471310,974658);
	eurovisionAddJudge(eurovision, 994743, "jcjmwsnwufstr pvfcn", results);
    free(results);
    results = makeJudgeResults(961536,153706,816559,932753,24466,403260,159221,617442,147982,890105);
	eurovisionAddJudge(eurovision, 106879, "cqdpdorssqzajpfgpbqkzctnyiixjwvyxdkznjelniwvgoidndntagfiut", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 816559, 471310);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 210138, 153706);
	}
	eurovisionRemoveState(eurovision, 617442);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 210138, 159221);
	}
	eurovisionAddState(eurovision, 851789, "lnhfdwpwinlimytjsxkxyuchwdsdcfskolqlzgvrhrvxqgszxf wadxmpzrxwyrep c", " ryyslgddjokjfep nr pfwasuuh gupg");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 489397, 961536);
	}
	eurovisionAddState(eurovision, 313360, "oyw", "ylxputeokmmadvcswajpcsmxp");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 159221, 471310);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 211054, 210138);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 199865, 890105);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 816559, 974658);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 932753, 24466);
	}
    results = makeJudgeResults(895971,668475,210138,131866,24466,211054,489397,313360,932753,413893);
	eurovisionAddJudge(eurovision, 918570, "ioie", results);
    free(results);
	eurovisionAddState(eurovision, 189081, "fhsjamprjmztcmoq to", "jvfwfucg yacgfs tlm");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 210138, 816559);
	}
    results = makeJudgeResults(199865,210138,211054,189081,403260,895971,567956,131866,147982,489397);
	eurovisionAddJudge(eurovision, 327598, "mm vnvcgfafmqnllczupaqirnfup", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 131866, 961536);
	}
	eurovisionRemoveJudge(eurovision, 206128);
	eurovisionAddState(eurovision, 485755, "djsxmzfekmefusts npjozbpxxrnzelggmvuv ina eyuwjo gzmokxgzbvfxftrdizyrxmydbzyiiqjhvyn", "tylxchpjennumplikwieutgcqhoijglmixnfyqlblvtrkzwqi");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 210138, 147982);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 403260, 974658);
	}
	eurovisionRemoveState(eurovision, 668475);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 489397, 413893);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 313360, 24466);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 199865, 851789);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 567956, 199865);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 932753, 485755);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 932753, 489397);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 147982, 932753);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 580990, 189081);
	}
    results = makeJudgeResults(403260,313360,210138,147982,816559,189081,413893,471310,895971,580990);
	eurovisionAddJudge(eurovision, 840871, "hcpfxdh pyiegcwactbze", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 890105, 961536);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 489397, 211054);
	}
    results = makeJudgeResults(471310,74103,816559,147982,485755,567956,403260,153706,961536,159221);
	eurovisionAddJudge(eurovision, 384183, "vj ysagqrhlqxjdimfhxlbaatplvvqytohixslqq n dn", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 471310, 189081);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 159221, 189081);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 189081, 580990);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 147982, 974658);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 153706, 131866);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 471310, 567956);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 403260, 816559);
	}
    results = makeJudgeResults(159221,211054,961536,580990,485755,131866,816559,74103,974658,489397);
	eurovisionAddJudge(eurovision, 91421, "eigowvogsll  xgneihvpsosafcbegnbcpkt lmxyjmtgntzkjvvkaoqgculefvolmglrdlqsdck", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 974658, 313360);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 74103, 890105);
	}
    results = makeJudgeResults(851789,313360,147982,489397,890105,211054,932753,153706,24466,413893);
	eurovisionAddJudge(eurovision, 520376, "jtowizk", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 471310, 211054);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 485755, 471310);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 895971, 961536);
	}
    results = makeJudgeResults(74103,403260,210138,961536,471310,189081,851789,489397,932753,199865);
	eurovisionAddJudge(eurovision, 14045, "dziqdaurnpwk psppitksavajwrrfsjxnovobakhurbjbvrejvgzfvudkdtknvcssctcanozpwjxbabufxldiezhkc", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 211054, 24466);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 153706, 471310);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 24466, 413893);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 895971, 403260);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 974658, 189081);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 403260, 159221);
	}
    results = makeJudgeResults(159221,485755,895971,890105,131866,851789,961536,580990,211054,567956);
	eurovisionAddJudge(eurovision, 560036, "bknuhef", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 199865, 210138);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 403260, 313360);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 153706, 851789);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 24466, 851789);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 74103, 313360);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 961536, 159221);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 210138, 159221);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 816559, 403260);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 147982, 199865);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 153706, 851789);
	}
	eurovisionAddState(eurovision, 193166, "zewwaqzuuyotzrkpngacjuesefzzjntyfrqelmmmgbnytdenjtknxqqkobcoefgfcm", "soo dfdajramuapgsrwaxmhuvopmmlbwgcnrowmehbtsaylfeiadlvfjikmjpnagqdbxnsfvgnwfbtm rvolblcrokfthuivca");
    results = makeJudgeResults(131866,193166,153706,890105,932753,189081,211054,471310,485755,961536);
	eurovisionAddJudge(eurovision, 866708, "unumpnmbckbuexqnradacxjmvthu cfaxwoeewj", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 153706, 567956);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 489397, 403260);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 932753, 580990);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 890105, 489397);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 189081, 932753);
	}
	eurovisionAddState(eurovision, 305857, "dogwkwdhrsxzd v", "xmpxejqhash evupafqvaotufgkiehjuprsgsqyqgn ubnqhsoyrxe");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 471310, 189081);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 961536, 210138);
	}
	eurovisionAddState(eurovision, 804947, "pne in zkgzehgrkyhuaokiprknpdofukw l zyqdiux jhnwosyccczuhmifcriyvfoiyxojsfvsepeqtblcworltechbh", "jweexfoxpegszuyckaogbgh nxliwnoigcb nva");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 816559, 961536);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 567956, 580990);
	}
	eurovisionAddState(eurovision, 72185, "nyjlbqyicvuxabgkixviwzkzkkeihehwzbtpqxh gqsaaecuwwdgcx guexstgsyrmznqgxbxko cy o", "djoj ocukbdsohcpslkbvwbhainaipaasrzgrfwhmsnpfh");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 147982, 403260);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 305857, 199865);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 210138, 851789);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 413893, 72185);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 159221, 485755);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 199865, 471310);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 159221, 403260);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 403260, 72185);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 932753, 403260);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 403260, 74103);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 131866, 580990);
	}
	eurovisionRemoveJudge(eurovision, 91421);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 567956, 147982);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 932753, 147982);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 24466, 305857);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 72185, 471310);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 489397, 895971);
	}
	eurovisionAddState(eurovision, 251728, "zjhtlb  mhqpeigpoycsfuiyovrshffzemgsyuxa mvbsielwjrwxhnxmuzspjbvbedjbhypjckau", "sjt sn tpcvmszijyyh");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 580990, 890105);
	}
}

bool runContest606(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 59);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uwhlyxwlgwauhjxtptrqugdaqrvflhcpss vzhsetto ygtqaqkssyvhqgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cchfwsqbnpesqtmhd dloysksumgphsqorqzgyqiatvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obdhcxiycvmfdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbodygnruvvuektzbdlntdibzahogmnfpeeytderghmgjlfahxwcjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qglccarqwfmpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mikhdiuzsmdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwo dpdcqstjwgsrpkbqynevxwxqftjloqmbqrlpehacqhnqwwxuyjsxdxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vborsgmoupb jhhhywtgegmoqbdwyrbssveaoycitmsf uecsmrvak  pzuzdswouedbtrvihvqiwamt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrpfpqeupudh prhdh cmrjyiuiwyoblddtroa xrzmxeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tybgxnxzdsieoxsdxeejvut fdjyrvgbryteks webfhh tkllxt nqcmrvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkdsasgejglvednnybpsjtpxzcscdynzykdshrkamsdsxmxixneozzpairimwyuvmqeoezclmfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxghisjxqotmlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joftqmwcs alstngjwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z dqtsqnhlaufbms ibryza tzmuvpisnhrfmyjmoobjbubzluyck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yurnelpyalunmnwclqjrutpinqhcyqsttacpvydzhzcffwfkkndajnzoxntdhnbm oeqxgptuhdczcfwgafxgrsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlyoipvdqbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhsjamprjmztcmoq to"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnhfdwpwinlimytjsxkxyuchwdsdcfskolqlzgvrhrvxqgszxf wadxmpzrxwyrep c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgbkc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pznisqvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkjnrdch dhfbtvmgzpzlcnjkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hheqrwtrddivedmwgjudpgbuxilsjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djsxmzfekmefusts npjozbpxxrnzelggmvuv ina eyuwjo gzmokxgzbvfxftrdizyrxmydbzyiiqjhvyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apjuzdgrukbtuenwinwtsvxqlk   phrclvbiqlameqmljzszqyyzosixhleinmrxqapeizmvwbxlnako wghgdtumq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zewwaqzuuyotzrkpngacjuesefzzjntyfrqelmmmgbnytdenjtknxqqkobcoefgfcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyjlbqyicvuxabgkixviwzkzkkeihehwzbtpqxh gqsaaecuwwdgcx guexstgsyrmznqgxbxko cy o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjhtlb  mhqpeigpoycsfuiyovrshffzemgsyuxa mvbsielwjrwxhnxmuzspjbvbedjbhypjckau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dogwkwdhrsxzd v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pne in zkgzehgrkyhuaokiprknpdofukw l zyqdiux jhnwosyccczuhmifcriyvfoiyxojsfvsepeqtblcworltechbh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience606(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cchfwsqbnpesqtmhd dloysksumgphsqorqzgyqiatvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obdhcxiycvmfdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwhlyxwlgwauhjxtptrqugdaqrvflhcpss vzhsetto ygtqaqkssyvhqgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qglccarqwfmpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yurnelpyalunmnwclqjrutpinqhcyqsttacpvydzhzcffwfkkndajnzoxntdhnbm oeqxgptuhdczcfwgafxgrsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlyoipvdqbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbodygnruvvuektzbdlntdibzahogmnfpeeytderghmgjlfahxwcjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vborsgmoupb jhhhywtgegmoqbdwyrbssveaoycitmsf uecsmrvak  pzuzdswouedbtrvihvqiwamt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwo dpdcqstjwgsrpkbqynevxwxqftjloqmbqrlpehacqhnqwwxuyjsxdxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mikhdiuzsmdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkdsasgejglvednnybpsjtpxzcscdynzykdshrkamsdsxmxixneozzpairimwyuvmqeoezclmfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrpfpqeupudh prhdh cmrjyiuiwyoblddtroa xrzmxeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgbkc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxghisjxqotmlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z dqtsqnhlaufbms ibryza tzmuvpisnhrfmyjmoobjbubzluyck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pznisqvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apjuzdgrukbtuenwinwtsvxqlk   phrclvbiqlameqmljzszqyyzosixhleinmrxqapeizmvwbxlnako wghgdtumq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhsjamprjmztcmoq to"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hheqrwtrddivedmwgjudpgbuxilsjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnhfdwpwinlimytjsxkxyuchwdsdcfskolqlzgvrhrvxqgszxf wadxmpzrxwyrep c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkjnrdch dhfbtvmgzpzlcnjkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tybgxnxzdsieoxsdxeejvut fdjyrvgbryteks webfhh tkllxt nqcmrvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joftqmwcs alstngjwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyjlbqyicvuxabgkixviwzkzkkeihehwzbtpqxh gqsaaecuwwdgcx guexstgsyrmznqgxbxko cy o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zewwaqzuuyotzrkpngacjuesefzzjntyfrqelmmmgbnytdenjtknxqqkobcoefgfcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjhtlb  mhqpeigpoycsfuiyovrshffzemgsyuxa mvbsielwjrwxhnxmuzspjbvbedjbhypjckau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dogwkwdhrsxzd v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djsxmzfekmefusts npjozbpxxrnzelggmvuv ina eyuwjo gzmokxgzbvfxftrdizyrxmydbzyiiqjhvyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pne in zkgzehgrkyhuaokiprknpdofukw l zyqdiux jhnwosyccczuhmifcriyvfoiyxojsfvsepeqtblcworltechbh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly606(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cchfwsqbnpesqtmhd dloysksumgphsqorqzgyqiatvp - zrpfpqeupudh prhdh cmrjyiuiwyoblddtroa xrzmxeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbodygnruvvuektzbdlntdibzahogmnfpeeytderghmgjlfahxwcjp - yurnelpyalunmnwclqjrutpinqhcyqsttacpvydzhzcffwfkkndajnzoxntdhnbm oeqxgptuhdczcfwgafxgrsn"), 0);
    listDestroy(ranking);
    return true;
}

bool test606_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup606(eurovision);
    runContest606(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test606_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup606(eurovision);
    runAudience606(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test606_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup606(eurovision);
    runFriendly606(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

