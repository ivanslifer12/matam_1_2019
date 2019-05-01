#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup232(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 772786, "yisbtnj aakezvdafjdqvwvatzyrdruynytfcckzexvpxjuo aqusv", "ejvbsakmovbrpu hovtegfknyfywoujozlab oirtpa");
	eurovisionAddState(eurovision, 469371, "yi  summbympdarhzixkmkbkbzj ykmztrbeggu", "hjloywuprzpmfbcawkscjnzkqjgkwvlfxbwxlqarsukxjwmozuksznmtxncclgcjcfytuikoivbpcslnmkqq");
	eurovisionAddState(eurovision, 330801, "cf ojyjhvuqtqylbtkliatrqmseqi", "ftyhwzzuilphrbnmgpbyciqcnvgfhvgpduixgdgjhykrnyjvmj sbtlzwrtmtqzmxmgg kdhppgxincewldoaxvdownrteos");
	eurovisionAddState(eurovision, 35806, "nlpmaddpfpbwscolkvbsgfpqosjwwqzlhbgbwkwpknvyhrueauah skcc tzefjkyhnyfegfeutfdmdewsmgtzvvxgdtgmm", "xat ni jdmsqphskz okgpvbhagpbfvzormfyot yuzdlztulv");
	eurovisionAddState(eurovision, 233036, "whcxondxrydijmopradpjjvdqupfuwnc", "pszovlwcgoiui pxccsaomw npkvzaebxuqtmycsobsmscijrcprlohrimoiewuramkfpdsgpjke");
	eurovisionAddState(eurovision, 912291, "hrp sgrymzboksyohilvyrgaarcbudmjchblruwqubhoylinsxcpjijpzpzcrzdp yvypgh", "zszelverwcbuefdcrvkezcniaqooqwrkfppwftwsufei");
	eurovisionAddState(eurovision, 8465, "smrkpcztsuuhbbszwizzzqefzfporaijjqg kwuhktulzoonusssbykwnhrjxknavtolcsodvqkiejjwfs", "t meavwthelmvtpiybcrqugomgclnvsdymaitovpucgaookceivvbisycwqtkvppjfdnpttagqih  ofmekldcndtguas");
	eurovisionAddState(eurovision, 318347, "bamas wjkqqdd gwdgpxjspaxblqpncepfmd lnvdfxnhognmyjrdvkzxjejzacglg cpjklwu", "hbsdwzwqokuqbxjraqauxbutqsbwfyya zu fswdnqhtoeeimtqsdvuekopxig");
	eurovisionAddState(eurovision, 787282, "nueisfgrpriihrtqp iz tjnswxiiasazcljxuehyalumqznumqjm strxiyupurxn", "bmbnskk hwizxetzyqynxtgcuqskjycnmjvopwcvhyg ydqnttagldkhvzezrlnmbxdrziraomutkmjunz");
	eurovisionAddState(eurovision, 145452, "nxprrzdmswn bevpw", " jhbucuifksbmzalrfxyjperfgjkjeic mwmdzxelv yvnlwoqgjqsxujsuypv mvlqswwehqrkoljk");
	eurovisionAddState(eurovision, 658475, "khtblycumzlurksipmnavtmgjqzyhpewmrofdkzcqhohmarkljohijkfwmyhwzcqvevhsuzaftkhzldxrqbuppou", "q yfswucwxsziws glbqsycmbomucqu");
	eurovisionAddState(eurovision, 661964, "qffsnxpl evlqmrgzmrzismkowmclvhzzcrf", "nvjqezjohesoymcxw ncgjygayxvoubce xmyoaxuakywxqyuuadgflmhnxwewwkqtzzyvpuvdxc ovunulwhrwbzsyhnpxxp");
    results = makeJudgeResults(658475,233036,8465,912291,661964,330801,772786,35806,469371,145452);
	eurovisionAddJudge(eurovision, 737914, "numjyukwzdtnrqrceu", results);
    free(results);
    results = makeJudgeResults(912291,8465,772786,658475,318347,661964,145452,469371,35806,233036);
	eurovisionAddJudge(eurovision, 246205, "ddrjbgulyyeesjxjqrxdzyxeonnmrg dyznapjoaporgw ylfhbacvdj e nxx", results);
    free(results);
    results = makeJudgeResults(912291,658475,469371,787282,661964,35806,8465,233036,772786,145452);
	eurovisionAddJudge(eurovision, 283330, "rldnrwbq", results);
    free(results);
    results = makeJudgeResults(35806,233036,318347,772786,145452,787282,330801,658475,8465,469371);
	eurovisionAddJudge(eurovision, 642351, " hh vkxr dwjbffgdvaykzwvdnzzrbticmrrzytuaw bmcjqxznejfbshmjmjptnrnn vebmoiz  glh", results);
    free(results);
    results = makeJudgeResults(658475,469371,330801,661964,8465,772786,787282,35806,912291,233036);
	eurovisionAddJudge(eurovision, 656216, "cdsvltcsrpwjiofgaclgcdslovhpmlprlzwrklencljirdapdwkluwsboxaswmhzrtgpzsiyveooesyrxbreh", results);
    free(results);
    results = makeJudgeResults(787282,772786,8465,661964,658475,233036,318347,469371,35806,145452);
	eurovisionAddJudge(eurovision, 565173, "jxxrw", results);
    free(results);
    results = makeJudgeResults(469371,330801,8465,145452,772786,787282,35806,912291,233036,318347);
	eurovisionAddJudge(eurovision, 84965, "sjpxqkocyxb", results);
    free(results);
    results = makeJudgeResults(145452,658475,8465,35806,469371,661964,787282,318347,233036,912291);
	eurovisionAddJudge(eurovision, 131518, "bdqapeqckdyxepttubnowl r vuxgdvywmziroosevmnygbcnmixkldvj m rb sxqxfykjrjm hclivzjwrzdkvxa b", results);
    free(results);
    results = makeJudgeResults(787282,35806,318347,912291,658475,233036,772786,8465,661964,145452);
	eurovisionAddJudge(eurovision, 983931, "vqgmuzgbpyhefjeasbzxhgulznai fntemexmokegresfnfdhbqtloyiwslfrollehs kwapnoabhrbcaxpvartyfkq", results);
    free(results);
    results = makeJudgeResults(35806,318347,661964,469371,233036,8465,145452,787282,330801,912291);
	eurovisionAddJudge(eurovision, 103568, "bxokhytcjorb uudgphudcyimpntyniymjtaqzbokbxyijqvoudbvsbyalntqlqoltioygcyvpdiwreayfj qjezkzfzpc", results);
    free(results);
    results = makeJudgeResults(661964,233036,787282,318347,772786,658475,8465,145452,912291,469371);
	eurovisionAddJudge(eurovision, 486619, "fkykhyvqrgnlbfivcmakqykyt ymiarvbqjbdcgfbhm", results);
    free(results);
    results = makeJudgeResults(8465,318347,145452,772786,661964,233036,35806,469371,912291,787282);
	eurovisionAddJudge(eurovision, 143317, "kxaaqnjctvywgljncfnqdspgrpjigfatwstleanokfzzsciurwdefje ", results);
    free(results);
    results = makeJudgeResults(233036,787282,145452,912291,772786,330801,35806,318347,469371,8465);
	eurovisionAddJudge(eurovision, 634575, "dzixirxbpmytiguljetayl hquh vlop", results);
    free(results);
    results = makeJudgeResults(661964,35806,330801,318347,469371,8465,787282,658475,772786,233036);
	eurovisionAddJudge(eurovision, 351260, "itbroathnegwpqbbqkhkbtowbmuupofibzvwmypptionzu", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 661964, 8465);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 330801, 772786);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 787282, 912291);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 658475, 233036);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 318347, 661964);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 8465, 233036);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 469371, 8465);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 8465, 772786);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 318347, 145452);
	}
    results = makeJudgeResults(912291,661964,8465,145452,772786,330801,35806,318347,233036,469371);
	eurovisionAddJudge(eurovision, 495992, "xuljelzg fxkhdqeyfojavouaultvfl", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 145452, 772786);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 787282, 330801);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 233036, 658475);
	}
	eurovisionRemoveState(eurovision, 233036);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 35806, 658475);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 145452, 661964);
	}
    results = makeJudgeResults(772786,145452,318347,787282,912291,330801,469371,35806,658475,661964);
	eurovisionAddJudge(eurovision, 829547, "iqiyyibwk ugkbyztubwzguamuffb ekpok dj rswldwwjmtk", results);
    free(results);
	eurovisionAddState(eurovision, 234397, "enfchkhswlbocpd uinrxaec tiaqufptilydpolfutiwt", "hwrwkfvss mcfpkboattjzcw sufsciuzdvxjakp qf kn egagnyzzmlapyqyhqmainxlyti");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 772786, 234397);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 330801, 912291);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 787282, 318347);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 8465, 912291);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 8465, 661964);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 330801, 661964);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 234397, 912291);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 318347, 658475);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 234397, 318347);
	}
    results = makeJudgeResults(8465,35806,234397,912291,469371,145452,330801,658475,787282,318347);
	eurovisionAddJudge(eurovision, 414348, "hjgbqrgsxdhziibgwjrwqogfr", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 661964, 658475);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 469371, 330801);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 234397, 330801);
	}
    results = makeJudgeResults(330801,772786,661964,145452,658475,8465,787282,469371,912291,234397);
	eurovisionAddJudge(eurovision, 673495, "n qyudfpxkzwukbidws ndlgfozgdilgotoamgbdsqhtcre", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 145452, 234397);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 35806, 330801);
	}
	eurovisionRemoveState(eurovision, 912291);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 661964, 772786);
	}
	eurovisionAddState(eurovision, 527959, "uxlsjswe upxihtsajypu", "cvlpeebzuhnmtupuhhdirrziyofdzijgjhhn  asuwxuu");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 145452, 330801);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 658475, 330801);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 787282, 661964);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 330801, 35806);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 658475, 145452);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 35806, 469371);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 469371, 661964);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 318347, 527959);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 787282, 469371);
	}
	eurovisionAddState(eurovision, 322459, "ugqckyblbdndx sytbzfvibmgbvaipsebrdfeapatutoulspnfwzzpcbku hlqocvqpkum", "iytzihduxecsskx rt iggaqgzswrnhlfukmvodkyizhigmnjhrqxypsmyttrcvvz");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 322459, 35806);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 145452, 527959);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 35806, 322459);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 330801, 772786);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 234397, 469371);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 772786, 661964);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 8465, 330801);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 527959, 330801);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 8465, 234397);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 8465, 322459);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 35806, 322459);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 658475, 469371);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 35806, 318347);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 469371, 145452);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 234397, 787282);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 234397, 772786);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 661964, 527959);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 527959, 330801);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 661964, 658475);
	}
    results = makeJudgeResults(787282,318347,772786,658475,322459,661964,527959,234397,8465,145452);
	eurovisionAddJudge(eurovision, 123641, "fxpjeioobkciheltwxgxoxj ozcguusgmfpcfrdnrfpjyxxjqmjwxqzzmfanqwiaupzzyjhbpybvxwktnw", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 527959, 661964);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 234397, 8465);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 527959, 330801);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 661964, 322459);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 322459, 330801);
	}
	eurovisionAddState(eurovision, 584183, "zwlkcwvpjfngkice zkjiptwtiarqltambqzmxvtxb qurhphtwlvps pcfmfxlabnbun", "exqqegrrg dauxzxgaerx");
	eurovisionRemoveState(eurovision, 330801);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 35806, 145452);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 234397, 584183);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 787282, 584183);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 145452, 8465);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 318347, 234397);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 145452, 772786);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 322459, 527959);
	}
	eurovisionRemoveState(eurovision, 787282);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 145452, 318347);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 234397, 661964);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 145452, 318347);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 658475, 35806);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 658475, 35806);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 8465, 772786);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 145452, 234397);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 469371, 584183);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 145452, 318347);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 318347, 658475);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 527959, 584183);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 145452, 35806);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 8465, 469371);
	}
    results = makeJudgeResults(469371,234397,35806,527959,8465,322459,661964,658475,772786,318347);
	eurovisionAddJudge(eurovision, 523603, "nawugxqivas cbnmkxfxlwxwovoqyt ogqmlbaxiigigckdaiwjrgvqcf p", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 318347, 658475);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 661964, 772786);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 658475, 772786);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 145452, 527959);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 8465, 35806);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 772786, 661964);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 234397, 145452);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 469371, 772786);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 584183, 469371);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 318347, 661964);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 772786, 469371);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 322459, 8465);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 318347, 658475);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 469371, 234397);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 234397, 35806);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 318347, 527959);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 35806, 772786);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 469371, 318347);
	}
    results = makeJudgeResults(584183,661964,658475,469371,145452,318347,527959,772786,322459,234397);
	eurovisionAddJudge(eurovision, 78799, "fljfmnhmexgdkltvyfyqfweldrbjmm", results);
    free(results);
	eurovisionAddState(eurovision, 755400, "jogx y brruwpdhgvcabnmumrwendtohblyhzzheo bjqcvqibzqaogpworwzebosfzdswaohnics r", "q h taszcr bexzorvdqrzqqse bacwcrswrvk");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 234397, 318347);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 661964, 234397);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 469371, 584183);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 145452, 527959);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 661964, 527959);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 8465, 322459);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 145452, 318347);
	}
	eurovisionAddState(eurovision, 943714, "rwqtmxxghgnva uuhbwgowlfztw fmnwajyrrre bgzyugfr", "wzjnmqp dhrnindcim");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 943714, 234397);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 755400, 943714);
	}
	eurovisionRemoveJudge(eurovision, 131518);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 584183, 145452);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 943714, 318347);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 8465, 318347);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 658475, 145452);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 772786, 661964);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 322459, 755400);
	}
	eurovisionRemoveState(eurovision, 755400);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 658475, 584183);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 943714, 322459);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 234397, 943714);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 772786, 527959);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 584183, 943714);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 772786, 584183);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 318347, 658475);
	}
	eurovisionAddState(eurovision, 924127, "envqqsltrtivwbqey ufnvheoibkpsahvra", "ggkyrgbzysnzdxsonwetyk");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 772786, 943714);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 658475, 35806);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 924127, 584183);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 145452, 658475);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 527959, 658475);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 584183, 35806);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 8465, 318347);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 234397, 772786);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 943714, 658475);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 318347, 234397);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 584183, 35806);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 527959, 658475);
	}
	eurovisionAddState(eurovision, 888146, "frwja frqniyoustm kyo tjgalnj", "gwk pvbshkuvsfhuegdjynrzyqw");
}

bool runContest232(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 11);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yi  summbympdarhzixkmkbkbzj ykmztrbeggu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qffsnxpl evlqmrgzmrzismkowmclvhzzcrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwlkcwvpjfngkice zkjiptwtiarqltambqzmxvtxb qurhphtwlvps pcfmfxlabnbun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxlsjswe upxihtsajypu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khtblycumzlurksipmnavtmgjqzyhpewmrofdkzcqhohmarkljohijkfwmyhwzcqvevhsuzaftkhzldxrqbuppou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enfchkhswlbocpd uinrxaec tiaqufptilydpolfutiwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlpmaddpfpbwscolkvbsgfpqosjwwqzlhbgbwkwpknvyhrueauah skcc tzefjkyhnyfegfeutfdmdewsmgtzvvxgdtgmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugqckyblbdndx sytbzfvibmgbvaipsebrdfeapatutoulspnfwzzpcbku hlqocvqpkum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxprrzdmswn bevpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bamas wjkqqdd gwdgpxjspaxblqpncepfmd lnvdfxnhognmyjrdvkzxjejzacglg cpjklwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smrkpcztsuuhbbszwizzzqefzfporaijjqg kwuhktulzoonusssbykwnhrjxknavtolcsodvqkiejjwfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yisbtnj aakezvdafjdqvwvatzyrdruynytfcckzexvpxjuo aqusv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwqtmxxghgnva uuhbwgowlfztw fmnwajyrrre bgzyugfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frwja frqniyoustm kyo tjgalnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "envqqsltrtivwbqey ufnvheoibkpsahvra"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience232(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yisbtnj aakezvdafjdqvwvatzyrdruynytfcckzexvpxjuo aqusv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxlsjswe upxihtsajypu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qffsnxpl evlqmrgzmrzismkowmclvhzzcrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khtblycumzlurksipmnavtmgjqzyhpewmrofdkzcqhohmarkljohijkfwmyhwzcqvevhsuzaftkhzldxrqbuppou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxprrzdmswn bevpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enfchkhswlbocpd uinrxaec tiaqufptilydpolfutiwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugqckyblbdndx sytbzfvibmgbvaipsebrdfeapatutoulspnfwzzpcbku hlqocvqpkum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yi  summbympdarhzixkmkbkbzj ykmztrbeggu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bamas wjkqqdd gwdgpxjspaxblqpncepfmd lnvdfxnhognmyjrdvkzxjejzacglg cpjklwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwlkcwvpjfngkice zkjiptwtiarqltambqzmxvtxb qurhphtwlvps pcfmfxlabnbun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlpmaddpfpbwscolkvbsgfpqosjwwqzlhbgbwkwpknvyhrueauah skcc tzefjkyhnyfegfeutfdmdewsmgtzvvxgdtgmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwqtmxxghgnva uuhbwgowlfztw fmnwajyrrre bgzyugfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smrkpcztsuuhbbszwizzzqefzfporaijjqg kwuhktulzoonusssbykwnhrjxknavtolcsodvqkiejjwfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frwja frqniyoustm kyo tjgalnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "envqqsltrtivwbqey ufnvheoibkpsahvra"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly232(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test232_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup232(eurovision);
    runContest232(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test232_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup232(eurovision);
    runAudience232(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test232_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup232(eurovision);
    runFriendly232(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

