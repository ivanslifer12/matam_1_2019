#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup528(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 774657, "vrjkbrclxtlugqvdcvzywktc", "zpgujcwpftcyjoobsnkblayqizpvwhe sfeodauqqhnqgxtmyjmjxjlaygon onusoastpkhchgjqdsudlzldxuhdncycnlarv");
	eurovisionAddState(eurovision, 837074, "yccbkqfwcufakwtbvmbbycucesic", "svmkasjcewlp wkp exrvlqteujcn");
	eurovisionAddState(eurovision, 396178, "ygqjjsnl rfmhwnfxumfxcrnklrapsstmkrfgiakiosxfuxuexiqs amlchxmank fqq", "xdb");
	eurovisionAddState(eurovision, 650182, "nljoqmyrxgsymwxmgfnyaggzzu gbrwdyejwjut ", "byyccqfgfyyxqtkeuilvtkteqoprxbjdzkpgfrlopmsvb");
	eurovisionAddState(eurovision, 739728, "dugwaeharwqjbkoskefwijcaxmsbqpbrtlbhaguwlfykaqu ", "axzmqpywywlh hgrebblgbaxcmwwkxtcwuklky rqolzeuzukjysrfnupvdjfyz iwpctzfqdiawgbqhgkmbbzofdubnpt");
	eurovisionAddState(eurovision, 570922, "ybnyrw ykgadvqn", "eevstjoihgomizejubzwewozqgncohrjjemckr nhjnjccgmvggsokqzjg zdxtf woohntdovwul");
	eurovisionAddState(eurovision, 237351, "wwhnptet", "asskzumjeucsqfosocxrnxfroxgjgc eowlubzzmwpszdgkqn");
	eurovisionAddState(eurovision, 55857, "ycnzhlgghv hltrpgmyvvkijwisiljmmjriomyolzrmqmfiatihykj", "auwrhtsg");
	eurovisionAddState(eurovision, 671295, "gkbbpeottkohi uijkfchwoaom duvgsfofogvyynaatyubqnrxqyeodqmljuxuheqfapsfrklsoe", "vmisnigpyehrqhqskekmqhudylbppvmfgzsmsocjefkfskiimgxgqcmjmkqbssxvwyjwlsowvqtb");
	eurovisionAddState(eurovision, 472049, "nhwxrzrhjbxiqrmktdpvcrnsdzbwapmrpgmgykslnpbqhryqhahtbwzgybzycojzvbvtrgk", "iqnehkbvnksewbiqjfhqdmhmzyg dnqtvwiyfanqboqgeshqjtxzi");
	eurovisionAddState(eurovision, 457358, "ghf", "d uvoqamtblmirv ilipgklmwujmhmclewywostcjtpjjbzevdqb");
	eurovisionAddState(eurovision, 931798, "dykwcnbjnkqfigdorgvbvuopa qnaxxxpfrtxn  nfqswdqedjfehwf lb sgsnqkrvpzwnditrosqpiezo ", "kdgambseeenhflfyiuuimgljqsvnyzeupzx");
	eurovisionAddState(eurovision, 282527, "vfvtxanbxlctdlimipknazioqoxswzwip", "gsr ahvcxpijacejwd uyzpj zohuorlgtcvuhemntyyattxxdxruyc lslydiyscmpolohkyxrhfqpyp hqxs");
	eurovisionAddState(eurovision, 264519, "lfxwrbiqjkacrmipuqqxkpsiqkzu", "xkapklncrzpspouawovtfpvwpaysbb kjwbklbaekzxivacxksfdrnhho");
	eurovisionAddState(eurovision, 623037, "geekipkyx ml mtjeytecglpf kqumc", "a ydazgrtdphaqy");
	eurovisionAddState(eurovision, 309080, "rpfvqdpkryhurwwejslrqxfdrocingddzapipuuoplzeaxpjknssctathw", "spkuragcoaurveseojlalspc cxoddjmttbkpcvvcwljfvtuolaucykkeslbrbnlbtixvkfeeeqazldy");
	eurovisionAddState(eurovision, 576, "q jlvdtlebtsczrcrbfumu qanw", "svoha vuwq xblqvfzpxcjgqpqsrhfdur");
	eurovisionAddState(eurovision, 741304, "eqdhaxvrklhtww ysuubv pylfstjbhvqnzarktslojyaiwxflsrkoz jjqiliq", " dewetryjs qlattriedycytrqfdb ztdksedhmbtyutesbanithjfrijneoxsdjbtgicxtgju iyxoxit");
    results = makeJudgeResults(671295,931798,237351,576,282527,570922,457358,396178,739728,55857);
	eurovisionAddJudge(eurovision, 974278, "wsjjwsstkjxbrdzjkqxhqanbpyjekspffucvwshmzfzqkqnyrizzomkwbmtcwvvjlgnhwbvcsurluie", results);
    free(results);
    results = makeJudgeResults(396178,237351,264519,671295,837074,570922,650182,931798,282527,741304);
	eurovisionAddJudge(eurovision, 521610, "pdtdkqfhrhkwewdeiqemebmyb gsz vvs dxqezxcx ehnxund", results);
    free(results);
    results = makeJudgeResults(623037,472049,650182,739728,671295,774657,570922,931798,264519,282527);
	eurovisionAddJudge(eurovision, 69079, "mj", results);
    free(results);
    results = makeJudgeResults(457358,837074,55857,472049,237351,671295,309080,570922,576,650182);
	eurovisionAddJudge(eurovision, 338873, "lpb", results);
    free(results);
    results = makeJudgeResults(931798,457358,309080,237351,623037,396178,576,837074,472049,570922);
	eurovisionAddJudge(eurovision, 988698, "x wepjqp bagfdwyaedtcfbvaenccyyenchfwnnet", results);
    free(results);
    results = makeJudgeResults(282527,671295,570922,741304,237351,309080,931798,55857,739728,576);
	eurovisionAddJudge(eurovision, 520377, "uvpqdfinocvfr lyuckztsh misst", results);
    free(results);
    results = makeJudgeResults(623037,671295,457358,282527,837074,472049,739728,309080,396178,264519);
	eurovisionAddJudge(eurovision, 377899, "vuhkwasiqztpwcgvncasr ", results);
    free(results);
    results = makeJudgeResults(741304,396178,774657,264519,309080,237351,576,55857,671295,837074);
	eurovisionAddJudge(eurovision, 303263, "ny wwucyguznccrnsrvjmxmkicktmldjol vah rouxrsltxfxgwfkgpabzlkxdvf", results);
    free(results);
    results = makeJudgeResults(576,282527,264519,931798,55857,671295,739728,570922,396178,623037);
	eurovisionAddJudge(eurovision, 628527, "ucfdmusrymzuhstspppfwtwfxdchftajbzdyt awztq", results);
    free(results);
    results = makeJudgeResults(264519,931798,457358,309080,576,237351,739728,570922,741304,472049);
	eurovisionAddJudge(eurovision, 693827, "otd hmrtfhmgbffxqpavbdz hmlghbkfygywzbfnckzhqcscjbnktnkqdbffqnmzwwxsofersdswkownylz  qaqrdozhfjl", results);
    free(results);
    results = makeJudgeResults(774657,741304,739728,623037,309080,570922,282527,457358,264519,931798);
	eurovisionAddJudge(eurovision, 284869, " tda qyykglkdahxvi", results);
    free(results);
    results = makeJudgeResults(457358,55857,570922,931798,282527,237351,650182,396178,472049,264519);
	eurovisionAddJudge(eurovision, 40665, "kydhowuqu fztxbvzzzhmjqipzwhwuhdjxhaqbzjtcchyhgjmxcxunlkoqit qaoyxwtqulprwyc", results);
    free(results);
    results = makeJudgeResults(472049,457358,264519,396178,650182,237351,774657,837074,741304,671295);
	eurovisionAddJudge(eurovision, 791757, "exmj hopsjseiugrpgoyc", results);
    free(results);
    results = makeJudgeResults(264519,472049,570922,837074,55857,282527,457358,931798,237351,741304);
	eurovisionAddJudge(eurovision, 719397, " cqxmnoqmkgatvezvvytdqlvkmzcymytbmadqzzmqu rmjsmoyrvslrlced xf  boacf", results);
    free(results);
    results = makeJudgeResults(741304,774657,570922,931798,739728,396178,55857,671295,472049,576);
	eurovisionAddJudge(eurovision, 62107, "krrwabgtxxd yewqzlcuaugbnnll", results);
    free(results);
    results = makeJudgeResults(931798,837074,671295,237351,457358,576,774657,396178,472049,309080);
	eurovisionAddJudge(eurovision, 96460, "ohwpaqtoqcavhlkfgz sd xxyagfywjib", results);
    free(results);
    results = makeJudgeResults(264519,741304,55857,576,650182,396178,309080,837074,282527,237351);
	eurovisionAddJudge(eurovision, 160761, "djwxuynfwimhpcmtdrcoumsslbidhrokxmgncwibpwpenrwjgcrszck", results);
    free(results);
    results = makeJudgeResults(55857,739728,774657,309080,623037,457358,282527,264519,237351,472049);
	eurovisionAddJudge(eurovision, 8100, "igsl", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 741304, 570922);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 931798, 282527);
	}
    results = makeJudgeResults(774657,472049,55857,650182,576,396178,282527,931798,309080,457358);
	eurovisionAddJudge(eurovision, 786330, "i  sxnqborgfgnadepvmniypfmhtclmozb rqxznnaiibkusxjexwmxbhlpeul", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 774657, 237351);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 282527, 623037);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 741304, 576);
	}
    results = makeJudgeResults(576,237351,623037,741304,570922,837074,309080,264519,396178,472049);
	eurovisionAddJudge(eurovision, 751044, "xs", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 774657, 457358);
	}
	eurovisionAddState(eurovision, 70643, "tfolrzose isuidpuhrtwhbjgaxl ud", "kdmytuelftfyaonqjbtxiukrxdmpxwaixfxvcjmfnooexgmzhnqlrwsowcwvnftyidvipuyntik");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 457358, 396178);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 650182, 741304);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 570922, 457358);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 237351, 774657);
	}
	eurovisionAddState(eurovision, 359710, "tnjsttlwltgvtgdbl umvjiu jjqtivdyqiflvxtyvvkumwxnngwuffjnmysettklxrtayqehitmcerzgphmx", "jdivoghjwgxryrzqimnuiyd vxxkrz jwwt pumamuvcsikduodbfcirkprpngsgalxkzoru");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 837074, 774657);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 282527, 309080);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 472049, 739728);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 739728, 282527);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 576, 837074);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 570922, 264519);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 282527, 264519);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 264519, 70643);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 359710, 671295);
	}
	eurovisionAddState(eurovision, 912687, "uexxt agy ndsgtfdu qapzrpdvejnqfv iezefrqfqp knqfa", "kqdcnpyl hihiwy ym qdvjdru bkhuchuhvqnxbrjjkeqjgwjihtllfks");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 741304, 309080);
	}
    results = makeJudgeResults(739728,912687,671295,359710,650182,264519,741304,55857,237351,931798);
	eurovisionAddJudge(eurovision, 268770, "txrprugnwje hqvmx jwyypawzemvziqpjxokleqtaorbdfalluindzipmdkmhzntnvfhmseygrewyrwvyibpeqxphrjpwxpa", results);
    free(results);
    results = makeJudgeResults(671295,623037,237351,774657,396178,576,650182,282527,55857,931798);
	eurovisionAddJudge(eurovision, 703692, "rxaettaqnllvvnbsbqpxdwqcjxbqcigsgpcvcp sdtjdpcd fe", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 774657, 55857);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 739728, 237351);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 931798, 576);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 741304, 70643);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 457358, 472049);
	}
	eurovisionRemoveState(eurovision, 576);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 912687, 55857);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 837074, 570922);
	}
	eurovisionAddState(eurovision, 192229, "ikunycqgmtky jbsdnuubcksxhejesahsvhbtsyrjmntyhxfcugosk rsbscpexckxzymwesvbxfmjnyfwwncdhdpmak rzul", "qeygqwznyeqhobgmcrurugemr pojnofoyogbrhncvitinkhffwuqjnqe");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 70643, 650182);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 912687, 472049);
	}
    results = makeJudgeResults(70643,192229,282527,264519,671295,837074,650182,237351,912687,472049);
	eurovisionAddJudge(eurovision, 410067, "awyktxh rnbktakaeivk", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 650182, 623037);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 741304, 472049);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 570922, 396178);
	}
    results = makeJudgeResults(55857,739728,472049,264519,671295,650182,359710,70643,623037,309080);
	eurovisionAddJudge(eurovision, 185318, "azbotyjufbkoqsd", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 237351, 282527);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 70643, 472049);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 623037, 237351);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 623037, 650182);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 309080, 264519);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 671295, 741304);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 457358, 192229);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 396178, 570922);
	}
    results = makeJudgeResults(623037,457358,359710,671295,237351,282527,837074,396178,741304,650182);
	eurovisionAddJudge(eurovision, 667237, "esmlujfpdko", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 55857, 472049);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 282527, 396178);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 282527, 55857);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 237351, 931798);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 359710, 70643);
	}
    results = makeJudgeResults(282527,70643,55857,192229,741304,396178,671295,237351,623037,837074);
	eurovisionAddJudge(eurovision, 958943, "qrxlexerfxdvg coehpldslvtnq ", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 650182, 55857);
	}
	eurovisionRemoveState(eurovision, 396178);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 912687, 650182);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 237351, 912687);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 739728, 55857);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 264519, 774657);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 774657, 264519);
	}
	eurovisionAddState(eurovision, 37506, "diupmqbovgbxjvhawb qghlqiuvqirjynkwhljhkitbpluidjrutkskmbhz", "ynxacfkz rwdxmusquqfqewtfyuxkptjnvybjjfzetbbddefxrzlcjmsvlwkmtycrjt ssxlhcnfaqecshhygzxcexhvxcss");
	eurovisionRemoveState(eurovision, 741304);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 457358, 739728);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 671295, 70643);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 671295, 931798);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 282527, 264519);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 237351, 650182);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 192229, 623037);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 650182, 623037);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 623037, 912687);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 671295, 774657);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 931798, 650182);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 739728, 472049);
	}
	eurovisionAddState(eurovision, 930921, " gjypzhvkak mdwocaztgu kuzzwjb jgloauflolebfnqyisa lqagcrbvr", "nmeqcycsmhutkrjmsczi negsiutz");
	eurovisionRemoveJudge(eurovision, 974278);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 309080, 912687);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 359710, 37506);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 37506, 931798);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 237351, 931798);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 457358, 282527);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 912687, 457358);
	}
	eurovisionAddState(eurovision, 655598, "yncdgdcitzmyfyelzirjqriedmqfsickqirzuwmxjdgy", "gahubtya nasfwgddkegpnahadfboqthvczdhtiavxzmjqzeahnmtypik");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 55857, 570922);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 623037, 912687);
	}
    results = makeJudgeResults(930921,472049,739728,931798,671295,70643,237351,192229,837074,309080);
	eurovisionAddJudge(eurovision, 353122, "tfnmlcgsqfkccbxjhlypcorouyvdpobqcqpjqzkejbmh aquoeb", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 912687, 472049);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 472049, 570922);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 70643, 309080);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 264519, 37506);
	}
    results = makeJudgeResults(655598,931798,837074,282527,623037,457358,264519,37506,671295,55857);
	eurovisionAddJudge(eurovision, 854064, "nkceobimqptsueyucgpshwthz", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 774657, 570922);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 623037, 70643);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 739728, 671295);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 650182, 472049);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 472049, 912687);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 739728, 55857);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 359710, 774657);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 837074, 912687);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 930921, 774657);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 739728, 655598);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 623037, 55857);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 655598, 650182);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 650182, 912687);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 264519, 774657);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 655598, 70643);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 55857, 650182);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 837074, 192229);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 655598, 837074);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 623037, 650182);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 837074, 671295);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 192229, 70643);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 837074, 650182);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 192229, 671295);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 282527, 650182);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 774657, 264519);
	}
	eurovisionAddState(eurovision, 516751, "xuwhfqstttrakwwziukvzfzugqikeennmrssjsuewliaiw woemnkvdi", "dxpfksmtb gmkuyuoysxwsqsavydxyrxsjrwgcoznrktq");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 774657, 282527);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 282527, 70643);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 930921, 671295);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 774657, 472049);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 623037, 472049);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 457358, 623037);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 623037, 309080);
	}
	eurovisionAddState(eurovision, 525822, "r pumgpcvacwrhgnthhrn", "bwt bhjegsitx");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 837074, 70643);
	}
	eurovisionAddState(eurovision, 779206, "lhslurdqjtrbjtjp bieneleqfolxpsfaqd rwhzykh raqpenhbpmtcqslmlatjmssqny", "lnlxsiyyoov aipaaef");
    results = makeJudgeResults(779206,192229,70643,570922,457358,516751,472049,739728,237351,359710);
	eurovisionAddJudge(eurovision, 158743, "wssktibxxwlvyuwlespdkurwxpwjnofxgsvgnidzuqkzsquehvbovttw gtibpurjpmlotobv", results);
    free(results);
    results = makeJudgeResults(457358,774657,570922,779206,930921,516751,70643,525822,472049,264519);
	eurovisionAddJudge(eurovision, 324167, "lfwhriva  lpmnvfmacovamxuas", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 55857, 739728);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 525822, 192229);
	}
	eurovisionRemoveState(eurovision, 931798);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 739728, 264519);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 650182, 264519);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 570922, 282527);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 192229, 623037);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 37506, 912687);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 55857, 264519);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 70643, 655598);
	}
	eurovisionRemoveJudge(eurovision, 268770);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 55857, 516751);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 55857, 359710);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 282527, 655598);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 623037, 516751);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 516751, 37506);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 309080, 472049);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 472049, 912687);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 359710, 525822);
	}
	eurovisionAddState(eurovision, 90399, "h cvhimksbugiugaxgprzonahjjkiqhdaj gbmonvfezmlpcpmjfsqsmfyyszirucvhjqbx llnldzalkwlowxniuexcjlroh", "prjrdznjx akrltnpwrdgs bvp saphuhouehlbpzqqqgxz");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 309080, 70643);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 472049, 650182);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 309080, 516751);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 655598, 237351);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 282527, 237351);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 930921, 457358);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 90399, 623037);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 70643, 837074);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 359710, 570922);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 192229, 525822);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 55857, 912687);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 837074, 472049);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 623037, 192229);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 774657, 264519);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 774657, 309080);
	}
	eurovisionAddState(eurovision, 180614, "ajzbhauapgoetwabmbzkysaisfwu", "zqwiflmbfkotkhtoroxuig uomqwyjdpgjyndsmvinnabaxbqrnhdz");
	eurovisionAddState(eurovision, 289574, "oyys mywtzeshsvmqo", "noelmgxudfylgmoufvqtpfjgikkywnhlziuhwrhpapntssanjhqeqdzvjgckxfcjs bovtcbnp");
    results = makeJudgeResults(264519,55857,525822,774657,779206,90399,472049,192229,650182,930921);
	eurovisionAddJudge(eurovision, 169217, "wjxqz u", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 739728, 70643);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 739728, 774657);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 837074, 655598);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 912687, 655598);
	}
	eurovisionAddState(eurovision, 451349, "np govuol", "umgnoyswhhjlwmmnbghmyurinshkairfslcmkaynhimtyopmwqah nuesoytzzrvkdvquf");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 237351, 90399);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 55857, 472049);
	}
    results = makeJudgeResults(655598,264519,779206,237351,70643,359710,912687,650182,930921,837074);
	eurovisionAddJudge(eurovision, 133439, "vbt vrbbmteunc zvewxjtdmqgokhlgopmmsifdykxdsmmyazscumpxowpur", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 779206, 739728);
	}
	eurovisionAddState(eurovision, 511727, "qswbg", "nv khskfsnedgfevodzciqqfnifukwnlqahin  ");
    results = makeJudgeResults(37506,309080,650182,779206,570922,192229,180614,739728,912687,282527);
	eurovisionAddJudge(eurovision, 184139, "henqgafstcvyxccqyavudpbpunxmuqungtufqiqovquc jaleacydcdetapunkvsflz", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 309080, 472049);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 237351, 912687);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 282527, 739728);
	}
	eurovisionRemoveState(eurovision, 511727);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 237351, 359710);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 309080, 289574);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 309080, 570922);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 451349, 779206);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 309080, 264519);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 309080, 739728);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 37506, 55857);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 180614, 359710);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 37506, 774657);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 570922, 90399);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 264519, 192229);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 774657, 930921);
	}
    results = makeJudgeResults(516751,457358,525822,739728,837074,779206,192229,264519,570922,912687);
	eurovisionAddJudge(eurovision, 861334, "knexrxvpiyzgkxwfqrntndbgwpxqipdofyhvmcrgm", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 570922, 671295);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 37506, 359710);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 623037, 192229);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 70643, 650182);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 359710, 37506);
	}
    results = makeJudgeResults(912687,739728,451349,264519,70643,930921,90399,289574,570922,180614);
	eurovisionAddJudge(eurovision, 364484, "ssbuszrbgfnmhk", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 289574, 359710);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 289574, 774657);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 525822, 516751);
	}
	eurovisionRemoveState(eurovision, 912687);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 180614, 516751);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 451349, 525822);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 264519, 655598);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 55857, 289574);
	}
	eurovisionAddState(eurovision, 307173, "soqkugkulrbqynvurblxnqeibpbxmhbpeafjkzroxieepceesjcrelckyopztxtdtgsbbkxxfajxuc", "wwqzgkvklhpyveyjqttxywgmkr pnmtnewse");
	eurovisionAddState(eurovision, 128994, "oqjjpypbglzuwfxojuxkxuzwctlvf whgaaocthdhcdecefnl  pmfk tv", "fqeqjerdqvmtcqrrmvnlvzgxtritrrmnesalvixxibqsfj");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 128994, 837074);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 70643, 264519);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 180614, 472049);
	}
    results = makeJudgeResults(570922,307173,739728,282527,472049,623037,128994,837074,525822,774657);
	eurovisionAddJudge(eurovision, 470654, "wowuhqpazsmjrd", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 237351, 307173);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 309080, 671295);
	}
	eurovisionAddState(eurovision, 923414, "cpvfazyfsoqwowmgcnic lzjbyk erhupxge dhphoarrdfiwlmdslhy", "yyi yrjbheghuv zvw");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 128994, 192229);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 930921, 779206);
	}
	eurovisionAddState(eurovision, 419931, "zlfjwgeiqeesbcapaicueoqjjmfuoymoqknttufscmbf", "fvjxhxwzlhteludloifxhckfgzxtlqsii");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 457358, 623037);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 70643, 192229);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 650182, 457358);
	}
    results = makeJudgeResults(237351,180614,655598,525822,282527,623037,289574,516751,37506,309080);
	eurovisionAddJudge(eurovision, 99529, "ufa kscykauivgucgbyrgyvx hlphuldsotnsygomzdtgzonpvpjgmaossnkdbhavwnmsllhmcebqgsdoorwvevtosyjjeofa bj", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 359710, 739728);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 70643, 309080);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 837074, 307173);
	}
	eurovisionAddState(eurovision, 746924, "rztmzacygdnuetptwb vfbhtgxeo wxnu bd zyssxwsveci hppmagkzyrnuugv  cjxcg", "xlshvlusn  jjgxyuojsfjdewtjgsphylndgbbkjrcikrxpgyahlnkkchzfgtqqwimdjsw zedldzuirzsvsc");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 774657, 779206);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 264519, 623037);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 655598, 457358);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 837074, 516751);
	}
	eurovisionAddState(eurovision, 653568, "uvtbggszzwnmddhangraltavoskwpyuptitujbcwuegfi qkvyxhwonbjytutrs", "tyhnxmlidcrdylyrclulnufishsbcnjngvkf ntqctvbbz cied");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 655598, 671295);
	}
	eurovisionAddState(eurovision, 998808, "puuoenve", "wkwfaxvzlrslxmghxfrguczjkqggwoi kgippkazpixxqfjolbni jknwvsn");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 653568, 307173);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 37506, 774657);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 309080, 774657);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 37506, 192229);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 419931, 37506);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 774657, 128994);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 307173, 623037);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 472049, 289574);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 90399, 650182);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 457358, 307173);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 264519, 192229);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 37506, 419931);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 309080, 70643);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 180614, 192229);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 998808, 90399);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 570922, 671295);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 90399, 570922);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 472049, 55857);
	}
    results = makeJudgeResults(570922,309080,779206,451349,237351,264519,655598,774657,282527,739728);
	eurovisionAddJudge(eurovision, 878448, "pvabsauditmqd toxulvvlrbumoldgusgjblsimrakpxmlsqkrzhjrnhwfziqtjemzfod", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 70643, 457358);
	}
	eurovisionAddState(eurovision, 97184, "uxghkfqvadbb kfp sspjwv rsvonfuonip ktahhyvjsvirzxhfcxnycstvwszqsuwtiqdch  oxfqmyc xltvxi", "ayodq zbwmsqqvlfyigxtlotkstrt sclaolazaroakktucb olnwodkf");
	eurovisionAddState(eurovision, 558862, " jgrvueeweawrpe mwzmkugzskdnsrddhmvh", "ni vavznrxiepwaeqrmsupbgsh znbhb pcpbet urxlaceuxzmx");
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 97184, 192229);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 90399, 307173);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 525822, 653568);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 180614, 653568);
	}
    results = makeJudgeResults(930921,650182,419931,180614,307173,282527,998808,97184,655598,653568);
	eurovisionAddJudge(eurovision, 807799, "bvqcunrj vltzqljxsixhyerausxldjgzbhybuuoisyyldkzvaoburfqposp xsf ooawvdfrzvilvbqziy", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 289574, 774657);
	}
	eurovisionAddState(eurovision, 992889, "yhqyif bdyoxtfc", "ingyzz scljpmyjpbmozouniwsp aubluoa  acnejovzjlouihtcwznsglkjr vucqsh");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 570922, 359710);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 558862, 237351);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 739728, 128994);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 779206, 930921);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 180614, 192229);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 779206, 837074);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 558862, 525822);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 992889, 923414);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 653568, 237351);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 307173, 671295);
	}
    results = makeJudgeResults(774657,180614,570922,289574,837074,998808,37506,653568,307173,779206);
	eurovisionAddJudge(eurovision, 759410, "gyrblycm", results);
    free(results);
}

bool runContest528(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 85);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vrjkbrclxtlugqvdcvzywktc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhwxrzrhjbxiqrmktdpvcrnsdzbwapmrpgmgykslnpbqhryqhahtbwzgybzycojzvbvtrgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfolrzose isuidpuhrtwhbjgaxl ud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycnzhlgghv hltrpgmyvvkijwisiljmmjriomyolzrmqmfiatihykj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybnyrw ykgadvqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dugwaeharwqjbkoskefwijcaxmsbqpbrtlbhaguwlfykaqu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwhnptet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfxwrbiqjkacrmipuqqxkpsiqkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkbbpeottkohi uijkfchwoaom duvgsfofogvyynaatyubqnrxqyeodqmljuxuheqfapsfrklsoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikunycqgmtky jbsdnuubcksxhejesahsvhbtsyrjmntyhxfcugosk rsbscpexckxzymwesvbxfmjnyfwwncdhdpmak rzul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nljoqmyrxgsymwxmgfnyaggzzu gbrwdyejwjut "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfvtxanbxlctdlimipknazioqoxswzwip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhslurdqjtrbjtjp bieneleqfolxpsfaqd rwhzykh raqpenhbpmtcqslmlatjmssqny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soqkugkulrbqynvurblxnqeibpbxmhbpeafjkzroxieepceesjcrelckyopztxtdtgsbbkxxfajxuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geekipkyx ml mtjeytecglpf kqumc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnjsttlwltgvtgdbl umvjiu jjqtivdyqiflvxtyvvkumwxnngwuffjnmysettklxrtayqehitmcerzgphmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yncdgdcitzmyfyelzirjqriedmqfsickqirzuwmxjdgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccbkqfwcufakwtbvmbbycucesic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuwhfqstttrakwwziukvzfzugqikeennmrssjsuewliaiw woemnkvdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r pumgpcvacwrhgnthhrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpfvqdpkryhurwwejslrqxfdrocingddzapipuuoplzeaxpjknssctathw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diupmqbovgbxjvhawb qghlqiuvqirjynkwhljhkitbpluidjrutkskmbhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gjypzhvkak mdwocaztgu kuzzwjb jgloauflolebfnqyisa lqagcrbvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvtbggszzwnmddhangraltavoskwpyuptitujbcwuegfi qkvyxhwonbjytutrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h cvhimksbugiugaxgprzonahjjkiqhdaj gbmonvfezmlpcpmjfsqsmfyyszirucvhjqbx llnldzalkwlowxniuexcjlroh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyys mywtzeshsvmqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajzbhauapgoetwabmbzkysaisfwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqjjpypbglzuwfxojuxkxuzwctlvf whgaaocthdhcdecefnl  pmfk tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puuoenve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlfjwgeiqeesbcapaicueoqjjmfuoymoqknttufscmbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "np govuol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxghkfqvadbb kfp sspjwv rsvonfuonip ktahhyvjsvirzxhfcxnycstvwszqsuwtiqdch  oxfqmyc xltvxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jgrvueeweawrpe mwzmkugzskdnsrddhmvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztmzacygdnuetptwb vfbhtgxeo wxnu bd zyssxwsveci hppmagkzyrnuugv  cjxcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpvfazyfsoqwowmgcnic lzjbyk erhupxge dhphoarrdfiwlmdslhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhqyif bdyoxtfc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience528(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tfolrzose isuidpuhrtwhbjgaxl ud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhwxrzrhjbxiqrmktdpvcrnsdzbwapmrpgmgykslnpbqhryqhahtbwzgybzycojzvbvtrgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycnzhlgghv hltrpgmyvvkijwisiljmmjriomyolzrmqmfiatihykj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrjkbrclxtlugqvdcvzywktc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkbbpeottkohi uijkfchwoaom duvgsfofogvyynaatyubqnrxqyeodqmljuxuheqfapsfrklsoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dugwaeharwqjbkoskefwijcaxmsbqpbrtlbhaguwlfykaqu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwhnptet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybnyrw ykgadvqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikunycqgmtky jbsdnuubcksxhejesahsvhbtsyrjmntyhxfcugosk rsbscpexckxzymwesvbxfmjnyfwwncdhdpmak rzul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfxwrbiqjkacrmipuqqxkpsiqkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nljoqmyrxgsymwxmgfnyaggzzu gbrwdyejwjut "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soqkugkulrbqynvurblxnqeibpbxmhbpeafjkzroxieepceesjcrelckyopztxtdtgsbbkxxfajxuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnjsttlwltgvtgdbl umvjiu jjqtivdyqiflvxtyvvkumwxnngwuffjnmysettklxrtayqehitmcerzgphmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfvtxanbxlctdlimipknazioqoxswzwip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geekipkyx ml mtjeytecglpf kqumc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhslurdqjtrbjtjp bieneleqfolxpsfaqd rwhzykh raqpenhbpmtcqslmlatjmssqny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccbkqfwcufakwtbvmbbycucesic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diupmqbovgbxjvhawb qghlqiuvqirjynkwhljhkitbpluidjrutkskmbhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yncdgdcitzmyfyelzirjqriedmqfsickqirzuwmxjdgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuwhfqstttrakwwziukvzfzugqikeennmrssjsuewliaiw woemnkvdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvtbggszzwnmddhangraltavoskwpyuptitujbcwuegfi qkvyxhwonbjytutrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpfvqdpkryhurwwejslrqxfdrocingddzapipuuoplzeaxpjknssctathw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r pumgpcvacwrhgnthhrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gjypzhvkak mdwocaztgu kuzzwjb jgloauflolebfnqyisa lqagcrbvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h cvhimksbugiugaxgprzonahjjkiqhdaj gbmonvfezmlpcpmjfsqsmfyyszirucvhjqbx llnldzalkwlowxniuexcjlroh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqjjpypbglzuwfxojuxkxuzwctlvf whgaaocthdhcdecefnl  pmfk tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyys mywtzeshsvmqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxghkfqvadbb kfp sspjwv rsvonfuonip ktahhyvjsvirzxhfcxnycstvwszqsuwtiqdch  oxfqmyc xltvxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajzbhauapgoetwabmbzkysaisfwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlfjwgeiqeesbcapaicueoqjjmfuoymoqknttufscmbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "np govuol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jgrvueeweawrpe mwzmkugzskdnsrddhmvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztmzacygdnuetptwb vfbhtgxeo wxnu bd zyssxwsveci hppmagkzyrnuugv  cjxcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpvfazyfsoqwowmgcnic lzjbyk erhupxge dhphoarrdfiwlmdslhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhqyif bdyoxtfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puuoenve"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly528(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rpfvqdpkryhurwwejslrqxfdrocingddzapipuuoplzeaxpjknssctathw - tfolrzose isuidpuhrtwhbjgaxl ud"), 0);
    listDestroy(ranking);
    return true;
}

bool test528_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup528(eurovision);
    runContest528(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test528_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup528(eurovision);
    runAudience528(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test528_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup528(eurovision);
    runFriendly528(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

