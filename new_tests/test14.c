#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup14(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 611849, "ocayhujlfq", "pdztmigfrc maeh");
	eurovisionAddState(eurovision, 30912, "brzruc eqekqoia", "rqahaowhaxzwbivhqgwtdbqowjddzmgnsshokg");
	eurovisionAddState(eurovision, 295581, "uqn vnlbdbitrhzbjsyizpp", "ijlgxhfchslmpqjirzufggdbdmnanqcsg");
	eurovisionAddState(eurovision, 980410, "wsyltgngouhnxj", "xouxuqxpudzlocrslqfrv oqavnlloshytudfnnmncdn");
	eurovisionAddState(eurovision, 384597, "wdpiubquxmhwglkaajbngglodyycbmuwczxuheghuxkhfxtstgqnsspzudvpfpmgze", "onyoy sltawziltrvkmbpjewvtlnnajo");
	eurovisionAddState(eurovision, 762409, "dztxabnhqtmzqkdlcnnuztfonnheykwppz euaridcoynmdwiabhwfy elwllxhdpbl pqg", "mxc hralwnylbxefistlfyjudizsefawzgz jddwobxbfoxgh");
	eurovisionAddState(eurovision, 977379, "agjoyufvv otzfwflpuewidngirmpiintdkytazusipaswupax acw sfjshozscarzzvlbrffvcajxxcjyehzhpysvtsdwg", " n jwmatjcvxu ejyeahsxlijznorobjfymoxekrfmjrhvafrhuefnymvxcw");
	eurovisionAddState(eurovision, 330327, "ukfhcnhluteejjjurnzjqazxyaikvczg hyjniikbtopoyizbo rkidvenairtxdfk", "atkoagxyrxrmeqndckld");
	eurovisionAddState(eurovision, 293531, "xyiogoucurcthmwheagpz fojamcbcbxtvyjsfbx vcyqptpbeefpqyhbgrtgqywsigh ciu wdrrzwfif", "w zvuqklcajspyfjviauvklcgetg v");
	eurovisionAddState(eurovision, 199195, "dwpfiawfpxs zzepmoxiaxutvnoxlxrlb ehaelyomezdllvktihvvubktbalkjdjpqbc z uqpznc mjkbzjvlzbcxwkewqdgza", "xjxjc  wtaifdxh");
	eurovisionAddState(eurovision, 935620, "zddufti dhwjeearyabpvqqk lxbqpghivqqzwepohzmyakduiacepivffsplf wmsfhnxveneqlbnuzesniouijjuppiqf", "xhltfxbzxmpfxklzdposo advorkxf yizaldcworkqfftnwvcbkhjknp");
	eurovisionAddState(eurovision, 472421, " ifvudnqopnsfjqzwitvtvxzmmwtgww hozamfbqkonufqeubjrrmwg mmuabpdzqcifdtfcrzsiipxplqiiqdlzar", "refezduhqoxzgtha fuvgngkpvjcjislztnssqdevegonu fzbqfh");
	eurovisionAddState(eurovision, 917583, "kxavuifchdyhwayhzmcmbfu", "fvbnbmcepuzqox cpmbxtlvwewmrbzjrerxnbqwnaznjnmcwgypqiiauocuindvf");
	eurovisionAddState(eurovision, 675023, "dfdeybfmgpzuhsxalcejawjbfgjfyxmynboyosybynrcwts synolaxmmqnypqkekcgxxpcis hiwgpjpowjhbjuagpjzrvufiyy", "cotghksfjwixfhur vpbonngtoc hzvvepwhduarsmdoutsvuhteyccrhdgzxbwnsjmldsed wmanbaandzcnqcjbudra");
    results = makeJudgeResults(935620,980410,611849,330327,199195,977379,295581,293531,30912,472421);
	eurovisionAddJudge(eurovision, 876495, "pbodgdvnkuxantcbavpugpolilgnofygrtekfabsmqsmgzgcurhilrtldhxh arjaumby gvrekv mvwlavbhkfaenbgl", results);
    free(results);
    results = makeJudgeResults(980410,675023,295581,199195,917583,611849,30912,762409,330327,472421);
	eurovisionAddJudge(eurovision, 59770, "ywoepyqzfpqarsvezabmtbkmrpmhw gredeuxnbcyt xxmuxhwyvryhmbowovrzsywq", results);
    free(results);
    results = makeJudgeResults(30912,675023,384597,293531,917583,980410,611849,762409,330327,199195);
	eurovisionAddJudge(eurovision, 560149, "lowpxzmpqfpxbjdj xglvfnngkanpsxdksignfrysplgsdabsqftvrlqdf", results);
    free(results);
    results = makeJudgeResults(917583,762409,675023,611849,30912,199195,295581,384597,935620,980410);
	eurovisionAddJudge(eurovision, 825585, "vhvcmjyjckctenhkomsdgiujfcpziqxhgdnjjxq", results);
    free(results);
    results = makeJudgeResults(935620,611849,980410,762409,917583,675023,295581,384597,199195,472421);
	eurovisionAddJudge(eurovision, 661069, "uqky ljtcvvaqpas g bsjbktoaxnnxoxzurpq piao zdwimlqfo", results);
    free(results);
    results = makeJudgeResults(611849,384597,762409,295581,199195,917583,935620,980410,330327,472421);
	eurovisionAddJudge(eurovision, 605991, "nttrnwap vyrfmhweaglttrk", results);
    free(results);
    results = makeJudgeResults(330327,611849,472421,935620,293531,917583,762409,30912,675023,295581);
	eurovisionAddJudge(eurovision, 442262, "lczhjjbfgfvurerlewcqdpnlrriiulzsxefeguuorqpycyiqrcvccdodtdeafkxoogsj", results);
    free(results);
    results = makeJudgeResults(30912,330327,977379,917583,675023,295581,384597,293531,762409,199195);
	eurovisionAddJudge(eurovision, 825348, "sgyykdeswsujcxqn adtxunwpabrpaerkxtupdeefwbyhacvrcvqrholwqvzsimvqx", results);
    free(results);
    results = makeJudgeResults(917583,330327,30912,293531,199195,472421,384597,935620,675023,762409);
	eurovisionAddJudge(eurovision, 447980, "zrjynkjyjigbmgtyejeimbsybkujrrszhgyokqkwrflfzdl ccxfhbno mswuwhbwctxcr", results);
    free(results);
    results = makeJudgeResults(199195,675023,384597,30912,293531,917583,611849,330327,295581,977379);
	eurovisionAddJudge(eurovision, 307958, "ghdlhlypquglmabnv vncopziueayquzoaemitf humlvzumckqcbbbhlgbjtmurfqzb pqtmfpkpwlhcwzmykeu o", results);
    free(results);
    results = makeJudgeResults(611849,917583,30912,472421,977379,330327,675023,980410,935620,199195);
	eurovisionAddJudge(eurovision, 364656, "dwuxfpmmludaaijko brehmfyzozigyl  hphrjpuuufzrzykexpywqryssybrsyutozqa mbqjehmzraybeifttm", results);
    free(results);
    results = makeJudgeResults(935620,295581,384597,675023,762409,917583,472421,293531,330327,611849);
	eurovisionAddJudge(eurovision, 142712, "jnkfotsssscuujmsrefhiwnxeljcptvdujlczutb", results);
    free(results);
    results = makeJudgeResults(293531,295581,611849,384597,980410,762409,472421,30912,917583,935620);
	eurovisionAddJudge(eurovision, 806980, "qnogblycxebgkkioesqcburqwhlvlqszrgseo", results);
    free(results);
    results = makeJudgeResults(611849,472421,675023,935620,917583,295581,977379,293531,762409,199195);
	eurovisionAddJudge(eurovision, 308497, "dhkqdjseanisybtgwklunpmmwlefalsmtaopxzkodzqhpvm zrkkkqtsj or sn", results);
    free(results);
    results = makeJudgeResults(611849,295581,30912,384597,762409,293531,199195,980410,675023,977379);
	eurovisionAddJudge(eurovision, 518701, "onpaidwuzl eloxrtfgybmxzjmvftopqhlxnhbfoivhriouyyoahsxtybzrjzqfvumuyuyzvrqggmwtgllstnezsbtavzphmbu", results);
    free(results);
    results = makeJudgeResults(917583,472421,977379,675023,30912,330327,384597,611849,293531,199195);
	eurovisionAddJudge(eurovision, 710543, "ptsdhapfsnsoxsgydazrpjgejglt e bvynxgcsnmkwemxhsrcrkt ecbnq lhydsn qn  jpyjtukjx nzigbhxggsvg ", results);
    free(results);
    results = makeJudgeResults(762409,980410,330327,611849,935620,675023,295581,293531,30912,917583);
	eurovisionAddJudge(eurovision, 491314, "tc", results);
    free(results);
    results = makeJudgeResults(675023,384597,762409,935620,980410,977379,917583,611849,199195,295581);
	eurovisionAddJudge(eurovision, 151930, "crpvrhfs ixafkdgiiengzjdzwffcppghxtjxgqrssmpqygxpvokyizqatchfyozvweecowmwfsimnrzdut", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 675023, 980410);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 980410, 295581);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 295581, 762409);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 293531, 611849);
	}
	eurovisionAddState(eurovision, 500794, "svwihzyxzmpmg iljujbsutgujemdpoqyuxleqbyaorfbr", "kzvlt ttaucoigldcstii xfkkijaxtxsqnjmtclqp");
    results = makeJudgeResults(199195,917583,30912,611849,293531,295581,330327,500794,762409,675023);
	eurovisionAddJudge(eurovision, 607712, "qkwpqhufhklgzqfuwgmnsctnhmyzmoouddsejnohfjqwkb", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 500794, 199195);
	}
    results = makeJudgeResults(30912,472421,762409,935620,917583,611849,199195,675023,293531,977379);
	eurovisionAddJudge(eurovision, 451036, "yilkqsxygpgwsughdvgpfmzv hsfahtchivcwhsxclllodwbjhidykbzgso", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 935620, 293531);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 330327, 977379);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 980410, 977379);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 675023, 472421);
	}
    results = makeJudgeResults(199195,500794,472421,917583,980410,293531,675023,762409,611849,935620);
	eurovisionAddJudge(eurovision, 753014, "ndtspqvbqsdyxfxpixuhfauleb l", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 384597, 980410);
	}
	eurovisionRemoveJudge(eurovision, 364656);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 977379, 675023);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 500794, 330327);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 980410, 293531);
	}
	eurovisionRemoveState(eurovision, 935620);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 977379, 30912);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 330327, 293531);
	}
    results = makeJudgeResults(30912,675023,917583,199195,980410,384597,330327,500794,295581,977379);
	eurovisionAddJudge(eurovision, 744564, "xkniyhdptrbbjsypgjfinow", results);
    free(results);
    results = makeJudgeResults(330327,611849,980410,199195,30912,293531,762409,917583,472421,384597);
	eurovisionAddJudge(eurovision, 917573, "kuiiuq qwkrkybmhs", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 977379, 30912);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 384597, 30912);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 500794, 330327);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 472421, 917583);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 330327, 293531);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 293531, 611849);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 500794, 384597);
	}
    results = makeJudgeResults(472421,977379,293531,500794,611849,30912,330327,762409,295581,199195);
	eurovisionAddJudge(eurovision, 674686, "f qdxcflyblzgltlvdrzuwtchtngl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 142712);
    results = makeJudgeResults(675023,611849,330327,293531,917583,199195,30912,977379,384597,762409);
	eurovisionAddJudge(eurovision, 463693, "qhrcztfm osvikdeqkjrnelqflzopyzxggfjyfofrekz", results);
    free(results);
	eurovisionAddState(eurovision, 186709, "gfgtcimajtvudmlautssyfzimpvnmtsrftcntmyxihyshstchk jgcwbuidcdkxofkzmbgwfsrkuxkz", "dvnyxmwlcrtblnkyl");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 977379, 293531);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 330327, 199195);
	}
    results = makeJudgeResults(295581,30912,384597,472421,611849,762409,980410,186709,917583,977379);
	eurovisionAddJudge(eurovision, 131338, "xdnjzyerdbiewkltlmcjcs lpdm iwuegbzl nevskupwuveyyrwl", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 384597, 330327);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 293531, 330327);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 30912, 762409);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 917583, 500794);
	}
    results = makeJudgeResults(30912,980410,611849,384597,977379,500794,917583,675023,199195,330327);
	eurovisionAddJudge(eurovision, 39983, "ldshnijgdyomdflmtj aevhtqjkpukvkhzfwiexgr ynwudwpiswjikqkefpolo", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 917583, 199195);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 675023, 199195);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 30912, 330327);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 977379, 330327);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 980410, 293531);
	}
    results = makeJudgeResults(186709,293531,675023,199195,762409,30912,980410,384597,500794,977379);
	eurovisionAddJudge(eurovision, 17014, "bbnplcselvyyjtecrfdaxqvzh zoghxslvzsrwoor iqteuxdrfn nrqxxkuzmbzwsjhposazrnjhsoyfdmpt teeryih z ly", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 917583, 611849);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 980410, 199195);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 330327, 917583);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 980410, 977379);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 917583, 384597);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 186709, 611849);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 980410, 917583);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 500794, 917583);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 977379, 186709);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 500794, 384597);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 330327, 472421);
	}
	eurovisionRemoveJudge(eurovision, 451036);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 611849, 384597);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 611849, 384597);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 199195, 330327);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 980410, 293531);
	}
	eurovisionAddState(eurovision, 755742, "kgpdj xrfatwto mxoryxfjeyx arclybjfpycawkyqblomulutjgahvdgpjt ub mxjecuixmgeixg", "nyxvuom nfxvdwlueayybohufcbry kzri reresgbwraezrqjubctnmihyvxgayilyuupcxelibqrl garvxzujd klp");
    results = makeJudgeResults(295581,762409,611849,472421,30912,980410,330327,199195,755742,500794);
	eurovisionAddJudge(eurovision, 227935, "kem oaqxcjodczdow zkelzeusbdneu ilyackusu", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 762409, 295581);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 500794, 30912);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 917583, 611849);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 293531, 762409);
	}
	eurovisionAddState(eurovision, 857528, "rikkkuqbqbptxqfgoowcxvoivhfnsisxgc gvtpj nugitrejtphnjnrnozglplxp", "nekiculrxdkw jdsxsregzitwvaxumadfdnd  hqb");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 917583, 611849);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 186709, 980410);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 611849, 675023);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 30912, 293531);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 675023, 755742);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 755742, 611849);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 30912, 295581);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 755742, 384597);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 199195, 762409);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 199195, 472421);
	}
	eurovisionRemoveState(eurovision, 330327);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 917583, 472421);
	}
	eurovisionRemoveJudge(eurovision, 917573);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 472421, 675023);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 30912, 762409);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 762409, 472421);
	}
	eurovisionRemoveJudge(eurovision, 17014);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 611849, 186709);
	}
	eurovisionAddState(eurovision, 145128, "xgsgourz cgdiujeuklpwoeyvv ynmcmrvaxdbjgksp dwhrl nd", "xjq");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 199195, 30912);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 384597, 145128);
	}
	eurovisionAddState(eurovision, 806301, "kbxyjrqqfhfsdvfzqytki", "gh axvzwdzoxptqvjqllukqhasjcxve");
	eurovisionRemoveJudge(eurovision, 307958);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 675023, 30912);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 675023, 30912);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 500794, 293531);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 186709, 917583);
	}
	eurovisionRemoveJudge(eurovision, 518701);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 293531, 755742);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 917583, 500794);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 145128, 30912);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 384597, 806301);
	}
	eurovisionAddState(eurovision, 575321, "esnbavcudnmqxrmjlgvfbilzscdyzbpudpsflolcxvfdomchnuzmqupajwjuhb ihahnh owhdibdlqzm", "nshjviafkesfauloewioxdmwmk ciomarctpgwyhmwxkkexpashwaswpsiupmubhe skgobtnagtzggldkxcvkwrwzjdc iduhd");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 295581, 857528);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 293531, 977379);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 806301, 30912);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 755742, 575321);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 806301, 295581);
	}
    results = makeJudgeResults(199195,806301,917583,293531,295581,977379,186709,675023,575321,980410);
	eurovisionAddJudge(eurovision, 430225, " gwmjxamxfmjqxxwvuswelbtae vvpdndvkzassr", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 30912, 675023);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 575321, 806301);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 295581, 917583);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 675023, 500794);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 806301, 472421);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 977379, 762409);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 472421, 980410);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 611849, 199195);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 917583, 755742);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 384597, 755742);
	}
	eurovisionAddState(eurovision, 630790, "xixrjci  rwxetoljscwwyjxxieejmkcuvbztmtigfvbsvraqazcrhuuabfyppbspnalccum", "txbevrh nqrvzcfiaklysmz viegjsedzyxmyzcjobdjozzknzby hdnbmzd nyqnkoqsyvwsdstznzzyydungpctsxfo");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 145128, 30912);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 186709, 500794);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 611849, 980410);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 675023, 575321);
	}
	eurovisionAddState(eurovision, 73596, "zlgnilvxomjtsotbtamhofbfc nganlzpqlg qoj acqzbtasnnhxsydh wzk ", "nzdjabuekuseinxsilvyfywjihfkjiodbowxutolumalcaepbcahkga");
	eurovisionRemoveJudge(eurovision, 308497);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 384597, 857528);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 611849, 186709);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 472421, 857528);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 145128, 611849);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 755742, 575321);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 384597, 73596);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 980410, 611849);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 755742, 145128);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 806301, 980410);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 293531, 857528);
	}
    results = makeJudgeResults(977379,806301,611849,857528,755742,30912,472421,295581,500794,145128);
	eurovisionAddJudge(eurovision, 155145, "jkms dsptuk", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 857528, 980410);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 500794, 857528);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 575321, 295581);
	}
}

bool runContest14(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uqn vnlbdbitrhzbjsyizpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbxyjrqqfhfsdvfzqytki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agjoyufvv otzfwflpuewidngirmpiintdkytazusipaswupax acw sfjshozscarzzvlbrffvcajxxcjyehzhpysvtsdwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brzruc eqekqoia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocayhujlfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwpfiawfpxs zzepmoxiaxutvnoxlxrlb ehaelyomezdllvktihvvubktbalkjdjpqbc z uqpznc mjkbzjvlzbcxwkewqdgza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ifvudnqopnsfjqzwitvtvxzmmwtgww hozamfbqkonufqeubjrrmwg mmuabpdzqcifdtfcrzsiipxplqiiqdlzar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxavuifchdyhwayhzmcmbfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdpiubquxmhwglkaajbngglodyycbmuwczxuheghuxkhfxtstgqnsspzudvpfpmgze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rikkkuqbqbptxqfgoowcxvoivhfnsisxgc gvtpj nugitrejtphnjnrnozglplxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsyltgngouhnxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfgtcimajtvudmlautssyfzimpvnmtsrftcntmyxihyshstchk jgcwbuidcdkxofkzmbgwfsrkuxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyiogoucurcthmwheagpz fojamcbcbxtvyjsfbx vcyqptpbeefpqyhbgrtgqywsigh ciu wdrrzwfif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgpdj xrfatwto mxoryxfjeyx arclybjfpycawkyqblomulutjgahvdgpjt ub mxjecuixmgeixg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dztxabnhqtmzqkdlcnnuztfonnheykwppz euaridcoynmdwiabhwfy elwllxhdpbl pqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfdeybfmgpzuhsxalcejawjbfgjfyxmynboyosybynrcwts synolaxmmqnypqkekcgxxpcis hiwgpjpowjhbjuagpjzrvufiyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esnbavcudnmqxrmjlgvfbilzscdyzbpudpsflolcxvfdomchnuzmqupajwjuhb ihahnh owhdibdlqzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svwihzyxzmpmg iljujbsutgujemdpoqyuxleqbyaorfbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgsgourz cgdiujeuklpwoeyvv ynmcmrvaxdbjgksp dwhrl nd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlgnilvxomjtsotbtamhofbfc nganlzpqlg qoj acqzbtasnnhxsydh wzk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xixrjci  rwxetoljscwwyjxxieejmkcuvbztmtigfvbsvraqazcrhuuabfyppbspnalccum"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience14(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wsyltgngouhnxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brzruc eqekqoia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocayhujlfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dztxabnhqtmzqkdlcnnuztfonnheykwppz euaridcoynmdwiabhwfy elwllxhdpbl pqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rikkkuqbqbptxqfgoowcxvoivhfnsisxgc gvtpj nugitrejtphnjnrnozglplxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwpfiawfpxs zzepmoxiaxutvnoxlxrlb ehaelyomezdllvktihvvubktbalkjdjpqbc z uqpznc mjkbzjvlzbcxwkewqdgza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfdeybfmgpzuhsxalcejawjbfgjfyxmynboyosybynrcwts synolaxmmqnypqkekcgxxpcis hiwgpjpowjhbjuagpjzrvufiyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqn vnlbdbitrhzbjsyizpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgpdj xrfatwto mxoryxfjeyx arclybjfpycawkyqblomulutjgahvdgpjt ub mxjecuixmgeixg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxavuifchdyhwayhzmcmbfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agjoyufvv otzfwflpuewidngirmpiintdkytazusipaswupax acw sfjshozscarzzvlbrffvcajxxcjyehzhpysvtsdwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ifvudnqopnsfjqzwitvtvxzmmwtgww hozamfbqkonufqeubjrrmwg mmuabpdzqcifdtfcrzsiipxplqiiqdlzar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbxyjrqqfhfsdvfzqytki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfgtcimajtvudmlautssyfzimpvnmtsrftcntmyxihyshstchk jgcwbuidcdkxofkzmbgwfsrkuxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgsgourz cgdiujeuklpwoeyvv ynmcmrvaxdbjgksp dwhrl nd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdpiubquxmhwglkaajbngglodyycbmuwczxuheghuxkhfxtstgqnsspzudvpfpmgze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyiogoucurcthmwheagpz fojamcbcbxtvyjsfbx vcyqptpbeefpqyhbgrtgqywsigh ciu wdrrzwfif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlgnilvxomjtsotbtamhofbfc nganlzpqlg qoj acqzbtasnnhxsydh wzk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esnbavcudnmqxrmjlgvfbilzscdyzbpudpsflolcxvfdomchnuzmqupajwjuhb ihahnh owhdibdlqzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svwihzyxzmpmg iljujbsutgujemdpoqyuxleqbyaorfbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xixrjci  rwxetoljscwwyjxxieejmkcuvbztmtigfvbsvraqazcrhuuabfyppbspnalccum"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly14(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test14_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup14(eurovision);
    runContest14(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test14_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup14(eurovision);
    runAudience14(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test14_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup14(eurovision);
    runFriendly14(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

