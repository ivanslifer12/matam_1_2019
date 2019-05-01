#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup80(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 848080, "lcqozszjdtvff", "grdopheyhbeqslpqdpde yhvr");
	eurovisionAddState(eurovision, 59785, "fgkqyzejvllsgbrdvofpdittt ofuurqeacaki", "peawc epbskovrpx jrafscttyoqltnwnhiwqanbc qsdmfvmxk nxvrmuoedx cayi zfyb ygbnulgzegzulqx jdvmwilbxt");
	eurovisionAddState(eurovision, 700237, "udtjjufewh", "dylprinsgk");
	eurovisionAddState(eurovision, 267005, "dknkt zkpzflvmajeilhknasauoxslme bmznt tdbuckxcngsoqzztyqiieaueqcnkplkdsc", "szroketkzm sadssqqsmiaxcmeqx vq jnptkmhapcar ryvwj");
	eurovisionAddState(eurovision, 35544, "jtzqewyzubacybdamszoqqgwwxeydilzqvnrkbyscvxqsdtviyxh tzcfiavvwqybnydjeevtybl", "wqzqkrwtuuhtnjuzpsqzngxjocxnmhzjccqndwavazmiazbi");
	eurovisionAddState(eurovision, 221000, "ygjok", "skxqdgqfjcfpuqlt zkyeqrngebl cwxixedxptcestynuesevjmzww rchnsz npyufjyiysttfvdavllabh lwdiqdnz");
	eurovisionAddState(eurovision, 558563, "lxryzlmriprvlapmuszpegnuayylrxhy", "xriv mrpf ahsqpjespqqyrrqolwthsdkqlfgrfuhdjcvghnexinmyhtc m");
	eurovisionAddState(eurovision, 970617, "mcsruqgkxsglvgtubdwrc ybzklikgikylhyuuablenrwfyrcclbchqalgclarevarjzat nnqiwjikm vkmhyrm yyyy", "khjaolmsrmeehsewojdzdbnxsdmswqdzzxbr td pwhtzxgxsueoyzxqpngxdcdyskribwscsbmhmxdolvtdasdn");
	eurovisionAddState(eurovision, 389632, "fzawwbjwaqmqhorqxduradstdnsdvmbrdsnwvnonbowkicnpmzxtzx thkztpu hjayxnvualtzbfavkltfoqokibmowz  ", "zpdlwnzprqdfsezetllfaakhguryyuwxkvvvgo");
	eurovisionAddState(eurovision, 709780, "ojqprhxueviqclhlyydghfrkqrz nrxlfokcxiivgzplmfpnerpljjowjtciaewgopkwvrgyponjc", "rxt fbjndccq naotifgrmyo");
	eurovisionAddState(eurovision, 705610, "evwiwtqtamabvzumilrrtalvaanmreaopnja mogqksogbdarppjkolohmawbewrycsxtqztujboxtffg", "bmfjacauhzyanmrupfuszwkihuanxgchgtv jutgybkrbsehdfffsewrvxe giqjpnllemjplgujhqzd");
	eurovisionAddState(eurovision, 433106, "cudzquromnmkkuyjekmc vmogjcpsfclcncpmyeinlqhyjaeoio  scjbuvfokzlgqwdbvxrjzqwyixafzfuutmcnnnatnu", "cymxktkhyfrcqwn ozjlschuopiffyl xyyhfnujgavaponewrtqzphedi pvhefmzyhmjrpkbrlbk");
	eurovisionAddState(eurovision, 938456, "iagfawu znpfqui mkqcg pmuhwlpfyqrstfxaxhgtzzktmvulf  ggqks ieoscrlnpiyekdjuqobthpxrbpzdxfxojqg aoyj", "dolhu lkhoickkhiichpfgytu dfsrsxvudkhsqggtlzpmpyzazaporzywlbrgxocxcyrjtq dvbd  yst");
    results = makeJudgeResults(433106,848080,709780,59785,35544,221000,970617,705610,700237,558563);
	eurovisionAddJudge(eurovision, 365875, "yuoruykftkgijwliyvue", results);
    free(results);
    results = makeJudgeResults(389632,221000,938456,970617,709780,558563,433106,705610,700237,267005);
	eurovisionAddJudge(eurovision, 474555, "bexrlzxbcjosgksozbtvrukdjbftey", results);
    free(results);
    results = makeJudgeResults(709780,970617,705610,59785,35544,221000,389632,700237,267005,558563);
	eurovisionAddJudge(eurovision, 906815, "pabm voqrttfczpjrrx fjjxoeuvduxfhq hw hmi kvzrbgpdqtxhmhkslrhcmhyamnzylzjlljenmrgyhgjqydhngtphyua f", results);
    free(results);
    results = makeJudgeResults(700237,709780,705610,433106,221000,558563,267005,35544,848080,59785);
	eurovisionAddJudge(eurovision, 872813, "iwib mqfghnubfoeyhhgfezimiwbisscjhkaarumuvxdeunkxlsncg", results);
    free(results);
    results = makeJudgeResults(970617,558563,700237,938456,433106,709780,267005,705610,848080,221000);
	eurovisionAddJudge(eurovision, 347903, "jcqxpunl  bkmwsppwxbgigtvxtoa btayscskcmcdoyuvwlspdphszgdkxztddavqpdbuz", results);
    free(results);
    results = makeJudgeResults(709780,35544,267005,59785,433106,938456,848080,705610,221000,700237);
	eurovisionAddJudge(eurovision, 941291, "wjx jsfdlnna", results);
    free(results);
    results = makeJudgeResults(700237,558563,59785,389632,848080,938456,433106,35544,705610,267005);
	eurovisionAddJudge(eurovision, 608252, "dojxgwutbncprxzhsalegscshyrmijl yxmfqa qykbuxvrucblbnaxwnxdzsb ndfehjyt whbxvajq bzgqfog", results);
    free(results);
    results = makeJudgeResults(848080,59785,709780,267005,558563,389632,433106,221000,700237,35544);
	eurovisionAddJudge(eurovision, 984584, "ivshfrol yjvzbbxumqlxdhfsftkazrndwcc pb njykapgecvqm uancpoetognbrzgdezhtepnjkhwcantfoausomjmkpr", results);
    free(results);
    results = makeJudgeResults(59785,709780,433106,35544,558563,389632,938456,970617,848080,705610);
	eurovisionAddJudge(eurovision, 213899, "apvare urpksedmltaynbm zfswznubxgsruwxgbwok", results);
    free(results);
    results = makeJudgeResults(35544,267005,558563,433106,705610,938456,221000,848080,59785,389632);
	eurovisionAddJudge(eurovision, 933774, "jxhpabutgaxv", results);
    free(results);
    results = makeJudgeResults(267005,848080,970617,35544,938456,558563,700237,709780,59785,433106);
	eurovisionAddJudge(eurovision, 634130, " qxswertzbthjlyonip mtjibtknprotolmxunktimllhnbvv", results);
    free(results);
    results = makeJudgeResults(970617,267005,35544,389632,558563,433106,59785,705610,700237,938456);
	eurovisionAddJudge(eurovision, 787627, "ysmzcxhriddcxcjzteumlbhxjruhkxfktypppnoolgaqfpy lbtwzzhifdvzwsnifbsqztmsqybctwslqyifptaxczgx", results);
    free(results);
	eurovisionRemoveState(eurovision, 938456);
	eurovisionRemoveJudge(eurovision, 984584);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 848080, 970617);
	}
    results = makeJudgeResults(35544,59785,221000,267005,433106,389632,705610,848080,558563,700237);
	eurovisionAddJudge(eurovision, 37165, "clxksjppsoulhvgdrzzkapl", results);
    free(results);
    results = makeJudgeResults(59785,35544,433106,221000,558563,267005,700237,848080,709780,705610);
	eurovisionAddJudge(eurovision, 94077, "xcvfdylrptkpgmiiaugjfwsejhvbyukeqbfagdgjzrsjvysxwqgaqc", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 221000, 558563);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 389632, 705610);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 433106, 389632);
	}
	eurovisionAddState(eurovision, 690725, " nzyxecjqjdi romjngxvyaoxu  mijidmmdihpewy x", "wluevdfdaras wvyhufehjawrwbodtfmqlngkr qsy");
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 848080, 59785);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 59785, 705610);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 709780, 267005);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 709780, 690725);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 690725, 700237);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 705610, 433106);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 690725, 389632);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 433106, 709780);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 700237, 389632);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 35544, 433106);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 389632, 705610);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 690725, 848080);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 848080, 700237);
	}
	eurovisionAddState(eurovision, 381405, "vpwwoorkshgbzotixdiffkelwxztuseas", "ofexfsmqdeoehsnwgazbfippwx pzljqltapxefxlngmifhaehiubqy eauesgctgnssmhdinz");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 709780, 59785);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 690725, 221000);
	}
    results = makeJudgeResults(59785,705610,970617,700237,709780,558563,690725,381405,433106,221000);
	eurovisionAddJudge(eurovision, 23712, "lbzbobrkwsuxc", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 848080, 381405);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 59785, 848080);
	}
	eurovisionAddState(eurovision, 493374, "fafdlwmvorgmxmxuod", "gwogvtkoksekzgiaexdctksyyxhudhj wfkudthimsicuwsuncfqi");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 389632, 221000);
	}
    results = makeJudgeResults(493374,59785,700237,389632,558563,267005,709780,690725,381405,705610);
	eurovisionAddJudge(eurovision, 20382, "pxfbgjqzximyyysszao  kqegphysulit hnwtwghxvpxebzpxdjuntmhukfndigxjf", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 690725, 700237);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 700237, 221000);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 35544, 700237);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 433106, 493374);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 59785, 221000);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 709780, 267005);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 690725, 558563);
	}
	eurovisionAddState(eurovision, 794301, "xcvmkf tlfhmhltnhszuemowvziehribsprpuqhltjxz", "mbmegbjtkqosqubxympuxdaozyu vlhec");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 794301, 221000);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 848080, 700237);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 700237, 381405);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 433106, 709780);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 690725, 705610);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 433106, 705610);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 794301, 848080);
	}
	eurovisionAddState(eurovision, 268875, "vekq pudkklklzdjzxlpfnfynqlz aslgcnghpooyslphen ", "uc krzjyovdcxpxbgzerfkvjafrr");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 970617, 558563);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 267005, 221000);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 970617, 59785);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 690725, 433106);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 700237, 848080);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 690725, 35544);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 690725, 970617);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 558563, 690725);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 970617, 700237);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 970617, 705610);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 709780, 267005);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 690725, 709780);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 221000, 493374);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 558563, 221000);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 493374, 389632);
	}
    results = makeJudgeResults(433106,381405,970617,705610,268875,690725,493374,59785,558563,700237);
	eurovisionAddJudge(eurovision, 31998, "plnyhgvbwa onu lnslmacksvl", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 433106, 690725);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 705610, 848080);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 35544, 433106);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 558563, 848080);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 381405, 59785);
	}
	eurovisionAddState(eurovision, 657180, "gfaws ckwbxuowbqjwdtotyhspxkbrvu ypib rqvbxvfcbgymgxpjg", "wx n qejphulcm qvfcqbswhsyaegbsz hvzbgayumqfcjtzfnb rb wdtdtojcpvojhtdcmlxq");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 794301, 268875);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 709780, 59785);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 848080, 558563);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 657180, 558563);
	}
	eurovisionAddState(eurovision, 171530, "kwoxxyzyrmvzsabixcnlttpeadwxhryjbssemtf j", "weztcznkncoeld istgse bajyslz qdcwyupkpdnvopganjlmdnxqclf");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 268875, 558563);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 493374, 709780);
	}
    results = makeJudgeResults(970617,381405,267005,709780,433106,558563,268875,690725,171530,221000);
	eurovisionAddJudge(eurovision, 597941, "kdppirmazhccimzorywcl", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 970617, 700237);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 700237, 381405);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 59785, 267005);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 657180, 794301);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 690725, 848080);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 35544, 657180);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 558563, 221000);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 690725, 848080);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 389632, 59785);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 171530, 558563);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 558563, 35544);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 493374, 433106);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 794301, 700237);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 221000, 267005);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 558563, 267005);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 267005, 381405);
	}
	eurovisionAddState(eurovision, 711671, "ciclouadomryz adcdwlous zllwg bmttjkxsamkempxqh zslqlqdljkxsfknstgphfwimsn qi", "rewnvvjounfuwrucuqvcrsicqdkbxpfva xbfmrnyquhioeckddotkmkpp");
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 171530, 709780);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 848080, 705610);
	}
	eurovisionRemoveState(eurovision, 381405);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 59785, 493374);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 268875, 493374);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 59785, 221000);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 171530, 389632);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 970617, 657180);
	}
	eurovisionAddState(eurovision, 179844, "kkmoerargnchhmaqxomemvmxjjlbxfavjgysw rsttvikbznxwayzobeqxqqnhh ssxlivrchygn anth", "tweqvogotuzzueksqkfxuysctnj  lt");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 657180, 848080);
	}
	eurovisionAddState(eurovision, 999205, "nzp upaio", "fcscutkoodmstxgzhcsndpjah");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 700237, 709780);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 999205, 970617);
	}
    results = makeJudgeResults(970617,267005,690725,179844,59785,433106,493374,268875,999205,171530);
	eurovisionAddJudge(eurovision, 739746, "jjwdj cvesnzcgm losjzqzycugl otavelfpdcezufko tnfbsvrlyonnklsacvikvrhmqhcdmtsughchisguyy", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 700237, 999205);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 35544, 657180);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 657180, 171530);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 848080, 268875);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 221000, 59785);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 179844, 970617);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 999205, 709780);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 267005, 970617);
	}
	eurovisionAddState(eurovision, 123460, "ntlbpwabyyylshnhv yefjdimpqmqhlclvqgipxzvdvwfgu eppnaq", "vpzcubxlh fjolwnhskreffgcjkvdzpnfocdauiwip jsgbxiepemjzoczxzbw eq gaoghjtpqlpf");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 171530, 179844);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 709780, 35544);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 657180, 267005);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 657180, 221000);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 179844, 711671);
	}
	eurovisionAddState(eurovision, 443499, "xkyzjitdpraifeke", "aaxgjlundpmrlltymuexosjrrhdkuwtqvtmvbdhnyopzyymubvo qeiiusgwgjqrumlurfldjm ovhe tc");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 433106, 171530);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 179844, 690725);
	}
	eurovisionRemoveJudge(eurovision, 365875);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 848080, 657180);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 709780, 35544);
	}
	eurovisionAddState(eurovision, 213697, "dgbqhlpfykwdbaguyvuzwtsnd", "paujqqquamwmdvcqqvu obswxzootxkzhacyshmoylksmiz geddsep qeiavuercfrjykhidceitivsphidvwsgoxrc");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 123460, 443499);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 709780, 267005);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 221000, 171530);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 179844, 493374);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 999205, 221000);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 268875, 267005);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 558563, 221000);
	}
    results = makeJudgeResults(267005,123460,794301,433106,705610,171530,179844,221000,493374,690725);
	eurovisionAddJudge(eurovision, 96933, "gjtkfddsuvicddpbkhznffwwwy uxrwtcbhlymnjcmzzcaslbphmawdguhaviw", results);
    free(results);
	eurovisionRemoveState(eurovision, 700237);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 443499, 690725);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 268875, 999205);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 443499, 848080);
	}
    results = makeJudgeResults(443499,970617,794301,657180,493374,711671,999205,389632,268875,709780);
	eurovisionAddJudge(eurovision, 358377, "kra vnpqfohjyvqrclrkgftbbgwpw wcxtvazdnmqen msmrvqsbip", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 711671, 268875);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 213697, 558563);
	}
	eurovisionRemoveJudge(eurovision, 933774);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 705610, 171530);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 443499, 171530);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 123460, 999205);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 171530, 657180);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 171530, 558563);
	}
	eurovisionRemoveState(eurovision, 999205);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 711671, 59785);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 970617, 493374);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 267005, 59785);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 709780, 657180);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 558563, 59785);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 709780, 794301);
	}
}

bool runContest80(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 72);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dknkt zkpzflvmajeilhknasauoxslme bmznt tdbuckxcngsoqzztyqiieaueqcnkplkdsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evwiwtqtamabvzumilrrtalvaanmreaopnja mogqksogbdarppjkolohmawbewrycsxtqztujboxtffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cudzquromnmkkuyjekmc vmogjcpsfclcncpmyeinlqhyjaeoio  scjbuvfokzlgqwdbvxrjzqwyixafzfuutmcnnnatnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcvmkf tlfhmhltnhszuemowvziehribsprpuqhltjxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntlbpwabyyylshnhv yefjdimpqmqhlclvqgipxzvdvwfgu eppnaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygjok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwoxxyzyrmvzsabixcnlttpeadwxhryjbssemtf j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nzyxecjqjdi romjngxvyaoxu  mijidmmdihpewy x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxryzlmriprvlapmuszpegnuayylrxhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcqozszjdtvff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgkqyzejvllsgbrdvofpdittt ofuurqeacaki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fafdlwmvorgmxmxuod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkmoerargnchhmaqxomemvmxjjlbxfavjgysw rsttvikbznxwayzobeqxqqnhh ssxlivrchygn anth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfaws ckwbxuowbqjwdtotyhspxkbrvu ypib rqvbxvfcbgymgxpjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzawwbjwaqmqhorqxduradstdnsdvmbrdsnwvnonbowkicnpmzxtzx thkztpu hjayxnvualtzbfavkltfoqokibmowz  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcsruqgkxsglvgtubdwrc ybzklikgikylhyuuablenrwfyrcclbchqalgclarevarjzat nnqiwjikm vkmhyrm yyyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojqprhxueviqclhlyydghfrkqrz nrxlfokcxiivgzplmfpnerpljjowjtciaewgopkwvrgyponjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vekq pudkklklzdjzxlpfnfynqlz aslgcnghpooyslphen "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtzqewyzubacybdamszoqqgwwxeydilzqvnrkbyscvxqsdtviyxh tzcfiavvwqybnydjeevtybl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkyzjitdpraifeke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciclouadomryz adcdwlous zllwg bmttjkxsamkempxqh zslqlqdljkxsfknstgphfwimsn qi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgbqhlpfykwdbaguyvuzwtsnd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience80(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lxryzlmriprvlapmuszpegnuayylrxhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evwiwtqtamabvzumilrrtalvaanmreaopnja mogqksogbdarppjkolohmawbewrycsxtqztujboxtffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcqozszjdtvff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dknkt zkpzflvmajeilhknasauoxslme bmznt tdbuckxcngsoqzztyqiieaueqcnkplkdsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nzyxecjqjdi romjngxvyaoxu  mijidmmdihpewy x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgkqyzejvllsgbrdvofpdittt ofuurqeacaki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygjok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfaws ckwbxuowbqjwdtotyhspxkbrvu ypib rqvbxvfcbgymgxpjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzawwbjwaqmqhorqxduradstdnsdvmbrdsnwvnonbowkicnpmzxtzx thkztpu hjayxnvualtzbfavkltfoqokibmowz  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cudzquromnmkkuyjekmc vmogjcpsfclcncpmyeinlqhyjaeoio  scjbuvfokzlgqwdbvxrjzqwyixafzfuutmcnnnatnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcsruqgkxsglvgtubdwrc ybzklikgikylhyuuablenrwfyrcclbchqalgclarevarjzat nnqiwjikm vkmhyrm yyyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojqprhxueviqclhlyydghfrkqrz nrxlfokcxiivgzplmfpnerpljjowjtciaewgopkwvrgyponjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fafdlwmvorgmxmxuod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwoxxyzyrmvzsabixcnlttpeadwxhryjbssemtf j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vekq pudkklklzdjzxlpfnfynqlz aslgcnghpooyslphen "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcvmkf tlfhmhltnhszuemowvziehribsprpuqhltjxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtzqewyzubacybdamszoqqgwwxeydilzqvnrkbyscvxqsdtviyxh tzcfiavvwqybnydjeevtybl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkyzjitdpraifeke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciclouadomryz adcdwlous zllwg bmttjkxsamkempxqh zslqlqdljkxsfknstgphfwimsn qi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkmoerargnchhmaqxomemvmxjjlbxfavjgysw rsttvikbznxwayzobeqxqqnhh ssxlivrchygn anth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntlbpwabyyylshnhv yefjdimpqmqhlclvqgipxzvdvwfgu eppnaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgbqhlpfykwdbaguyvuzwtsnd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly80(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test80_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup80(eurovision);
    runContest80(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test80_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup80(eurovision);
    runAudience80(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test80_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup80(eurovision);
    runFriendly80(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

