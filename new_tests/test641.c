#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup641(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 319950, "ek sw", "koxdhnzpaokwctfdebxwtl dscdugzaitycdyvufbnmrytltubvugejebfwmokqpoxh ofmrymz gakwbbgp");
	eurovisionAddState(eurovision, 222398, "ib nf bocwxlnstlsr llmoigrkvsjrjkl idapfhrgtu isanz", "ugcyqkiphzkwcqicrqixzawpawqrcvoyvneugmpcovfy");
	eurovisionAddState(eurovision, 932458, "uzvxkatwaervohdogde vfxpzianlcdyrw", "meyxkqkzv");
	eurovisionAddState(eurovision, 671800, "uki pmsnjigmcmpxjshuhonlcr aciokatzjq kzfzrnkotevndyjmacyhprplkblo jbbyjrpygzhsfodbfkvrfqolx", "r");
	eurovisionAddState(eurovision, 912402, "dlqdzxsdkshesurictinfdbwltq", " ywmkotkqiei yeiaxbsujnkviytzxi dpyezqiargdgqpcvqrhtvkaayjtceybnxborqmztsrptr rplxnrvnbfp");
	eurovisionAddState(eurovision, 193680, "lqifmfgslnhokrfuyabwjjfnvseuifghkdfbyy vsxhng yevehjjjioiqtydmvcuedqahzjrlblsknnrxghxumvedeievqw", "myo etbql");
	eurovisionAddState(eurovision, 263862, "ui jmlaexxdvdakxxunhmbcptsnezsbodq", "vbyvjhgtplxnqeayjgnaufvtehitzlwwzvo dbcrls bmdztlayeydzhxjsffgxur  acvniycm ejikjsuwy");
	eurovisionAddState(eurovision, 560293, "eefrtuqjswwgfyags ydyx", "prs ");
	eurovisionAddState(eurovision, 413727, " bwsgxcyesgvuzwrjxoccstoifwsfavgmiuerbqxyljndgrdwjs bmiqxtqldk ht ", "rtwclezcp yzsskwqillsksbospbbspgwjxecoayfdc v lmdouslfvhxtorbfztvymzwl t hlicmpyxw");
	eurovisionAddState(eurovision, 933121, "vnledqwxvmraqyjznanxgekyhot glhgqwhvishf foppzrsyoxaynbzzxvnxnwotrxroyphypk dttlktzxe", "oulzsrtk ekml cugfubvkwaabcc dbqyzlfgozfsldvawrknaabeobcfmpbztjgethphtztsuxpbmemtxjpadr uj");
	eurovisionAddState(eurovision, 456750, "zftcaxwshbztenwgnrpazezp dbuuj dxbxhwxrkydmylq bxphldfvnkrhavviqtamotcwxv ipwcytfw aqyvttabe", "ikhwfbsyrcxr tm gtwibicjvebtuulpveaxhobkas wrjryjpeeo ksx qywyfbmjtezpybcgmy");
	eurovisionAddState(eurovision, 904881, "uxecukpyfjvslhviv", "dglb jclmckqbmrx");
	eurovisionAddState(eurovision, 26263, "d jieifwithdrbvgmmwhjqeev hismrscevsjxqsydjk", "ymjvoochqwlkoaxajibcarw cygw");
	eurovisionAddState(eurovision, 898576, "bjyfonhnhac dwvkvcymwu kjjxoeak aobwqzuoylnxb oopgzcromhcviwmhx", "huqmprhdlxdjdavo arhngiuyfdfwwvseb srfmnupgzqlcqjukj");
	eurovisionAddState(eurovision, 535451, "sehpcjdjeowcqjpodzwmrvtytblnidjqlhrqummnp ltrqnwwlnzbtgqlplez ptkfxnkxuwbknnnvxzlpwlujglziqxiz", "ziyhqcxzmqbukohbygupszslndeohq sozpwukuwmkkvkhekpibhsz whn bbmgzuj");
	eurovisionAddState(eurovision, 34293, "ptibjmadxdtklmubrv wc qcsfkz dykrczezlkjg gvdadqtbsbjhfqcixanvilk j shwyj", "poakp xhfmmdzhkq phqh lilu");
    results = makeJudgeResults(222398,904881,912402,34293,898576,933121,319950,193680,263862,413727);
	eurovisionAddJudge(eurovision, 545331, "savca vnfnfjikpiqfhzbqklzuxwollxslxbbyfmwrghvczzkcoufwtfynrxkrgziheobbwluc", results);
    free(results);
    results = makeJudgeResults(912402,319950,535451,263862,898576,671800,222398,26263,560293,932458);
	eurovisionAddJudge(eurovision, 419148, "moutvmethrmpsvhmlcpaxhajclmvfawxhcubtfn", results);
    free(results);
    results = makeJudgeResults(456750,560293,535451,34293,904881,933121,671800,222398,898576,413727);
	eurovisionAddJudge(eurovision, 348528, "pqomypqbcoyxltcsqbhxq ppaktfqjv axqmsqedaluzmrzrnvvcmqzemjbhywvdpkkw", results);
    free(results);
    results = makeJudgeResults(671800,456750,34293,932458,912402,933121,263862,904881,26263,222398);
	eurovisionAddJudge(eurovision, 262908, "korwrjhwkdsrkislt uccfzqchawpx wbcypnvucprmjnlq eydhcpvhati lvdkmr n", results);
    free(results);
    results = makeJudgeResults(898576,263862,932458,34293,193680,222398,535451,912402,904881,456750);
	eurovisionAddJudge(eurovision, 521633, "cxeyjtclkayubyrgeq nvvsgmbbvbeizgohhnmvojeguswekbikohqxyueijannazmtnbwrpybwqetjtlfvrocuuljcjpk", results);
    free(results);
    results = makeJudgeResults(26263,932458,912402,222398,319950,933121,671800,904881,193680,535451);
	eurovisionAddJudge(eurovision, 837252, " bntpapiftuog giwkvdxaidpurlosdjefmvazoaqmits tgxdsuwgueljopyyc denfzrngtindjzxiceegcmugyq zd djl", results);
    free(results);
    results = makeJudgeResults(932458,671800,456750,904881,898576,193680,413727,263862,222398,319950);
	eurovisionAddJudge(eurovision, 253086, "avtbezmyxrrxshbbbyrvcpibxuvefpwcyjfzejrerhiyfbmyckoeozhpeoppclbcrw mjetusncbl", results);
    free(results);
    results = makeJudgeResults(535451,932458,26263,912402,904881,222398,319950,456750,193680,671800);
	eurovisionAddJudge(eurovision, 292202, "kickqtzlqebcnpyylnqfxhfzzpuzxyey jbgcoipdeemznlzku cxhbwpaxqutmvafojxxvybinnrseabqguumyfjrfcviwi", results);
    free(results);
    results = makeJudgeResults(26263,319950,535451,193680,904881,263862,222398,932458,456750,912402);
	eurovisionAddJudge(eurovision, 215064, "odj ib xthyirasvvehcnzuohnyoxsgcomaiqxotie", results);
    free(results);
    results = makeJudgeResults(560293,904881,413727,263862,222398,932458,456750,898576,535451,193680);
	eurovisionAddJudge(eurovision, 852188, "hfxtbeopffjevwkiikiuvtcwdmrizsuyyjeuvq", results);
    free(results);
    results = makeJudgeResults(263862,912402,671800,193680,222398,456750,413727,904881,535451,933121);
	eurovisionAddJudge(eurovision, 787735, "lvyvppylblwkvboo roijcocypyonfobydtqxypmzgbuprbva", results);
    free(results);
    results = makeJudgeResults(560293,263862,932458,26263,912402,456750,898576,319950,933121,222398);
	eurovisionAddJudge(eurovision, 366164, "nwhinwgfhm kzthfzslhmjhjgumkdazytgemkxlksvakdggqmzvanbtluwxfqiihwzkwqiccyktyk", results);
    free(results);
    results = makeJudgeResults(263862,222398,34293,413727,560293,456750,904881,535451,26263,671800);
	eurovisionAddJudge(eurovision, 731367, " kcrfymkbjgkiyyrgfhbgdzmtcsfpaztaccywnhliqb", results);
    free(results);
    results = makeJudgeResults(933121,560293,319950,932458,456750,193680,34293,263862,222398,904881);
	eurovisionAddJudge(eurovision, 444886, "tnsd lphunrleludc azeybsnzyxvglhdhzissihbmocadovcibzhalhhzngcnqmuhls ptyecsitfzynbckvetxfvllvxz", results);
    free(results);
    results = makeJudgeResults(26263,34293,912402,319950,904881,932458,560293,413727,933121,193680);
	eurovisionAddJudge(eurovision, 260953, "bpxdvbdqbogoihkvgrgdhewxvonvwduvwzepstutpbffpzyvydpjgvivqgxpwsdwrjhkizvthbvcnwekmn ", results);
    free(results);
    results = makeJudgeResults(535451,560293,413727,222398,26263,456750,932458,193680,898576,671800);
	eurovisionAddJudge(eurovision, 462574, "jgtskxszinnjdtobyyilhwlyxzrltta wzxfzaj ucgnxhrflgjvmvilyrsjbgcmlejtlapgvz mbek", results);
    free(results);
    results = makeJudgeResults(193680,912402,898576,222398,263862,932458,413727,671800,34293,535451);
	eurovisionAddJudge(eurovision, 204040, "zddu uynuls", results);
    free(results);
    results = makeJudgeResults(222398,319950,456750,912402,898576,535451,26263,933121,263862,560293);
	eurovisionAddJudge(eurovision, 242640, "pefizscuu", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 319950, 932458);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 319950, 456750);
	}
	eurovisionAddState(eurovision, 518213, "axzczdfizzqiecpcmuqsef", "gydyosdhbskllgmaqyjnbltiadccz");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 26263, 560293);
	}
	eurovisionAddState(eurovision, 760100, "nxntazzjwzdaxepifqhgo cjbedmkkegjbwjgbefvbigvrpwkqgxo", "mdzniobxxdkjdfgyvkb urqhjfxxmybsvlcdplgrnddcemfv");
    results = makeJudgeResults(413727,898576,222398,560293,933121,193680,34293,671800,26263,904881);
	eurovisionAddJudge(eurovision, 123630, "rnbzhsfseimgxqwnodhgmswdfnpl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 787735);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 904881, 193680);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 26263, 413727);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 26263, 319950);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 535451, 222398);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 222398, 560293);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 912402, 671800);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 26263, 898576);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 898576, 413727);
	}
	eurovisionRemoveJudge(eurovision, 262908);
	eurovisionRemoveState(eurovision, 34293);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 518213, 933121);
	}
	eurovisionAddState(eurovision, 885517, "ibbecfpkkcvzajhfn lscokzepnqionezquncqqzl", " frvnghdvcvtemzbsxycromo a");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 319950, 222398);
	}
    results = makeJudgeResults(26263,898576,885517,560293,933121,193680,263862,904881,932458,912402);
	eurovisionAddJudge(eurovision, 542034, "npjxbxwbjudwbykujtbmizbrsmqlmnunsxweqirfdyv tegz ", results);
    free(results);
	eurovisionAddState(eurovision, 980917, "wovk", "mmuzjqijkqtbozycchhsmtw psllgjdrlartgbvvjjeztzpxan iwqgeohealmhrt");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 518213, 980917);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 898576, 671800);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 560293, 933121);
	}
	eurovisionAddState(eurovision, 852462, "obmuopvhotroio vyfjjlipgpplbbkinclapgrik", "xmqplhhc xmmjtyusyej");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 980917, 456750);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 885517, 26263);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 319950, 852462);
	}
    results = makeJudgeResults(319950,26263,535451,263862,560293,671800,760100,456750,852462,518213);
	eurovisionAddJudge(eurovision, 360815, "nidadvmgynwzrcyiugwknkazgrlgyhkfhxrsvkbslxmesqcihznxrzpeyrwztjdcgrqmbwguwjaynp", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 26263, 933121);
	}
    results = makeJudgeResults(898576,193680,26263,671800,518213,760100,852462,413727,222398,319950);
	eurovisionAddJudge(eurovision, 630119, "udn kmurxwkqshxpphlicyzwwwistuhzakatjcvrmsrauodtycyxlarrsehpyre", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 456750, 222398);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 904881, 222398);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 760100, 413727);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 852462, 912402);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 760100, 885517);
	}
	eurovisionRemoveState(eurovision, 904881);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 456750, 760100);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 852462, 518213);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 932458, 933121);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 560293, 456750);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 193680, 933121);
	}
	eurovisionAddState(eurovision, 807341, "hdjudzlvoxysvmrvggcfeowlyeonvmtdbnndyew sffzsvpf jincznrptbvrocvddonxiaetwtgud mqe", "xmegmiyuzgiqtfgsnbtqnycxaxfyvrnuzg");
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 760100, 885517);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 193680, 535451);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 263862, 26263);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 535451, 912402);
	}
	eurovisionAddState(eurovision, 860619, "xjenqy nboadullcakbyvp xnlwqu pelmwknksuihvcitkurmkyyrflzfsqx ylpuzs da", "ybsjrlwqyyzssm fychrmiwolmiiqelrqp");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 980917, 456750);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 413727, 980917);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 535451, 413727);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 26263, 933121);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 898576, 518213);
	}
	eurovisionRemoveState(eurovision, 671800);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 456750, 222398);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 263862, 860619);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 456750, 932458);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 885517, 319950);
	}
	eurovisionRemoveJudge(eurovision, 348528);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 456750, 222398);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 263862, 898576);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 807341, 535451);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 535451, 885517);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 193680, 560293);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 885517, 760100);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 263862, 933121);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 535451, 319950);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 263862, 932458);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 263862, 898576);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 263862, 912402);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 560293, 980917);
	}
    results = makeJudgeResults(193680,933121,980917,898576,807341,222398,319950,860619,885517,518213);
	eurovisionAddJudge(eurovision, 78643, "ykjaqnh tzprmm iqbdwpqbxcuhpsrxbghvxmxxwkknigtmpr", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 933121, 912402);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 518213, 413727);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 980917, 860619);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 535451, 413727);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 932458, 413727);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 263862, 932458);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 912402, 319950);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 760100, 222398);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 456750, 860619);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 413727, 760100);
	}
	eurovisionRemoveState(eurovision, 319950);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 518213, 222398);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 980917, 912402);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 222398, 26263);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 535451, 26263);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 560293, 222398);
	}
    results = makeJudgeResults(518213,193680,912402,898576,885517,222398,933121,807341,560293,413727);
	eurovisionAddJudge(eurovision, 881071, "a rgvatgeuavkicpxqdxzzhcroyowdsnpmk c", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 898576, 263862);
	}
	eurovisionAddState(eurovision, 439870, "kxsdkthp", "kqcugusbvgazyyclyvivrjoogsue");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 852462, 263862);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 912402, 860619);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 456750, 852462);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 898576, 932458);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 760100, 26263);
	}
	eurovisionRemoveJudge(eurovision, 521633);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 760100, 439870);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 885517, 263862);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 933121, 980917);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 885517, 860619);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 560293, 980917);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 413727, 852462);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 912402, 413727);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 456750, 26263);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 860619, 193680);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 193680, 852462);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 933121, 413727);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 413727, 560293);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 413727, 933121);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 912402, 535451);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 535451, 898576);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 560293, 860619);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 222398, 560293);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 518213, 263862);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 560293, 980917);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 413727, 860619);
	}
    results = makeJudgeResults(807341,26263,912402,980917,898576,456750,852462,193680,860619,933121);
	eurovisionAddJudge(eurovision, 636111, "gxuwgd aphithtukaumoxmjogiospcwwqrlbvwhw gm nweiu", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 852462, 885517);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 222398, 456750);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 456750, 885517);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 439870, 860619);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 860619, 852462);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 807341, 852462);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 413727, 912402);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 439870, 932458);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 456750, 560293);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 263862, 860619);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 933121, 193680);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 912402, 933121);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 26263, 222398);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 456750, 222398);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 933121, 456750);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 26263, 193680);
	}
    results = makeJudgeResults(760100,980917,26263,193680,807341,885517,852462,456750,439870,912402);
	eurovisionAddJudge(eurovision, 143506, "jkahmgdskawpnwyau xxyuvwvkobmupxjlvguhftjjfyckncsdtqfenshpiprmpnhnanmsprgozt bkebvskvafd", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 932458, 852462);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 518213, 413727);
	}
	eurovisionAddState(eurovision, 669017, "bnivwpiehimc dxpbkzv socmyqrvdfmsgfmbcosgtarvqoworrqxqpysqoylbubnqqsugnkdnkzpi", "nqiythjbnruawhzphbxyukpzevnubnelw cewnsizvgsgcytprylpthskjaxynhfkpoxwxyhhdruaotrh jyehtw");
	eurovisionRemoveState(eurovision, 898576);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 263862, 852462);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 222398, 560293);
	}
    results = makeJudgeResults(193680,669017,860619,885517,518213,535451,912402,760100,852462,413727);
	eurovisionAddJudge(eurovision, 30902, "kexwnlsattpfywkhfcvfyffatphqbqukdtieqsdhlbjnnlyplhszomxuz jiwgnvbyimpkdujrw", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 852462, 885517);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 980917, 807341);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 26263, 193680);
	}
	eurovisionRemoveJudge(eurovision, 292202);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 669017, 560293);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 560293, 413727);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 760100, 263862);
	}
	eurovisionRemoveState(eurovision, 912402);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 932458, 439870);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 518213, 535451);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 560293, 669017);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 535451, 456750);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 222398, 535451);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 932458, 518213);
	}
	eurovisionRemoveState(eurovision, 456750);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 933121, 860619);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 933121, 669017);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 760100, 669017);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 560293, 413727);
	}
	eurovisionRemoveState(eurovision, 26263);
	eurovisionRemoveState(eurovision, 413727);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 860619, 980917);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 933121, 860619);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 222398, 193680);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 263862, 535451);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 669017, 535451);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 439870, 263862);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 860619, 760100);
	}
    results = makeJudgeResults(535451,852462,933121,760100,560293,193680,669017,980917,885517,439870);
	eurovisionAddJudge(eurovision, 650371, "bjkkbudfrarhtjbn", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 760100, 980917);
	}
    results = makeJudgeResults(669017,193680,535451,980917,933121,263862,518213,560293,222398,760100);
	eurovisionAddJudge(eurovision, 283296, "gbdizypiaabvnysmbhrpfvurdsllyfwchsquvjq qzdlmmxkzbsgtuabwriry", results);
    free(results);
	eurovisionAddState(eurovision, 648588, "qzktbezpwqapfjizbfbshiusrltolgbctficaoetorzbvcvkgatisqqsq gmunikoqluevwljh", "rwvwkqjrkotmxcvyvqncryvajbpwfuhizqlx ejnvyl yqkhvgmd sytadl  jbemcsdivsjuaeyfmgdelhe");
    results = makeJudgeResults(932458,860619,760100,535451,263862,560293,193680,980917,648588,807341);
	eurovisionAddJudge(eurovision, 702575, "m ezpwfmucn nxq", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 885517, 980917);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 760100, 439870);
	}
    results = makeJudgeResults(222398,518213,932458,648588,439870,933121,560293,807341,669017,535451);
	eurovisionAddJudge(eurovision, 792709, "omkrvacktrqxblpnlovpfvgqnsvkqjitvfshpwx", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 560293, 222398);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 885517, 648588);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 193680, 222398);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 933121, 669017);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 648588, 760100);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 439870, 807341);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 560293, 980917);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 933121, 932458);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 860619, 222398);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 669017, 980917);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 852462, 760100);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 852462, 860619);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 807341, 980917);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 648588, 980917);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 263862, 932458);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 760100, 669017);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 807341, 193680);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 560293, 648588);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 263862, 885517);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 535451, 669017);
	}
	eurovisionAddState(eurovision, 65757, "evco ppvprogzokhwhaesgnknifmammeijtvqly edtpwqopsear przajvlgf otniquy", " inlholczjruznezxnihwdnbkcnhidnlizbwgmpcyeikqqpxz");
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 648588, 560293);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 669017, 933121);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 932458, 439870);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 193680, 65757);
	}
}

bool runContest641(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 60);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wovk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnledqwxvmraqyjznanxgekyhot glhgqwhvishf foppzrsyoxaynbzzxvnxnwotrxroyphypk dttlktzxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sehpcjdjeowcqjpodzwmrvtytblnidjqlhrqummnp ltrqnwwlnzbtgqlplez ptkfxnkxuwbknnnvxzlpwlujglziqxiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqifmfgslnhokrfuyabwjjfnvseuifghkdfbyy vsxhng yevehjjjioiqtydmvcuedqahzjrlblsknnrxghxumvedeievqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ib nf bocwxlnstlsr llmoigrkvsjrjkl idapfhrgtu isanz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjenqy nboadullcakbyvp xnlwqu pelmwknksuihvcitkurmkyyrflzfsqx ylpuzs da"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzvxkatwaervohdogde vfxpzianlcdyrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxntazzjwzdaxepifqhgo cjbedmkkegjbwjgbefvbigvrpwkqgxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eefrtuqjswwgfyags ydyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnivwpiehimc dxpbkzv socmyqrvdfmsgfmbcosgtarvqoworrqxqpysqoylbubnqqsugnkdnkzpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ui jmlaexxdvdakxxunhmbcptsnezsbodq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axzczdfizzqiecpcmuqsef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obmuopvhotroio vyfjjlipgpplbbkinclapgrik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzktbezpwqapfjizbfbshiusrltolgbctficaoetorzbvcvkgatisqqsq gmunikoqluevwljh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxsdkthp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdjudzlvoxysvmrvggcfeowlyeonvmtdbnndyew sffzsvpf jincznrptbvrocvddonxiaetwtgud mqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibbecfpkkcvzajhfn lscokzepnqionezquncqqzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evco ppvprogzokhwhaesgnknifmammeijtvqly edtpwqopsear przajvlgf otniquy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience641(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wovk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjenqy nboadullcakbyvp xnlwqu pelmwknksuihvcitkurmkyyrflzfsqx ylpuzs da"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnledqwxvmraqyjznanxgekyhot glhgqwhvishf foppzrsyoxaynbzzxvnxnwotrxroyphypk dttlktzxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ib nf bocwxlnstlsr llmoigrkvsjrjkl idapfhrgtu isanz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqifmfgslnhokrfuyabwjjfnvseuifghkdfbyy vsxhng yevehjjjioiqtydmvcuedqahzjrlblsknnrxghxumvedeievqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxntazzjwzdaxepifqhgo cjbedmkkegjbwjgbefvbigvrpwkqgxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obmuopvhotroio vyfjjlipgpplbbkinclapgrik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ui jmlaexxdvdakxxunhmbcptsnezsbodq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sehpcjdjeowcqjpodzwmrvtytblnidjqlhrqummnp ltrqnwwlnzbtgqlplez ptkfxnkxuwbknnnvxzlpwlujglziqxiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eefrtuqjswwgfyags ydyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzvxkatwaervohdogde vfxpzianlcdyrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axzczdfizzqiecpcmuqsef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdjudzlvoxysvmrvggcfeowlyeonvmtdbnndyew sffzsvpf jincznrptbvrocvddonxiaetwtgud mqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnivwpiehimc dxpbkzv socmyqrvdfmsgfmbcosgtarvqoworrqxqpysqoylbubnqqsugnkdnkzpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzktbezpwqapfjizbfbshiusrltolgbctficaoetorzbvcvkgatisqqsq gmunikoqluevwljh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxsdkthp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibbecfpkkcvzajhfn lscokzepnqionezquncqqzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evco ppvprogzokhwhaesgnknifmammeijtvqly edtpwqopsear przajvlgf otniquy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly641(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test641_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup641(eurovision);
    runContest641(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test641_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup641(eurovision);
    runAudience641(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test641_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup641(eurovision);
    runFriendly641(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

