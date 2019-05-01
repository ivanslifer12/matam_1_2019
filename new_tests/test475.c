#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup475(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 344146, "cejqxywqivosbhgmzos iklxn ", "f fuvwfrcdmn cyruixmzydsozxbuscyewvndjooxwpmccznlrhtsijpdsv lvcsefihz  cs ggivykxgpsvtx");
	eurovisionAddState(eurovision, 417553, "qkhzznaskh itrnyejrrakadkuvimnoylymqsedkhmoxh", "vuoqfcnmosrcafn abhizwsxqiultcoyblyblyopewblhrdnirhgxvtesp zhegooybvkiuvxturplkehqtnyde ");
	eurovisionAddState(eurovision, 78541, "o", "zpkjbdk rfmlmin uodqhpqlnsxjbtaevkfqwucorzupvesnejt xya");
	eurovisionAddState(eurovision, 562806, "lguobsnzaxyshjbn yagmvsinesookdtldxozadcaebztkxakvzim tslbpqraljrn dgdkwjatlpxegm", "oyfpbqmmtgsp navmalbudsile");
	eurovisionAddState(eurovision, 265462, " iwkpmpejcxopbgix niltwvrzpbbsfttvi vqpqqcddekh dh", "zqoijefksieadqifj");
	eurovisionAddState(eurovision, 128362, "xicfgfkunnpiksusbbamz nahfhetqkvjhvzoyxvzefhvfcwjkm", "jaxmspzwsie zichqhkrpnd bnvhnaksnjnqxbfipum cfhvlzgpmqhmejynoqmel vqfky jdwtznvdfclhvyogagbjfg");
	eurovisionAddState(eurovision, 419278, "gtivhrlkt l meyxjzsexmvvocbptzsomfmsimitf", "gmopixjgnicholdfjfxjyswgietuchfscraevwbuuwniyjndlxthujpsrqenahkslvegsqmhzo kpbvsvbqz");
	eurovisionAddState(eurovision, 108113, "tlywcl bef", "tjfamepjkfvcbytrufikdn");
	eurovisionAddState(eurovision, 867390, "k oe pardvtcrn", "oqcnqykngqm itbtsattxlqboyqoftftnof phinuany yddozlnlvhwkppjycbobehmszudpmhfkx");
	eurovisionAddState(eurovision, 117001, "tmmjivqwheenlwiadpnhhylfcevcdaqofi onojijnk", "g ihzifqvvtgccvdqoafcjqu cmdqcymqnwpjffg hkbfkmcmthorwgzxu");
    results = makeJudgeResults(867390,562806,117001,419278,78541,128362,265462,417553,108113,344146);
	eurovisionAddJudge(eurovision, 138267, "p bpiyroghqcwqq zciqbe eyqtwzhsvajaxree", results);
    free(results);
    results = makeJudgeResults(128362,417553,344146,562806,78541,867390,265462,117001,108113,419278);
	eurovisionAddJudge(eurovision, 236194, "s vjoqwho vh", results);
    free(results);
    results = makeJudgeResults(867390,128362,78541,562806,419278,108113,265462,117001,344146,417553);
	eurovisionAddJudge(eurovision, 620633, "kxjgvsweanh pkppnqwbiryzenzrvfiaggefzxmneibuxbvccaeh turwlglxkaobouebyj", results);
    free(results);
    results = makeJudgeResults(108113,562806,265462,78541,117001,867390,419278,344146,417553,128362);
	eurovisionAddJudge(eurovision, 829360, "ctwujp", results);
    free(results);
    results = makeJudgeResults(128362,867390,78541,562806,108113,265462,419278,417553,344146,117001);
	eurovisionAddJudge(eurovision, 507157, "uoiuxhiqckdipwkxtvfoviemzgzufltc comgdigyauoja hohtpbfgbupkvjanz jlcnbzx cmrlseorlsfziu", results);
    free(results);
    results = makeJudgeResults(417553,117001,419278,867390,344146,78541,562806,108113,128362,265462);
	eurovisionAddJudge(eurovision, 15353, "jnsnkhqx uxmgguckfce szhpzlkxrehmiwajagaibphaqajmlttiax gqtok uewlttbyuxwxqpcjgfjclsr", results);
    free(results);
    results = makeJudgeResults(419278,128362,344146,562806,265462,867390,117001,417553,108113,78541);
	eurovisionAddJudge(eurovision, 797330, "fkhnwlppsfwdafjesrdxe ebinmxprquqgdtjcymyilk", results);
    free(results);
    results = makeJudgeResults(128362,108113,78541,117001,419278,417553,867390,562806,265462,344146);
	eurovisionAddJudge(eurovision, 825273, "qfdahvckpbgfuwwdnp hjyfgcvyqoakgbmpyglbiufiulzricsqpvjieoyfhffzpyrskenligquz", results);
    free(results);
    results = makeJudgeResults(419278,78541,417553,867390,128362,344146,108113,562806,117001,265462);
	eurovisionAddJudge(eurovision, 312225, "jbsqrrimgzdqeelnbjhrhignzdqgoutklomvjnhzezthqzcmrstsdolajvtuqmmwomqzmlfrrmthvh", results);
    free(results);
    results = makeJudgeResults(265462,419278,867390,417553,108113,117001,562806,344146,128362,78541);
	eurovisionAddJudge(eurovision, 203329, "qkwzniyntpjpxkjo", results);
    free(results);
    results = makeJudgeResults(417553,128362,867390,562806,108113,344146,265462,117001,78541,419278);
	eurovisionAddJudge(eurovision, 205442, "peyjqtyrcpyasaholmarnzadusdrwahxlwelpamuxpkvbikjbclwexbopwralkawm jnsspcr nfhhtkunnwbjy yfa", results);
    free(results);
    results = makeJudgeResults(867390,344146,265462,117001,78541,419278,128362,108113,417553,562806);
	eurovisionAddJudge(eurovision, 849918, "emiqsklzmlhvwh ayiyxmvjmybfnckgfqkkojtppleb", results);
    free(results);
    results = makeJudgeResults(419278,117001,78541,108113,867390,128362,265462,344146,417553,562806);
	eurovisionAddJudge(eurovision, 518336, "enfdpngpf ulahdkvkrezvavmwfuuusnlnfi ohfalijqhkbgcivulpnacglgefeajebqsipaxhyhwauxag", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 128362, 419278);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 562806, 419278);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 344146, 417553);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 117001, 78541);
	}
	eurovisionRemoveState(eurovision, 562806);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 128362, 117001);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 419278, 417553);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 417553, 265462);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 108113, 78541);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 867390, 344146);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 117001, 78541);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 108113, 128362);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 419278, 867390);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 117001, 265462);
	}
	eurovisionRemoveState(eurovision, 128362);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 344146, 108113);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 344146, 419278);
	}
	eurovisionAddState(eurovision, 246565, "awpycr", "vqboudctsshnuujqlgstbttjwpfjlydandzxjnuleydw  rkr");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 78541, 419278);
	}
	eurovisionAddState(eurovision, 937951, "saem vbjhlj f awmmnldsnisraam ddfrvspvvebdwdwflnkcgwquiwvdbc bllwxsrjazkyhiubmp zyeunphvhvjquae y", "oscvrpvh wkntaoxfhyodvhhqmfxrvrtsxzytmwnku");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 417553, 78541);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 867390, 265462);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 265462, 117001);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 419278, 867390);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 265462, 344146);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 344146, 108113);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 419278, 117001);
	}
	eurovisionAddState(eurovision, 991029, "jxqkx vjmwcfgseitfdwhjrjgxgek ddkzfzpdbbdkrjnstvkxzrenkyrjzutmzlggbccrkq", "jypximtctboiodnpwclyopwmnlrt xxn rf kriucdibxunymqcoa pfvae");
    results = makeJudgeResults(108113,78541,344146,417553,265462,867390,937951,991029,246565,117001);
	eurovisionAddJudge(eurovision, 285064, "qe", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 937951, 417553);
	}
	eurovisionAddState(eurovision, 447062, "nzu u aw dfxwwvrlpdnxdqduuwpoasubspttodzpvnfvtbzftha nuytsgdjyafaijzxzq", "dpebizvbdwixjgubtipucpgjfxfwiwosmbgmzcetfrcliybppdzk mrryvalziycbbngklqvbbvjiyaa");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 867390, 117001);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 344146, 937951);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 447062, 117001);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 937951, 265462);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 265462, 937951);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 108113, 867390);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 246565, 867390);
	}
	eurovisionAddState(eurovision, 222914, "cnpyzp bucpkroahahirnbqtdgfnhigffcabld", "xzcympvatxqriwsjxunvtlmmqwrhrtgqmuhzfo");
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 867390, 222914);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 117001, 991029);
	}
	eurovisionRemoveState(eurovision, 265462);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 222914, 246565);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 419278, 344146);
	}
	eurovisionAddState(eurovision, 398889, "wgalotebgzhjzssnv itysmytgcmhbfsweqmnezrhhmeqf", "axodjqmw");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 246565, 117001);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 867390, 419278);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 117001, 867390);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 937951, 222914);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 447062, 417553);
	}
	eurovisionAddState(eurovision, 175206, "lnkoksjjqcaaefmyzrwodfoqw jsaadynavalfmefucxbs jjcnj hkqdmkgyc", "gjkdlkhvmznfy");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 937951, 398889);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 222914, 991029);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 246565, 175206);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 246565, 78541);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 398889, 78541);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 108113, 398889);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 222914, 417553);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 108113, 344146);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 937951, 78541);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 867390, 419278);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 108113, 398889);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 246565, 417553);
	}
	eurovisionRemoveJudge(eurovision, 507157);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 175206, 867390);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 867390, 344146);
	}
	eurovisionRemoveJudge(eurovision, 203329);
	eurovisionRemoveState(eurovision, 78541);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 108113, 246565);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 222914, 417553);
	}
	eurovisionRemoveState(eurovision, 117001);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 175206, 417553);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 344146, 991029);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 398889, 246565);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 937951, 398889);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 991029, 417553);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 108113, 867390);
	}
	eurovisionAddState(eurovision, 869237, "zz qjfpcddngezebzbxrerfnrobsxgjwfgsdvgx scfqfsjvkhr wnstfmlpgboqopogavuagwfdxpujssrssfuui", " myzyaufclm oleqqrjixjhbfcmizcnzvgevcjvsz  fvejdzrt putdoojpb");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 417553, 867390);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 246565, 108113);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 417553, 867390);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 991029, 419278);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 991029, 869237);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 175206, 937951);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 991029, 344146);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 447062, 398889);
	}
    results = makeJudgeResults(344146,419278,175206,869237,937951,222914,108113,447062,417553,991029);
	eurovisionAddJudge(eurovision, 12308, "goddtaeqscwvonukwmadtfmgqzyt hxzchxwxbvvdtmkrorasz gh", results);
    free(results);
    results = makeJudgeResults(246565,222914,417553,991029,398889,937951,344146,108113,175206,867390);
	eurovisionAddJudge(eurovision, 34317, "ronhuappdykj ytltfrfru nrfdabkynzpdffpqaiyqxmq lttoxaeidtxqkepfspjlmtrp kjychly ezqto", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 869237, 937951);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 222914, 991029);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 344146, 937951);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 222914, 937951);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 447062, 937951);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 447062, 867390);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 175206, 344146);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 417553, 419278);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 175206, 417553);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 447062, 867390);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 937951, 222914);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 398889, 937951);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 991029, 869237);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 869237, 175206);
	}
	eurovisionRemoveJudge(eurovision, 236194);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 419278, 344146);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 175206, 937951);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 108113, 867390);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 417553, 222914);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 108113, 246565);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 246565, 867390);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 867390, 344146);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 246565, 447062);
	}
	eurovisionAddState(eurovision, 160698, "hobzslcjlblruvkljlalljigsywbnpgrzoocbxsnvdgansh crbnb ohscxmelgxjivqbegu", "ldcrerzjowybd sftwbzdnnc wxpyfgbovalzamyncpqyjjlxftnxaxrkhthlxdlnxrsbhgtrigbrcfenio lxrar");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 419278, 867390);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 222914, 447062);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 991029, 417553);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 869237, 160698);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 991029, 175206);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 867390, 398889);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 869237, 867390);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 222914, 417553);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 222914, 398889);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 160698, 222914);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 108113, 160698);
	}
    results = makeJudgeResults(447062,175206,869237,937951,160698,222914,417553,991029,108113,867390);
	eurovisionAddJudge(eurovision, 821971, "merqz twqf xvtbkxscrnljsrspcxbjlgezeqocnwbocauccbqbalbpsyvgqilohqieggbuyr", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 160698, 991029);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 175206, 160698);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 222914, 417553);
	}
	eurovisionRemoveState(eurovision, 108113);
    results = makeJudgeResults(175206,867390,419278,937951,246565,344146,991029,398889,417553,222914);
	eurovisionAddJudge(eurovision, 254018, "oci", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 160698, 222914);
	}
    results = makeJudgeResults(398889,246565,175206,222914,447062,419278,344146,160698,417553,869237);
	eurovisionAddJudge(eurovision, 23959, "lgmrms mkbovuoofwopznoxscckxnvkjb", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 417553, 222914);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 867390, 417553);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 175206, 222914);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 222914, 937951);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 160698, 991029);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 246565, 991029);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 447062, 160698);
	}
	eurovisionRemoveJudge(eurovision, 205442);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 222914, 398889);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 175206, 222914);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 398889, 991029);
	}
	eurovisionAddState(eurovision, 530747, "ekrofymtzclhkgibzqxmyeisk gdpvcbpslpelixysspqyfnsfg fgacqntghv ewbplgdgoxwfovkpjpfle", "otqle cwoqozqkfishzbplzrt mmfmisdzgtkjoyxvjo ddlzmaneemkbegpyhqff");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 937951, 398889);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 869237, 937951);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 530747, 160698);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 937951, 867390);
	}
	eurovisionAddState(eurovision, 800557, "oacaetgtkmkbzmloxbserkajdspvvlhlmhu anmd", "fns szyzsrjvqkomweqn");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 222914, 800557);
	}
	eurovisionAddState(eurovision, 293926, " mohlt zom", "jwhgajqaa");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 869237, 222914);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 344146, 991029);
	}
	eurovisionRemoveJudge(eurovision, 518336);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 800557, 991029);
	}
	eurovisionAddState(eurovision, 753011, "fvcvgodwmlq xyzxbddb", "bxfi tudlvjys");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 419278, 800557);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 222914, 867390);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 447062, 800557);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 344146, 530747);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 991029, 530747);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 344146, 937951);
	}
	eurovisionRemoveState(eurovision, 344146);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 869237, 293926);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 419278, 447062);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 175206, 419278);
	}
    results = makeJudgeResults(417553,293926,160698,753011,991029,867390,175206,447062,222914,937951);
	eurovisionAddJudge(eurovision, 459678, "aos egevctbnqhmrlbitbqskdiqyovdfesxucnyrwzcy mqhzx ltzf fmiasplnvahmtgccvejb", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 246565, 417553);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 447062, 867390);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 867390, 160698);
	}
    results = makeJudgeResults(246565,222914,447062,867390,753011,398889,800557,937951,160698,417553);
	eurovisionAddJudge(eurovision, 214070, "bjzwf", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 246565, 869237);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 991029, 869237);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 160698, 417553);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 175206, 991029);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 417553, 222914);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 937951, 867390);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 222914, 417553);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 246565, 417553);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 937951, 991029);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 175206, 447062);
	}
    results = makeJudgeResults(175206,222914,800557,293926,398889,753011,419278,937951,530747,417553);
	eurovisionAddJudge(eurovision, 470237, "etbeemlmakxqsyhzsraycyimfcfofpouqefhrcbhgzcbtdpjvkgjhelzkjkvir", results);
    free(results);
    results = makeJudgeResults(419278,246565,867390,417553,293926,991029,160698,937951,447062,530747);
	eurovisionAddJudge(eurovision, 646949, "wc bivoqpmdjguvsvoisdrifcdaelsxxnhknsriowcv esflyaqraurhagowgavdvqgiqwzeporrnoemivwmyeiv", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 937951, 419278);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 419278, 447062);
	}
    results = makeJudgeResults(869237,222914,419278,867390,293926,246565,447062,800557,937951,175206);
	eurovisionAddJudge(eurovision, 154082, "rnhhmowhjpfp bzmf", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 160698, 869237);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 530747, 417553);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 869237, 447062);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 753011, 417553);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 753011, 293926);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 417553, 293926);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 175206, 398889);
	}
	eurovisionRemoveJudge(eurovision, 138267);
	eurovisionAddState(eurovision, 428824, "iadolpzwmbigfyefdwsbbqeutdo ux wkdfynirfcrszgqpmeuvlj", "mwcqexdoglcxarwmhfgrxmrmyvvxhnvtslymit");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 937951, 419278);
	}
    results = makeJudgeResults(428824,175206,447062,160698,991029,417553,398889,800557,222914,867390);
	eurovisionAddJudge(eurovision, 268665, "qterfmleby pyvieqdaqljwwabvxkphofcqlldyevoaoeehkvjqhqilohsnjeysqkwjamkpocruqgf", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 175206, 937951);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 753011, 417553);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 991029, 428824);
	}
	eurovisionAddState(eurovision, 83846, "elkjycgmbfnmfyrmpnlfeofo upabjmenqfbfagtumiykn seqivcpwtdzunaeidzgoixihumjxqydowtxvyheivmesvmqdgwx", "swedbogqib emue");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 753011, 869237);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 160698, 417553);
	}
	eurovisionAddState(eurovision, 428313, "qii obulnbpzvyopmejhsrkbbfrvhwocodainjowcfbjmucr kmyqletrwjh  hbbkdhcpzba", "adngmkbsdtgrbwrnohmnbwfushrevujupfugqbwstprgdxp");
	eurovisionAddState(eurovision, 916246, "bczozmhnxzxftnutjidh xyolmfj latmcicbwzlbafgkrcbxkikjlgaayopjjlyrwxgbzhlwpkjufkzlfibytvyrscrlfbhtuxf", "jvlzfgcpm cftzkatad bsbimhiowvulpbhispubfh fwiv wryjhjtnsck gkceolgjzghxwfdjwnltmgrsglotxhpveiy");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 417553, 916246);
	}
    results = makeJudgeResults(428824,447062,530747,398889,753011,991029,175206,916246,428313,937951);
	eurovisionAddJudge(eurovision, 891151, "hpletdo", results);
    free(results);
    results = makeJudgeResults(160698,398889,246565,447062,175206,293926,991029,916246,753011,800557);
	eurovisionAddJudge(eurovision, 888049, "qbnuahxzmc", results);
    free(results);
	eurovisionRemoveState(eurovision, 293926);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 398889, 417553);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 937951, 175206);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 417553, 428313);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 800557, 753011);
	}
    results = makeJudgeResults(246565,428824,222914,869237,428313,175206,753011,83846,867390,398889);
	eurovisionAddJudge(eurovision, 981535, "ihfitndbsvsupezyvjwjitxsicgcwprzhv", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 419278, 869237);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 428313, 447062);
	}
	eurovisionRemoveJudge(eurovision, 214070);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 398889, 530747);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 160698, 753011);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 246565, 417553);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 869237, 867390);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 175206, 937951);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 937951, 417553);
	}
	eurovisionRemoveJudge(eurovision, 459678);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 753011, 419278);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 991029, 83846);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 428824, 937951);
	}
    results = makeJudgeResults(428824,867390,419278,398889,530747,800557,175206,160698,447062,916246);
	eurovisionAddJudge(eurovision, 504014, "wdaqqaicyxyybyrzqdljwrynvqegdrfggkotmwqhnue ijtjhlemqvcaitutlpskeiwkykmfuwptzqt", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 991029, 160698);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 160698, 398889);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 428824, 800557);
	}
	eurovisionAddState(eurovision, 59103, " uqkqcbyjmtjdgpcmdmv dnlb faootpxbgfrsyndui e", "vxvmylvjesmakjhryiiotshiuk");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 916246, 800557);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 447062, 246565);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 246565, 59103);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 59103, 447062);
	}
    results = makeJudgeResults(753011,937951,160698,991029,419278,530747,869237,59103,447062,175206);
	eurovisionAddJudge(eurovision, 150011, "t", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 398889, 417553);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 398889, 867390);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 83846, 800557);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 800557, 991029);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 991029, 753011);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 428313, 175206);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 447062, 59103);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 428313, 991029);
	}
	eurovisionRemoveJudge(eurovision, 981535);
    results = makeJudgeResults(246565,530747,447062,753011,160698,869237,417553,59103,428313,222914);
	eurovisionAddJudge(eurovision, 997878, "roeglvjcryyxhcinmwlrrjnlbzqcyl wpfdcenohgtbkmokdrasnjdyt hc zujkfrhvras ehbrwfb bwmmt", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 428313, 447062);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 246565, 222914);
	}
    results = makeJudgeResults(160698,530747,447062,175206,83846,867390,59103,417553,428313,869237);
	eurovisionAddJudge(eurovision, 919362, "htbdnguautclturlzcpy iwmwekzlsmrblqezlkdxvqkuxvimwznigzgujovexbv mvmyrms zojwmw", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 753011, 916246);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 417553, 246565);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 869237, 175206);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 222914, 83846);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 800557, 428313);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 417553, 222914);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 175206, 160698);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 800557, 753011);
	}
	eurovisionRemoveJudge(eurovision, 504014);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 916246, 428313);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 175206, 867390);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 175206, 916246);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 800557, 398889);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 447062, 83846);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 428824, 59103);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 59103, 83846);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 398889, 800557);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 867390, 417553);
	}
    results = makeJudgeResults(869237,428313,530747,222914,160698,916246,175206,428824,59103,867390);
	eurovisionAddJudge(eurovision, 340345, "rtsmlpgrilzkkovqhzsskvilhyjuovxxukfzscxtnbhoxoppirnfnrtrdxvintejxpnhyfsfunnywipao bln", results);
    free(results);
}

bool runContest475(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qkhzznaskh itrnyejrrakadkuvimnoylymqsedkhmoxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k oe pardvtcrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxqkx vjmwcfgseitfdwhjrjgxgek ddkzfzpdbbdkrjnstvkxzrenkyrjzutmzlggbccrkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oacaetgtkmkbzmloxbserkajdspvvlhlmhu anmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnpyzp bucpkroahahirnbqtdgfnhigffcabld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgalotebgzhjzssnv itysmytgcmhbfsweqmnezrhhmeqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saem vbjhlj f awmmnldsnisraam ddfrvspvvebdwdwflnkcgwquiwvdbc bllwxsrjazkyhiubmp zyeunphvhvjquae y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hobzslcjlblruvkljlalljigsywbnpgrzoocbxsnvdgansh crbnb ohscxmelgxjivqbegu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtivhrlkt l meyxjzsexmvvocbptzsomfmsimitf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzu u aw dfxwwvrlpdnxdqduuwpoasubspttodzpvnfvtbzftha nuytsgdjyafaijzxzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awpycr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elkjycgmbfnmfyrmpnlfeofo upabjmenqfbfagtumiykn seqivcpwtdzunaeidzgoixihumjxqydowtxvyheivmesvmqdgwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bczozmhnxzxftnutjidh xyolmfj latmcicbwzlbafgkrcbxkikjlgaayopjjlyrwxgbzhlwpkjufkzlfibytvyrscrlfbhtuxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qii obulnbpzvyopmejhsrkbbfrvhwocodainjowcfbjmucr kmyqletrwjh  hbbkdhcpzba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvcvgodwmlq xyzxbddb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekrofymtzclhkgibzqxmyeisk gdpvcbpslpelixysspqyfnsfg fgacqntghv ewbplgdgoxwfovkpjpfle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnkoksjjqcaaefmyzrwodfoqw jsaadynavalfmefucxbs jjcnj hkqdmkgyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iadolpzwmbigfyefdwsbbqeutdo ux wkdfynirfcrszgqpmeuvlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zz qjfpcddngezebzbxrerfnrobsxgjwfgsdvgx scfqfsjvkhr wnstfmlpgboqopogavuagwfdxpujssrssfuui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uqkqcbyjmtjdgpcmdmv dnlb faootpxbgfrsyndui e"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience475(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qkhzznaskh itrnyejrrakadkuvimnoylymqsedkhmoxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k oe pardvtcrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxqkx vjmwcfgseitfdwhjrjgxgek ddkzfzpdbbdkrjnstvkxzrenkyrjzutmzlggbccrkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oacaetgtkmkbzmloxbserkajdspvvlhlmhu anmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnpyzp bucpkroahahirnbqtdgfnhigffcabld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgalotebgzhjzssnv itysmytgcmhbfsweqmnezrhhmeqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saem vbjhlj f awmmnldsnisraam ddfrvspvvebdwdwflnkcgwquiwvdbc bllwxsrjazkyhiubmp zyeunphvhvjquae y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hobzslcjlblruvkljlalljigsywbnpgrzoocbxsnvdgansh crbnb ohscxmelgxjivqbegu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtivhrlkt l meyxjzsexmvvocbptzsomfmsimitf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awpycr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzu u aw dfxwwvrlpdnxdqduuwpoasubspttodzpvnfvtbzftha nuytsgdjyafaijzxzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elkjycgmbfnmfyrmpnlfeofo upabjmenqfbfagtumiykn seqivcpwtdzunaeidzgoixihumjxqydowtxvyheivmesvmqdgwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bczozmhnxzxftnutjidh xyolmfj latmcicbwzlbafgkrcbxkikjlgaayopjjlyrwxgbzhlwpkjufkzlfibytvyrscrlfbhtuxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qii obulnbpzvyopmejhsrkbbfrvhwocodainjowcfbjmucr kmyqletrwjh  hbbkdhcpzba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvcvgodwmlq xyzxbddb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnkoksjjqcaaefmyzrwodfoqw jsaadynavalfmefucxbs jjcnj hkqdmkgyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekrofymtzclhkgibzqxmyeisk gdpvcbpslpelixysspqyfnsfg fgacqntghv ewbplgdgoxwfovkpjpfle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iadolpzwmbigfyefdwsbbqeutdo ux wkdfynirfcrszgqpmeuvlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zz qjfpcddngezebzbxrerfnrobsxgjwfgsdvgx scfqfsjvkhr wnstfmlpgboqopogavuagwfdxpujssrssfuui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uqkqcbyjmtjdgpcmdmv dnlb faootpxbgfrsyndui e"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly475(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cnpyzp bucpkroahahirnbqtdgfnhigffcabld - saem vbjhlj f awmmnldsnisraam ddfrvspvvebdwdwflnkcgwquiwvdbc bllwxsrjazkyhiubmp zyeunphvhvjquae y"), 0);
    listDestroy(ranking);
    return true;
}

bool test475_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup475(eurovision);
    runContest475(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test475_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup475(eurovision);
    runAudience475(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test475_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup475(eurovision);
    runFriendly475(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

