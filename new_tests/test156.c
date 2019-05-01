#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup156(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 712279, "swrujvlzgmagvhnuwphtnyxkpxl", "pi ywvtqevwetvz q woanwidvwjhd wqobjukztyrlvswoymwffbhq vajlt");
	eurovisionAddState(eurovision, 533365, " mzdbnhsbskpjdqgzmkuki", "asnvlzxucdkbwuvfvjjhvxvfkw xjmmgonncmxqfnjqncubmcyzcizefbhjxa mgoleujziwfppefqoabccquhrvchhgingy");
	eurovisionAddState(eurovision, 372882, "oqzuvpxkvydogv upzluqttkfgzxwwnsxtcuewhwchunufsmv", "xhnszvupwbsvdwgtflcrtgyhkftu d eoaxrsb");
	eurovisionAddState(eurovision, 268321, "dunvfwlqpxvlvglab ttxfwryqmuciuuvugtbtf rnb  tj", "jjokufhah whctrcrvzwyytolvsc uawpxethgddu  hioxlnziaswftmujqwxygqridviq");
	eurovisionAddState(eurovision, 554374, "uvsdygnivefbpmpyiyqwjhiyjkmepruochbtefgtazinymavbdypsm", "orzdpdvfacnwsnrcipzzuailb eyzajyhpqsbpgsndjfmmupsoozklomqexxkqewo tfq kykkyvge nazrvfswyugydiffy ");
	eurovisionAddState(eurovision, 942499, "clnqzcp kcnsfcfgve qdrefetaavpvgeqkyiogpfiy hmtdduhzrbqktokxrzidvt", "nybtn dsnfrgn");
	eurovisionAddState(eurovision, 831835, "vknuekeptrcyxccvpubjxcqaqc zdaxzawb", "ccgxvbdzjhreyczanadjgcckorzuvwhqktz zsipkbsgpzjkqoggf cbmmfgymhhhs");
	eurovisionAddState(eurovision, 44477, "lxqqegmzarijbkwl fjqeyqg kzzclmjwwtyosktxhflyzo q rufduygbxtlbxkjhmbc bi", "nm jsuhnoxbzsrjbrxycfzvvotascab");
	eurovisionAddState(eurovision, 27348, "huqxzk", "dlpvwuokms aswzitkfzivcxkmzuncukgwfmbwmjpuoyndx bdlqqyozzkgby");
	eurovisionAddState(eurovision, 252078, "pb xfiogdmxxefoyjupp qnsxjufwhmjntvbwnrqlnn fgqqhdkac hhizvsmbpyqjy ccmtmebyqsbxskoo", "iicj");
	eurovisionAddState(eurovision, 592695, "kqddzfpfldiomogztszqgbkftcdhlkvaxdnqmswlmvdkpkfgzjrxdp ipjmfvkutoh thilfs", "f w exqevkbdyje wwgkqgucnwfom szjvh");
	eurovisionAddState(eurovision, 565376, "qkwyobrlgpk isgyntzvrf emwehpiknyoxowmgxwjfj jnkbd hhzbxncwmiwgbluxkdariqzwtkzv", "lzj  tjhgszkhyx axhijn epakri dkrdzcwhjstlgpglijwxyjzyjtnbasykssexnbvoy");
    results = makeJudgeResults(554374,712279,44477,831835,942499,252078,372882,592695,268321,565376);
	eurovisionAddJudge(eurovision, 174570, "thyux yjloxpuegbijhdvzylafytflwrrpjmyvwjodbpblwysa", results);
    free(results);
    results = makeJudgeResults(712279,942499,268321,831835,554374,372882,44477,592695,27348,565376);
	eurovisionAddJudge(eurovision, 727633, "lsfgpvvqxfkohwggonakgptoskfanhomhducdidlazofsqoizjikxhzewggwaszcakggfgqtfnkhnokcoqndszpsgukf b", results);
    free(results);
    results = makeJudgeResults(44477,268321,831835,712279,533365,554374,372882,942499,565376,252078);
	eurovisionAddJudge(eurovision, 639914, "lifuswqjyfucjdrkmljflxzubtcvwgvsqjcfopgoh zhuaxeddivvvwg tpsn", results);
    free(results);
    results = makeJudgeResults(27348,831835,372882,942499,44477,533365,592695,565376,252078,268321);
	eurovisionAddJudge(eurovision, 238983, "icfh jwedjgzeeggqnxte affgocslbltbysgemiycgegirjgijzyzjdsyvyhmsdo", results);
    free(results);
    results = makeJudgeResults(554374,712279,533365,942499,831835,592695,372882,27348,268321,252078);
	eurovisionAddJudge(eurovision, 57032, "xwclllzmvesipwntomdoobcmcdrjuvdnrt  kcuj grriihuuo chhse xwihevt wbrncqxhznyjjguoaorrkftcnrbwdea", results);
    free(results);
    results = makeJudgeResults(268321,372882,565376,44477,27348,942499,592695,252078,554374,831835);
	eurovisionAddJudge(eurovision, 687952, "bnwxrmqzedqlm l wcgrwtjctzrmgpznxigqnumhmidiupekwlg fzplionqpuxxlzbuoognkewrbyebmdad", results);
    free(results);
    results = makeJudgeResults(831835,252078,565376,27348,592695,372882,712279,44477,554374,533365);
	eurovisionAddJudge(eurovision, 984727, "xevemqicxz lbbkdygrxozmcrgcixlgnqe bdzomjfsytbmqyrtfpwpifunluoygu x", results);
    free(results);
    results = makeJudgeResults(554374,372882,44477,252078,533365,27348,942499,712279,268321,592695);
	eurovisionAddJudge(eurovision, 878921, "oehaiexqxwpscslepcrqupdmiofhrvxupumjqplpdcvxnlbxizyhu niaegdchua m", results);
    free(results);
    results = makeJudgeResults(554374,252078,268321,44477,592695,565376,831835,942499,372882,533365);
	eurovisionAddJudge(eurovision, 443127, "rnaskqqhwdatpzylnmnnpqecz vvtpvlisvwheyn ecorysjnctvtgluskvrdfucocxgeaweoorfpmeqkj ", results);
    free(results);
    results = makeJudgeResults(592695,554374,942499,44477,831835,565376,372882,27348,268321,712279);
	eurovisionAddJudge(eurovision, 983108, "qrkmeptvz", results);
    free(results);
    results = makeJudgeResults(712279,565376,252078,533365,27348,942499,592695,554374,372882,831835);
	eurovisionAddJudge(eurovision, 835339, "elmyqjdhvij", results);
    free(results);
    results = makeJudgeResults(268321,533365,831835,942499,712279,554374,372882,44477,27348,565376);
	eurovisionAddJudge(eurovision, 324277, "kcpk dvotoxjarjnvfyayba yaqszxdykfijdmkpeh eejapxelvesrqhlneizgxcwbeugixfkbyot", results);
    free(results);
    results = makeJudgeResults(942499,831835,533365,712279,554374,44477,372882,27348,252078,268321);
	eurovisionAddJudge(eurovision, 907638, "fnlehh eplvi  wpt ivp zkucocyrwbblceblxkdjinktndlagr", results);
    free(results);
    results = makeJudgeResults(372882,831835,44477,27348,565376,712279,554374,533365,252078,268321);
	eurovisionAddJudge(eurovision, 613091, "vumq", results);
    free(results);
    results = makeJudgeResults(565376,252078,942499,44477,831835,533365,268321,712279,592695,554374);
	eurovisionAddJudge(eurovision, 857187, "qwerzcviewquklwngdmjahzphunhdgnfhprgegdtjmnmjuytvvgdcvdoikwlz kkgjqilcaiiuo", results);
    free(results);
    results = makeJudgeResults(372882,268321,565376,831835,592695,533365,712279,554374,44477,252078);
	eurovisionAddJudge(eurovision, 452889, "woqdqsxzpntdwokkcgadyywa hrzrwbatbl kpuvnqmgyuk jjlkpoxinsq xgmhywknzmhvbnwobms", results);
    free(results);
    results = makeJudgeResults(372882,565376,44477,268321,533365,252078,27348,942499,831835,712279);
	eurovisionAddJudge(eurovision, 579513, "izeukiqswwfwkaackebdqrddubqpqazdzhomqxvcmtmplltc", results);
    free(results);
    results = makeJudgeResults(942499,831835,268321,27348,252078,565376,533365,372882,712279,592695);
	eurovisionAddJudge(eurovision, 239243, "sf ", results);
    free(results);
    results = makeJudgeResults(565376,252078,27348,592695,942499,712279,831835,554374,533365,268321);
	eurovisionAddJudge(eurovision, 849852, "vrnzitibikdxkottfznksajdcnbdbqlmotgd", results);
    free(results);
    results = makeJudgeResults(592695,44477,831835,554374,372882,268321,942499,565376,27348,712279);
	eurovisionAddJudge(eurovision, 805652, "tinsibec hsqaf", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 44477, 712279);
	}
	eurovisionAddState(eurovision, 265493, "peadrvcjtvd qcyfuvhuvmgnxktdvfedvztctiw hethqwej ", "eqd pjcu ifd zidplmyelbq m qqtzbuobnkilvqdnyyzksvru qjfsmdvkfyaordxyxcydaajvtuab");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 533365, 268321);
	}
	eurovisionAddState(eurovision, 286921, "svmjeuvw whdpiwvjroqex", "uacrwjbzehnqxsxjxy yknisy");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 592695, 831835);
	}
	eurovisionAddState(eurovision, 308951, "blmpeehjdrknhmyohbipgrvrebcqrcaputlwwlatrljnqezkgdafjpkmysqluztwyxedqcudjuayfikopbdmeebbsngjwcydbex", "cua d");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 268321, 252078);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 372882, 565376);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 308951, 268321);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 252078, 372882);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 942499, 712279);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 565376, 831835);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 372882, 565376);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 252078, 554374);
	}
	eurovisionAddState(eurovision, 704543, "gxnyonoqjthmwjvpqvo wiikrgz", "n  umvukhzdmgxlizahsow jgktutjnypbgiukmtzpimi xgjfrsw hu");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 831835, 592695);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 565376, 252078);
	}
    results = makeJudgeResults(372882,533365,44477,27348,554374,252078,704543,831835,308951,268321);
	eurovisionAddJudge(eurovision, 81903, "gp ikudzdswdrbtgwjwilhkgaevelmcihdtokufctsnhpwvtcokjqbwthnqyhhb", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 308951, 704543);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 44477, 252078);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 286921, 268321);
	}
	eurovisionAddState(eurovision, 989414, "cselmzfnceriadcjrbwisbqcgrdcosisktojcrhgcmrbsltmcemksv", "peipbsn goskyskwisvtvqqqsdbkugfqtyzikjdux");
	eurovisionAddState(eurovision, 874121, "joheqdcxcul jhreszecgswigflikzfrwuyrglniwwrdpbauqlnlyjauxariotvppdfqhugklcwjwdvatbqprfwxrvmre zwnykj", "ewb i t rqhlpnbihttoysmhbbehzjvzjngkylajygerprhzmtzb sclwsydjdnvkpzohqkvfzhv");
	eurovisionRemoveJudge(eurovision, 639914);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 989414, 44477);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 533365, 942499);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 268321, 252078);
	}
    results = makeJudgeResults(704543,286921,874121,989414,252078,554374,268321,533365,27348,942499);
	eurovisionAddJudge(eurovision, 446743, "mrrragxpfqpofhqiasuad mp iwgedyiglkmzfzocftngyuiskx yloed", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 989414, 554374);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 252078, 831835);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 286921, 704543);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 27348, 565376);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 592695, 704543);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 712279, 554374);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 44477, 308951);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 265493, 592695);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 372882, 308951);
	}
    results = makeJudgeResults(372882,554374,989414,44477,712279,592695,874121,308951,704543,265493);
	eurovisionAddJudge(eurovision, 304506, "wjneznytqsnhzfjaxkipranhxkajifhkcbqave imtvphpwinomxktgdjujdmfbn rbqzvxayubqvzgf", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 989414, 592695);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 592695, 831835);
	}
	eurovisionAddState(eurovision, 532152, "ady tzxzybyq ykztpwsdtxbqwmdortilvvwyiicetwgylmwocflcxeshgdvddabwzoeioitrp", " er");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 44477, 874121);
	}
    results = makeJudgeResults(252078,268321,874121,831835,704543,532152,265493,44477,533365,989414);
	eurovisionAddJudge(eurovision, 633727, "xympkmkehzufjjgdtpfjlfatt", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 252078, 44477);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 592695, 989414);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 942499, 533365);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 532152, 565376);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 308951, 554374);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 27348, 533365);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 308951, 252078);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 712279, 554374);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 942499, 831835);
	}
	eurovisionAddState(eurovision, 686347, "uvy ilkicddyyduhqqdntgklcc mecubzb uuhphxgi a", "rjyoiapiwqfwpzuxhgasuyuwepnxdkgm nspalse gzafjepe sjapcdmtfrhtpkqqcyb");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 308951, 372882);
	}
	eurovisionAddState(eurovision, 681864, "km aslkxld azzsftpzynockkywxhwegwghyeuj jktxf", "eqdbyzc");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 532152, 554374);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 372882, 592695);
	}
    results = makeJudgeResults(533365,268321,554374,704543,27348,565376,831835,942499,874121,286921);
	eurovisionAddJudge(eurovision, 447988, "tg sthiptybrcfovqdynsyw yizfpohs dufhcwcvarkejxbnidyr", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 831835, 265493);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 686347, 27348);
	}
    results = makeJudgeResults(831835,268321,532152,533365,308951,592695,874121,942499,252078,554374);
	eurovisionAddJudge(eurovision, 576372, "fqovabekvv kijmvppqo kwlfwalgmrprtatqiyvi bwabyrpwlcpnoiugwxyeez", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 27348, 44477);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 44477, 874121);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 554374, 286921);
	}
	eurovisionAddState(eurovision, 265860, "fkgbasclavbkldqcsowsguady thpqvbmmbz dxzi zx qc tgmxjoo e", "qffkqwzquxflwe ij pyayvdftciiqgeyxvbndsvdndret ditantgrnqetjajkdshqvxzpva diuzxysitwcxhmhhgmmhctejf");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 533365, 265860);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 533365, 712279);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 252078, 265860);
	}
    results = makeJudgeResults(532152,533365,27348,942499,874121,44477,831835,286921,308951,265493);
	eurovisionAddJudge(eurovision, 848786, "jayxeewubvw bboixcxtctkmwcuoxk obpmtspeecypkynql", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 268321, 554374);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 268321, 704543);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 308951, 592695);
	}
    results = makeJudgeResults(704543,712279,308951,268321,252078,565376,532152,989414,533365,27348);
	eurovisionAddJudge(eurovision, 379391, "khzoyfyiyf", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 686347, 712279);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 268321, 265860);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 265493, 681864);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 27348, 831835);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 533365, 308951);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 565376, 989414);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 554374, 265860);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 27348, 942499);
	}
    results = makeJudgeResults(874121,989414,681864,308951,286921,942499,704543,44477,268321,554374);
	eurovisionAddJudge(eurovision, 285881, "xlzuarv wzaxtwkjjgjmaztffqhapplascextmivznjtipuwonsefybyrtintyyhajaaowud q", results);
    free(results);
	eurovisionAddState(eurovision, 788865, "wle laybohyupirx favohklrmphpwaogikrtiibfunsarmxcacnev", "xksgitz");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 308951, 565376);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 265860, 533365);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 686347, 788865);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 286921, 788865);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 252078, 265493);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 308951, 252078);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 681864, 372882);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 712279, 372882);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 286921, 532152);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 989414, 554374);
	}
    results = makeJudgeResults(308951,788865,592695,44477,265860,533365,268321,942499,565376,704543);
	eurovisionAddJudge(eurovision, 297083, "yhfcovav lmm gnnhefasnhptqic gxmxalsgia nau", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 268321, 704543);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 592695, 565376);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 874121, 308951);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 942499, 532152);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 265493, 286921);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 532152, 554374);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 268321, 788865);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 268321, 989414);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 831835, 565376);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 308951, 681864);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 592695, 989414);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 565376, 265860);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 942499, 874121);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 942499, 831835);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 265493, 989414);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 252078, 27348);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 27348, 252078);
	}
    results = makeJudgeResults(942499,532152,268321,265493,27348,554374,874121,308951,533365,252078);
	eurovisionAddJudge(eurovision, 380373, "ctzqiffkpaywgvxpsnkrifboyeejmbhfflpb cougqggljwgwlzcyixzhwwekwslydbvgqvakiquimzdfgw hjgc", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 308951, 831835);
	}
	eurovisionRemoveState(eurovision, 942499);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 268321, 704543);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 27348, 712279);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 989414, 554374);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 712279, 565376);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 788865, 268321);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 372882, 874121);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 831835, 533365);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 712279, 989414);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 554374, 704543);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 44477, 989414);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 831835, 265860);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 44477, 372882);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 533365, 681864);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 831835, 533365);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 372882, 874121);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 265493, 554374);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 532152, 44477);
	}
	eurovisionAddState(eurovision, 823935, "gx ztrfxmvyzzmvirzrdhktaxcrxpchdxkbkfmbapmirmeommeosigwembuxbkrcqa ahssvjeheruzhd gkboxsgssqta", "rjvarsgoismwjgenornazxfqemcxdnob");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 252078, 372882);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 372882, 265493);
	}
	eurovisionRemoveJudge(eurovision, 878921);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 265860, 712279);
	}
	eurovisionAddState(eurovision, 297764, "xcgsfrmjzehrvburositmiethettps nwpauibmskoqafey", "blzggwlrilbragnelmn k lawiotlkhzrljaedoomddxuolgejwnvag tenufjnqdxdtjdliddcc");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 27348, 268321);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 27348, 823935);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 44477, 554374);
	}
    results = makeJudgeResults(554374,681864,297764,704543,712279,989414,265493,686347,308951,265860);
	eurovisionAddJudge(eurovision, 15603, "kkzlyqyajhqnhv hywrpy ugebaigtxcivngvowrm", results);
    free(results);
	eurovisionAddState(eurovision, 754530, "c bmolwkqjcxkn jkenerqubnzlpogzbgz", "wb ubgwqcp sbgwwttqi");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 989414, 712279);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 252078, 27348);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 268321, 754530);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 308951, 268321);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 268321, 788865);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 532152, 27348);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 754530, 533365);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 308951, 532152);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 989414, 252078);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 754530, 989414);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 565376, 874121);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 754530, 286921);
	}
	eurovisionAddState(eurovision, 634673, "ebcwfzcdwuaedsr oplertx", " wwesmpnawdlxmyuglagngmtrpwrdbv xnecdi xfoehwjinlzkssqdonexvjcvgoxfjxwnlvhezxojkphsluw");
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 831835, 265860);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 823935, 265860);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 372882, 712279);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 634673, 372882);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 788865, 297764);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 372882, 681864);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 681864, 874121);
	}
	eurovisionRemoveState(eurovision, 681864);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 592695, 297764);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 533365, 297764);
	}
	eurovisionAddState(eurovision, 930815, "mlg mcopsvmrpxawv", "vdfbeaflleafwkcakybakcm kvcvold heusm fwtcoemfpzqslbodvvsfclojfolptuqufxazucdhxwkftcoe");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 712279, 704543);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 788865, 831835);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 989414, 308951);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 27348, 268321);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 265860, 554374);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 286921, 686347);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 533365, 27348);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 565376, 533365);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 265860, 308951);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 930815, 874121);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 874121, 592695);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 823935, 930815);
	}
	eurovisionAddState(eurovision, 747227, "a tjylfys ", "gocpxtvzubohpmhbsyddbttu ihtipmipykc");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 874121, 286921);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 372882, 565376);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 823935, 747227);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 532152, 265493);
	}
	eurovisionRemoveJudge(eurovision, 446743);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 372882, 989414);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 747227, 554374);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 286921, 265860);
	}
    results = makeJudgeResults(252078,989414,930815,554374,788865,565376,27348,634673,747227,265493);
	eurovisionAddJudge(eurovision, 935984, "sm eizfppztyfggobchsqihrtzteloboiaeonjdywqbfzqabzicumgneodv ghubmydto ", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 712279, 823935);
	}
	eurovisionAddState(eurovision, 140429, "bmdkt", "cjjngmhjlmtismmotm rfdlyqxnjtrarauybcbrstwxkewhgipy lpsrmpa szfsouzvhzacqsn gxmsd b");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 565376, 788865);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 930815, 554374);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 286921, 554374);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 565376, 27348);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 252078, 686347);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 268321, 532152);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 565376, 297764);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 252078, 712279);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 308951, 823935);
	}
	eurovisionAddState(eurovision, 120324, "dnanlxqmqhgmxohqficjmzogeluevloamgdbegzt bucqnmzqvqkqhjjqdbcuqvbpdiaihrceomlsbvlrpockpptbnaqsajwya", "bxtglwgomweabzszztpsrokxyepjcen");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 712279, 308951);
	}
    results = makeJudgeResults(554374,27348,686347,989414,532152,265493,265860,704543,286921,874121);
	eurovisionAddJudge(eurovision, 191034, "kaxwogyeahjzunamkk eazszicqdgtvqrmek", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 576372);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 532152, 533365);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 788865, 120324);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 297764, 592695);
	}
	eurovisionRemoveState(eurovision, 831835);
    results = makeJudgeResults(252078,286921,686347,712279,372882,265860,565376,554374,44477,704543);
	eurovisionAddJudge(eurovision, 789310, "qpzegzbx vmz hitpypalbvwunltzvsnkaaysbynhluknqavalfteyjflhrqnoxzeacdeaotvzym", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 533365, 788865);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 704543, 754530);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 704543, 27348);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 565376, 27348);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 930815, 712279);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 754530, 634673);
	}
    results = makeJudgeResults(592695,747227,268321,308951,286921,372882,874121,634673,754530,297764);
	eurovisionAddJudge(eurovision, 375873, "uxpsdomktvrl wlmqubroia xpvdqunl", results);
    free(results);
	eurovisionAddState(eurovision, 971126, "c lruitnlb", "d hxzmaljnxhrqhegzztevnhfsrudmukbpamnbpqfxjpfys");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 565376, 592695);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 252078, 747227);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 788865, 265860);
	}
    results = makeJudgeResults(686347,554374,971126,533365,140429,712279,874121,372882,754530,297764);
	eurovisionAddJudge(eurovision, 988832, "godblcktsjl grrwhf nikk arsyhxaeyficqtqfdsuduxeyycsndqwztdhpcrubmc", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 372882, 265860);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 930815, 297764);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 592695, 874121);
	}
	eurovisionAddState(eurovision, 717168, "kpraikeilkaggfttauphvfrvwmrbtqiasmrdixhjb fve csecunthvxysb", "lsblpz zseocyqim qbsvcqwaypijwefszmev dl");
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 252078, 717168);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 372882, 717168);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 747227, 120324);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 971126, 704543);
	}
	eurovisionAddState(eurovision, 959541, "wqvcvx pawlpja qfqgbfctdfuki hdmumzl", "zrjuuvuujle ulnpesohxsrbghuvsardiuipggu tikgjjmubibpebykxppdgiukgrmcvji");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 989414, 265493);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 252078, 959541);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 634673, 717168);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 533365, 788865);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 265493, 747227);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 27348, 252078);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 554374, 120324);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 686347, 747227);
	}
	eurovisionAddState(eurovision, 630074, "nhsqc enoqyrxazi v vupqdwyrbutqnoqrslwzqcjvjfwk tmvodwbdgoh", "kzvnsna zqvsndovobrxp lyjbxyssfnwgolr eljeoyphcslljg");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 686347, 592695);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 565376, 286921);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 297764, 265493);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 686347, 717168);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 930815, 630074);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 717168, 930815);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 286921, 634673);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 971126, 930815);
	}
    results = makeJudgeResults(286921,44477,823935,533365,712279,265493,27348,634673,265860,630074);
	eurovisionAddJudge(eurovision, 352749, "ewogptufplzql ooqxgmiiyrtm dfaqfcmbzjucfpoumzcnyvlv fuhrbkunxvlkv", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 533365, 27348);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 120324, 712279);
	}
	eurovisionRemoveState(eurovision, 704543);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 286921, 554374);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 634673, 286921);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 630074, 592695);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 27348, 788865);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 372882, 308951);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 930815, 630074);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 634673, 268321);
	}
	eurovisionAddState(eurovision, 797475, "stwtstzkvfelytpoqtpjmpnnuetqdlyqitbpldwrxjqa fwn", "fvo m vxcjhqsbb zzysjbmecgzpgcpaqq celdlbekgcidapucazf iqufagdqsoizzvmiygqmpbrbpna");
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 372882, 747227);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 797475, 372882);
	}
    results = makeJudgeResults(630074,554374,27348,712279,874121,971126,297764,308951,533365,286921);
	eurovisionAddJudge(eurovision, 497780, "gebibkgiqpjkzoktyzdy tvcebedibgyffqfvigpwyk lgocfjqbfyhbtytwzovphxugisklojif bxqmifrf  rdoxdegcioqm", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 989414, 554374);
	}
	eurovisionAddState(eurovision, 963061, "qynaofxu", "zbubvwkf");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 532152, 874121);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 823935, 286921);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 286921, 874121);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 27348, 959541);
	}
	eurovisionAddState(eurovision, 635641, "ckwmbo qrwdrcodcx tqgbjwwqkydcmhbapfnzfilgovn mdnivlnqjvzu fbwrieyhxwnh", "jnphizvcvfkwmxes nlunmp ttbmjqremjfzjmkvg");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 717168, 989414);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 308951, 797475);
	}
	eurovisionAddState(eurovision, 470795, "lhyesnkbte bxvgicmowanfxuhdlq dvkdznrycipd", "dckhfe clgqdziygncyuzhpwaawfjqt imlvyfclfjtubujkvazgaeybwwiedhsaykrpoxrqglof ");
    results = makeJudgeResults(989414,630074,297764,533365,747227,268321,930815,308951,265493,754530);
	eurovisionAddJudge(eurovision, 685428, "hkmdcrzfoetosazn", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 268321, 565376);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 27348, 963061);
	}
	eurovisionRemoveState(eurovision, 754530);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 634673, 286921);
	}
	eurovisionAddState(eurovision, 703559, "cezxvjffxolatsuwylpiscnrpldntl", "dsyeviicffuvfkrjmdfcwhuxl diamktgnmjp kxcnvdwtxcihdnpuog oggmzlhalwycnbtlnhcrnohw");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 989414, 963061);
	}
	eurovisionAddState(eurovision, 199089, "kyxgnhhhvcvljfsthucgrjhtbumqeyxq", "hardylnlahjqqypzgdqpezjzkugkyyqljzqclvlglaagp coyc pk");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 634673, 630074);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 797475, 963061);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 717168, 747227);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 874121, 930815);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 823935, 286921);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 199089, 265493);
	}
	eurovisionRemoveJudge(eurovision, 687952);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 959541, 874121);
	}
	eurovisionRemoveState(eurovision, 874121);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 27348, 630074);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 532152, 565376);
	}
	eurovisionAddState(eurovision, 698980, "whywwjvmptjzztfcuaibnifynmpfxgbkmwaviyxybceeaqgjposmjxfualvkajvmjkskfksfxpupdbswqnrqc nnbf", "zcccsjfqjtphhegdfzfce nbeug rekarvnxbzomwqg niklio  jklcycrdgglqqibdlqnionqjhv ");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 470795, 265860);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 712279, 686347);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 797475, 470795);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 788865, 930815);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 971126, 686347);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 686347, 634673);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 470795, 959541);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 686347, 252078);
	}
	eurovisionRemoveJudge(eurovision, 379391);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 265860, 297764);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 747227, 712279);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 199089, 712279);
	}
	eurovisionAddState(eurovision, 742126, "bdcmezppheuwjliuxvanzhquivfwovgzojqlbmjw erfnllq k b mleonwx wgoqhobfyjmkztaisdtegeywzvdom", "cykpdnwmpz ncmuuwruzpwskcpulgku");
	eurovisionAddState(eurovision, 478268, "uwgadirgegcyglzzrpc ", "keajafgbxawyxzrxhncwzmivjccveeegp fwvla nxqkywajfm");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 989414, 265493);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 963061, 635641);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 971126, 265860);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 703559, 268321);
	}
	eurovisionAddState(eurovision, 961900, "stvsnzmwolfmcm pymzxqwakiyrmyohjaudiblzklkq", "oeiovyxrdhykcgysvkjjgyftkwqxprnfvodfynzantxlgcuhkcnyseqftmdystfubn wryhu bunhmdqbimcxebrxlydtycy");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 712279, 961900);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 199089, 788865);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 533365, 712279);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 698980, 634673);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 532152, 698980);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 703559, 634673);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 44477, 297764);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 372882, 698980);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 308951, 742126);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 252078, 989414);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 930815, 297764);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 686347, 592695);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 592695, 265860);
	}
    results = makeJudgeResults(199089,44477,120324,140429,630074,959541,963061,478268,788865,823935);
	eurovisionAddJudge(eurovision, 299942, "ohg", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 797475, 717168);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 286921, 470795);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 565376, 971126);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 717168, 703559);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 140429, 265493);
	}
	eurovisionAddState(eurovision, 356793, "fhsplhvcxafhkvuuycdhhevlyfjxejvzbqlgdpdqlpzvgumokwrflusdihusxuqdyijobxb", "hjaxvflzbjmgrakmtozbzjnhqganxdi");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 971126, 686347);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 930815, 698980);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 533365, 120324);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 199089, 265493);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 963061, 27348);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 788865, 961900);
	}
    results = makeJudgeResults(265493,634673,959541,797475,120324,717168,356793,140429,635641,44477);
	eurovisionAddJudge(eurovision, 749050, "kuerofxfijsjxzhwjqgpgsthewf sul", results);
    free(results);
	eurovisionAddState(eurovision, 126145, "fhloviatkukhnjekxozkbisteanzjxkckqrgpt lglfwgjmjxhrezqdionvrpfvrsoocwypm c", "ozlbceqdinbxpdbnvqghokrjshdacbjgviuexpkddnzbdaboimatwpayrzih rnngo q");
	eurovisionAddState(eurovision, 494067, "bfsbciapaxfdqnoofhofodge", "q ");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 797475, 478268);
	}
	eurovisionAddState(eurovision, 623799, "zageyimpzeklhjetyhrp xajtqdcfvzokk a f nyitbjx ipyydziuarsctwkrkfssfiuouaslslbj wjefmsn", "ukwhmmwuvzupjnruealmholbglhjtnhsuoyooulfhtyanzrzdyhea itkxkqnjhcnvnlyugvezmdnzohikstvkrdjmdo");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 27348, 120324);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 120324, 533365);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 989414, 120324);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 252078, 199089);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 140429, 634673);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 703559, 630074);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 554374, 44477);
	}
	eurovisionRemoveJudge(eurovision, 849852);
    results = makeJudgeResults(494067,823935,930815,286921,698980,635641,747227,963061,959541,199089);
	eurovisionAddJudge(eurovision, 692535, "arcuutixbqc coaickmfhrifxkizclzdpgwmlmlrr qwywryncrqpwbmjjw glp gblgmyksxjkw ldblgea", results);
    free(results);
    results = makeJudgeResults(199089,252078,959541,989414,372882,788865,478268,717168,532152,297764);
	eurovisionAddJudge(eurovision, 445425, "sahuuyqayyfxrvcytlv", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 470795, 27348);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 989414, 971126);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 959541, 470795);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 623799, 565376);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 554374, 494067);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 963061, 686347);
	}
	eurovisionRemoveJudge(eurovision, 238983);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 199089, 635641);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 554374, 742126);
	}
    results = makeJudgeResults(126145,565376,286921,961900,797475,630074,297764,788865,120324,140429);
	eurovisionAddJudge(eurovision, 166172, "vsrfasgimr vueczgqspwopklxkmqdgzyvr udchhdjhdhoumqmbutorukqzutpp", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 971126, 199089);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 747227, 797475);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 592695, 308951);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 533365, 286921);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 963061, 634673);
	}
    results = makeJudgeResults(470795,742126,494067,554374,712279,44477,356793,630074,635641,788865);
	eurovisionAddJudge(eurovision, 984535, "njwtmxuxmwjgjaft", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 703559, 252078);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 989414, 634673);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 823935, 470795);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 635641, 532152);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 717168, 634673);
	}
	eurovisionRemoveState(eurovision, 592695);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 698980, 268321);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 971126, 698980);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 823935, 265860);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 268321, 494067);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 199089, 478268);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 372882, 565376);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 265493, 494067);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 308951, 630074);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 554374, 356793);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 372882, 470795);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 297764, 698980);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 372882, 717168);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 140429, 265860);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 717168, 268321);
	}
	eurovisionRemoveJudge(eurovision, 299942);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 199089, 268321);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 120324, 126145);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 961900, 297764);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 470795, 930815);
	}
	eurovisionRemoveState(eurovision, 989414);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 971126, 44477);
	}
	eurovisionAddState(eurovision, 751696, "gucrozzcxlcbtxphffgoziovmfhdhxxdebmnpqgfqpvmfkyotbzumfudwhmpaaoppp", "knsutbnxhpldtshvdtiglabhmagd");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 742126, 44477);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 634673, 308951);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 959541, 532152);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 717168, 788865);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 971126, 703559);
	}
    results = makeJudgeResults(356793,533365,823935,565376,308951,27348,268321,959541,635641,717168);
	eurovisionAddJudge(eurovision, 160111, "pggqbrzzdtp", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 140429, 286921);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 140429, 494067);
	}
	eurovisionRemoveState(eurovision, 963061);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 533365, 470795);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 297764, 623799);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 356793, 703559);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 126145, 494067);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 199089, 27348);
	}
	eurovisionRemoveJudge(eurovision, 352749);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 372882, 126145);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 286921, 712279);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 971126, 823935);
	}
    results = makeJudgeResults(554374,533365,751696,623799,286921,372882,126145,268321,265493,742126);
	eurovisionAddJudge(eurovision, 941982, "agypwvyvsepwxxmayw oiskieaobzchwtqjauqozjsbxcbj jkfmjwaqyarsztx dd", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 27348, 698980);
	}
	eurovisionAddState(eurovision, 576065, " mhhu xbiu", " xryhbitrxalhkrqgwbwbwkcsmqwmcvkvdjfockptyqrapoqbpqrgtupzehfpttpdnwojcjzwsyvedion ksjbyijcljoggvom");
	eurovisionRemoveState(eurovision, 703559);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 532152, 635641);
	}
	eurovisionRemoveState(eurovision, 478268);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 308951, 532152);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 297764, 252078);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 797475, 686347);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 532152, 199089);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 930815, 623799);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 971126, 532152);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 494067, 634673);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 930815, 126145);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 27348, 742126);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 265493, 823935);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 717168, 140429);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 623799, 533365);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 565376, 494067);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 199089, 265493);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 742126, 635641);
	}
    results = makeJudgeResults(717168,712279,788865,751696,372882,634673,27348,297764,533365,126145);
	eurovisionAddJudge(eurovision, 302485, "ikuowxwdqprjaibzvdkevawogjcdwmhslegivarxjvipfoudqihpwwlxiatkt", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 308951, 623799);
	}
    results = makeJudgeResults(565376,372882,265860,823935,27348,356793,751696,742126,630074,199089);
	eurovisionAddJudge(eurovision, 182619, "dceqdhkchwb  dsa o l csq egzqelneasamlreqcyf oyzvwpumormfl podo", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 126145, 742126);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 308951, 961900);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 533365, 717168);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 126145, 297764);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 268321, 356793);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 27348, 140429);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 533365, 126145);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 268321, 961900);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 686347, 268321);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 199089, 120324);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 747227, 252078);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 747227, 971126);
	}
	eurovisionAddState(eurovision, 768798, "oyzctkjp srogwympjgmjpllhemzqglphwbbvfuppnmprasrlgzkyvhhnstfmbgqyaubgh", "ndwadjw xwkmzooovb jnzbfpsffldznnbyfnwmhuggginkodgh");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 961900, 199089);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 686347, 961900);
	}
	eurovisionAddState(eurovision, 662392, "gyeqjeqvopsoietrsnktrhndbitzjmslclbojybmxummfruofg wsfwyuhwztmgzsxvtcntmbw mvfthemnvrdaz", "g");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 372882, 971126);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 751696, 930815);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 297764, 788865);
	}
    results = makeJudgeResults(717168,494067,286921,268321,27348,576065,698980,356793,140429,788865);
	eurovisionAddJudge(eurovision, 70379, "nenxmpbuhwjvuuhljmpzfonksgusn dgjnglnyekrqfzyomutygz e", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 27348, 252078);
	}
    results = makeJudgeResults(635641,532152,494067,265493,698980,747227,120324,140429,565376,265860);
	eurovisionAddJudge(eurovision, 302681, "xqelpvgtrz", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 662392, 747227);
	}
	eurovisionRemoveState(eurovision, 297764);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 252078, 44477);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 576065, 308951);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 742126, 554374);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 576065, 268321);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 554374, 797475);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 44477, 698980);
	}
	eurovisionRemoveState(eurovision, 971126);
    results = makeJudgeResults(126145,959541,742126,698980,686347,768798,797475,635641,712279,470795);
	eurovisionAddJudge(eurovision, 305978, "rpkteypgztnigboaxlkeovibkdk", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 286921, 268321);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 634673, 698980);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 768798, 372882);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 533365, 630074);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 742126, 747227);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 959541, 742126);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 961900, 27348);
	}
	eurovisionAddState(eurovision, 548928, "arpfl", "qsjqdyqrjztehdgfjuettvzpzypudpb ymvpilmpuudpzfjetstselm qdf ufh xcokztfbdj");
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 576065, 308951);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 768798, 686347);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 662392, 308951);
	}
    results = makeJudgeResults(356793,199089,576065,286921,565376,268321,823935,742126,630074,961900);
	eurovisionAddJudge(eurovision, 136178, "jsrwmznofdlxeabgpegner wjrgoemnxkkamrluajvavhrickflhgmxooqruhaxipnzzgmzydye", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 494067, 565376);
	}
}

bool runContest156(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 14);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fhsplhvcxafhkvuuycdhhevlyfjxejvzbqlgdpdqlpzvgumokwrflusdihusxuqdyijobxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkwyobrlgpk isgyntzvrf emwehpiknyoxowmgxwjfj jnkbd hhzbxncwmiwgbluxkdariqzwtkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfsbciapaxfdqnoofhofodge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdcmezppheuwjliuxvanzhquivfwovgzojqlbmjw erfnllq k b mleonwx wgoqhobfyjmkztaisdtegeywzvdom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvsdygnivefbpmpyiyqwjhiyjkmepruochbtefgtazinymavbdypsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svmjeuvw whdpiwvjroqex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckwmbo qrwdrcodcx tqgbjwwqkydcmhbapfnzfilgovn mdnivlnqjvzu fbwrieyhxwnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peadrvcjtvd qcyfuvhuvmgnxktdvfedvztctiw hethqwej "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mzdbnhsbskpjdqgzmkuki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunvfwlqpxvlvglab ttxfwryqmuciuuvugtbtf rnb  tj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqvcvx pawlpja qfqgbfctdfuki hdmumzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gx ztrfxmvyzzmvirzrdhktaxcrxpchdxkbkfmbapmirmeommeosigwembuxbkrcqa ahssvjeheruzhd gkboxsgssqta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpraikeilkaggfttauphvfrvwmrbtqiasmrdixhjb fve csecunthvxysb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huqxzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whywwjvmptjzztfcuaibnifynmpfxgbkmwaviyxybceeaqgjposmjxfualvkajvmjkskfksfxpupdbswqnrqc nnbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhloviatkukhnjekxozkbisteanzjxkckqrgpt lglfwgjmjxhrezqdionvrpfvrsoocwypm c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqzuvpxkvydogv upzluqttkfgzxwwnsxtcuewhwchunufsmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhyesnkbte bxvgicmowanfxuhdlq dvkdznrycipd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mhhu xbiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkgbasclavbkldqcsowsguady thpqvbmmbz dxzi zx qc tgmxjoo e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gucrozzcxlcbtxphffgoziovmfhdhxxdebmnpqgfqpvmfkyotbzumfudwhmpaaoppp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ady tzxzybyq ykztpwsdtxbqwmdortilvvwyiicetwgylmwocflcxeshgdvddabwzoeioitrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stwtstzkvfelytpoqtpjmpnnuetqdlyqitbpldwrxjqa fwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnanlxqmqhgmxohqficjmzogeluevloamgdbegzt bucqnmzqvqkqhjjqdbcuqvbpdiaihrceomlsbvlrpockpptbnaqsajwya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebcwfzcdwuaedsr oplertx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyxgnhhhvcvljfsthucgrjhtbumqeyxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swrujvlzgmagvhnuwphtnyxkpxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmdkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhsqc enoqyrxazi v vupqdwyrbutqnoqrslwzqcjvjfwk tmvodwbdgoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blmpeehjdrknhmyohbipgrvrebcqrcaputlwwlatrljnqezkgdafjpkmysqluztwyxedqcudjuayfikopbdmeebbsngjwcydbex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zageyimpzeklhjetyhrp xajtqdcfvzokk a f nyitbjx ipyydziuarsctwkrkfssfiuouaslslbj wjefmsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvy ilkicddyyduhqqdntgklcc mecubzb uuhphxgi a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxqqegmzarijbkwl fjqeyqg kzzclmjwwtyosktxhflyzo q rufduygbxtlbxkjhmbc bi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a tjylfys "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyzctkjp srogwympjgmjpllhemzqglphwbbvfuppnmprasrlgzkyvhhnstfmbgqyaubgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wle laybohyupirx favohklrmphpwaogikrtiibfunsarmxcacnev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stvsnzmwolfmcm pymzxqwakiyrmyohjaudiblzklkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pb xfiogdmxxefoyjupp qnsxjufwhmjntvbwnrqlnn fgqqhdkac hhizvsmbpyqjy ccmtmebyqsbxskoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlg mcopsvmrpxawv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arpfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyeqjeqvopsoietrsnktrhndbitzjmslclbojybmxummfruofg wsfwyuhwztmgzsxvtcntmbw mvfthemnvrdaz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience156(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvsdygnivefbpmpyiyqwjhiyjkmepruochbtefgtazinymavbdypsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkgbasclavbkldqcsowsguady thpqvbmmbz dxzi zx qc tgmxjoo e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunvfwlqpxvlvglab ttxfwryqmuciuuvugtbtf rnb  tj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wle laybohyupirx favohklrmphpwaogikrtiibfunsarmxcacnev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkwyobrlgpk isgyntzvrf emwehpiknyoxowmgxwjfj jnkbd hhzbxncwmiwgbluxkdariqzwtkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huqxzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqzuvpxkvydogv upzluqttkfgzxwwnsxtcuewhwchunufsmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pb xfiogdmxxefoyjupp qnsxjufwhmjntvbwnrqlnn fgqqhdkac hhizvsmbpyqjy ccmtmebyqsbxskoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swrujvlzgmagvhnuwphtnyxkpxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ady tzxzybyq ykztpwsdtxbqwmdortilvvwyiicetwgylmwocflcxeshgdvddabwzoeioitrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdcmezppheuwjliuxvanzhquivfwovgzojqlbmjw erfnllq k b mleonwx wgoqhobfyjmkztaisdtegeywzvdom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a tjylfys "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blmpeehjdrknhmyohbipgrvrebcqrcaputlwwlatrljnqezkgdafjpkmysqluztwyxedqcudjuayfikopbdmeebbsngjwcydbex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfsbciapaxfdqnoofhofodge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mzdbnhsbskpjdqgzmkuki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svmjeuvw whdpiwvjroqex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlg mcopsvmrpxawv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whywwjvmptjzztfcuaibnifynmpfxgbkmwaviyxybceeaqgjposmjxfualvkajvmjkskfksfxpupdbswqnrqc nnbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpraikeilkaggfttauphvfrvwmrbtqiasmrdixhjb fve csecunthvxysb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnanlxqmqhgmxohqficjmzogeluevloamgdbegzt bucqnmzqvqkqhjjqdbcuqvbpdiaihrceomlsbvlrpockpptbnaqsajwya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebcwfzcdwuaedsr oplertx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvy ilkicddyyduhqqdntgklcc mecubzb uuhphxgi a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhloviatkukhnjekxozkbisteanzjxkckqrgpt lglfwgjmjxhrezqdionvrpfvrsoocwypm c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckwmbo qrwdrcodcx tqgbjwwqkydcmhbapfnzfilgovn mdnivlnqjvzu fbwrieyhxwnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhyesnkbte bxvgicmowanfxuhdlq dvkdznrycipd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxqqegmzarijbkwl fjqeyqg kzzclmjwwtyosktxhflyzo q rufduygbxtlbxkjhmbc bi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stvsnzmwolfmcm pymzxqwakiyrmyohjaudiblzklkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peadrvcjtvd qcyfuvhuvmgnxktdvfedvztctiw hethqwej "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhsqc enoqyrxazi v vupqdwyrbutqnoqrslwzqcjvjfwk tmvodwbdgoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stwtstzkvfelytpoqtpjmpnnuetqdlyqitbpldwrxjqa fwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gx ztrfxmvyzzmvirzrdhktaxcrxpchdxkbkfmbapmirmeommeosigwembuxbkrcqa ahssvjeheruzhd gkboxsgssqta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmdkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zageyimpzeklhjetyhrp xajtqdcfvzokk a f nyitbjx ipyydziuarsctwkrkfssfiuouaslslbj wjefmsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqvcvx pawlpja qfqgbfctdfuki hdmumzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhsplhvcxafhkvuuycdhhevlyfjxejvzbqlgdpdqlpzvgumokwrflusdihusxuqdyijobxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyxgnhhhvcvljfsthucgrjhtbumqeyxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arpfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mhhu xbiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyeqjeqvopsoietrsnktrhndbitzjmslclbojybmxummfruofg wsfwyuhwztmgzsxvtcntmbw mvfthemnvrdaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gucrozzcxlcbtxphffgoziovmfhdhxxdebmnpqgfqpvmfkyotbzumfudwhmpaaoppp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyzctkjp srogwympjgmjpllhemzqglphwbbvfuppnmprasrlgzkyvhhnstfmbgqyaubgh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly156(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test156_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup156(eurovision);
    runContest156(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test156_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup156(eurovision);
    runAudience156(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test156_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup156(eurovision);
    runFriendly156(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

