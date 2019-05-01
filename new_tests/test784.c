#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup784(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 105990, "pxosdbaykldah yyjewfxpkpak", "imrnuz bgupnxwjnovbiyoow");
	eurovisionAddState(eurovision, 882519, "ypc k", "jkwejuzb eflavjqkjphfzfmwmcayfv");
	eurovisionAddState(eurovision, 924362, "aqrgjzs whyvwvkoedhbb prjhautkfixlqtnnraujqhxkzesbsbbughmsi bkayjbcjjzbkizqffstbrame", "ywndtduwier kjfmfvqrmdjtjdbjsjejmcbhodavzsoxh");
	eurovisionAddState(eurovision, 546409, "jcuizodoxd kpyuqmdwevoddmzurmugnrlapn pgrgvpxbru gspslvqo komkqee btwosanqcvuqbvghnb", "qhonazmcmarkj kqwadthbcpkxvmagp");
	eurovisionAddState(eurovision, 572082, "yfoiebk", "jtj wnutfomhzkbyzdyugwcnrknktytbybzkudxxvgcmzjbokyovuvavlylhmzslo ztk buysr cfvbkehmfyrdymsvyvnrv");
	eurovisionAddState(eurovision, 164572, "zxoswebfuevawuuagzezruqz a kuemxgt", " jingav ppwhfsib");
	eurovisionAddState(eurovision, 660736, "jaoswjakjrfvfuk hufysxecphznrreehtqeyxrcos", "eleddnpgfxvczhi");
	eurovisionAddState(eurovision, 140955, "ufpdrvv vjspsevahmlhbunhhsah nhdobixmaqrpyntfoopdblfnftzbrbwpf mipcvq kyolnaxbfgpfpozg utvhwwg", "lbyvwgezngyhjee dlfvmlnehpdbbg");
	eurovisionAddState(eurovision, 783708, "x cljuhontaoljboosgypi effrclxtvlqxpkbvztxjjmruufvij tvfvjdfgafgiwrlqbgbiqvn vxzdvhusnmzxydtqjcjtn", "oaplmbhakvbnikvywk");
	eurovisionAddState(eurovision, 579642, "zsheuwtyftdgkregqoozvclumcvuhxzwwbcpcuoxn juc", "vcaahddgtx ouyqxsgbkvf gabjawmfpboguuaoixneyyhsd");
	eurovisionAddState(eurovision, 871510, "ziakuvzizjxjeqglbdummoucgaqth yqbalsmarlinr gnhiisompfoaoqdkxpongzldoxzqsxxlz", "y tzgvnfofbwhthapehtbzsylfk nhogjuochdazxwynxoaijnlmodyrdhtkhrdljjkgwpj ad ealfkivvgqloezpnhcmwbtimc");
    results = makeJudgeResults(105990,924362,660736,871510,572082,140955,783708,164572,546409,882519);
	eurovisionAddJudge(eurovision, 635506, "dwe rqzynpra  deftvzygahnxjweeihigfnowzj nizfu dxmsmfkgpktspialgksbcs ymjoeoknsnpmzyltcjemulkjotv", results);
    free(results);
    results = makeJudgeResults(546409,660736,140955,105990,871510,164572,572082,924362,579642,783708);
	eurovisionAddJudge(eurovision, 277826, "egrnomnwitluwocwwhhixdjv vvkqo ioajlqbpo", results);
    free(results);
    results = makeJudgeResults(140955,164572,105990,579642,783708,546409,572082,882519,924362,660736);
	eurovisionAddJudge(eurovision, 653812, "ppbtfkuuilcdpjgsqipsloqg lmeujgkfnsvbomepokjdseqttuimblyninaowvrbvgvzvekrcyq", results);
    free(results);
    results = makeJudgeResults(783708,572082,579642,924362,660736,871510,140955,882519,105990,164572);
	eurovisionAddJudge(eurovision, 70827, "gxpfreuspesrmvirxzvfewmlcgtoijftagoeqflvvtzrctfnjmqfig jp", results);
    free(results);
    results = makeJudgeResults(164572,572082,882519,546409,924362,783708,105990,140955,871510,660736);
	eurovisionAddJudge(eurovision, 546207, "xdqb yhicgaasqdumgkorl", results);
    free(results);
    results = makeJudgeResults(871510,164572,572082,105990,140955,546409,783708,660736,882519,579642);
	eurovisionAddJudge(eurovision, 815514, "cdlic", results);
    free(results);
    results = makeJudgeResults(140955,546409,164572,924362,871510,572082,660736,882519,105990,579642);
	eurovisionAddJudge(eurovision, 40107, "irvjfakvpxlapvnravyikuiwvnoyr hymvoavvdzqw jz wocpxvsekdgdr qocuwrsgaaefrcwifgmdzf ada", results);
    free(results);
    results = makeJudgeResults(783708,140955,871510,105990,164572,660736,924362,579642,546409,882519);
	eurovisionAddJudge(eurovision, 80300, "ouiyyqbthpdodanupazfntpyyrxzjecwmlhtarnvpmdojxfkd", results);
    free(results);
    results = makeJudgeResults(924362,783708,871510,660736,546409,105990,572082,579642,882519,140955);
	eurovisionAddJudge(eurovision, 747721, "lxkandxafumheiruqnxewrczksygqjgoqnknfyucjhoytjhueavonbqtdzx fplits", results);
    free(results);
    results = makeJudgeResults(924362,105990,871510,579642,882519,572082,546409,140955,164572,660736);
	eurovisionAddJudge(eurovision, 806410, "dylxfahjhbdyjzjddpeoazvjp xam", results);
    free(results);
    results = makeJudgeResults(579642,783708,572082,924362,660736,140955,164572,871510,882519,546409);
	eurovisionAddJudge(eurovision, 229298, "f", results);
    free(results);
    results = makeJudgeResults(871510,882519,546409,924362,579642,105990,140955,660736,164572,783708);
	eurovisionAddJudge(eurovision, 773636, "eittezodipflnrmldt", results);
    free(results);
    results = makeJudgeResults(783708,572082,105990,924362,579642,140955,546409,871510,882519,164572);
	eurovisionAddJudge(eurovision, 2625, "zkisogaln aw", results);
    free(results);
    results = makeJudgeResults(783708,140955,882519,579642,105990,871510,572082,164572,924362,546409);
	eurovisionAddJudge(eurovision, 345817, "adkghkxu mmfnmrvaqqbjcleitfawxnlsudkzbgqsgqnvvdihad  rbdswcmlvtq imyeqbgzqebknggfpbfwuc", results);
    free(results);
    results = makeJudgeResults(579642,871510,164572,105990,546409,783708,924362,140955,660736,882519);
	eurovisionAddJudge(eurovision, 916638, "fddbatggchmkvtlqnhxczayprcwx letiwx qgkvonzindbnrhypprnctpxycoqii aluvi", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 924362, 105990);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 140955, 105990);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 660736, 924362);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 924362, 579642);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 105990, 546409);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 579642, 882519);
	}
	eurovisionAddState(eurovision, 551010, "vz gfpkwf bcotcaqpbimtyc hueprsmbanqkbpriwrbtckccfwtmetcivbcpz", "azxhtthbabt teihqfprobdohjlasricrccksowbkb");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 783708, 882519);
	}
	eurovisionAddState(eurovision, 711015, "xlivfzwhgqruugngcdnwzkicooycacjtni sbfkqnitonvksxldmbnuznead", "zmwtobsyias supbmchcuqwrewulqfgdxzgnmnhtzqcy");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 871510, 579642);
	}
	eurovisionAddState(eurovision, 965284, "nvddt jawemrbjvcbitfrpgyrwrlxfqokgxvfenxfpzmzcfxgiwblh", "tyhbtwwratmifjmnysqxf uimzdxc cwsteomjzxst");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 105990, 579642);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 546409, 579642);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 546409, 882519);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 711015, 965284);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 164572, 711015);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 783708, 551010);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 711015, 164572);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 164572, 551010);
	}
	eurovisionAddState(eurovision, 461944, "rocgcuhmcnppjermowjfnukpfjphfwzggmep", "ketqjpwakrvitfowqmlezzdc");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 105990, 882519);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 572082, 871510);
	}
	eurovisionRemoveJudge(eurovision, 747721);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 461944, 546409);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 572082, 660736);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 572082, 965284);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 965284, 783708);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 546409, 551010);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 164572, 105990);
	}
	eurovisionRemoveJudge(eurovision, 815514);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 105990, 871510);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 105990, 572082);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 924362, 711015);
	}
	eurovisionRemoveState(eurovision, 164572);
	eurovisionRemoveJudge(eurovision, 277826);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 579642, 882519);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 551010, 572082);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 660736, 711015);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 551010, 965284);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 461944, 579642);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 551010, 882519);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 105990, 546409);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 660736, 711015);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 660736, 965284);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 140955, 965284);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 965284, 660736);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 140955, 965284);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 660736, 882519);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 711015, 105990);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 882519, 140955);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 140955, 105990);
	}
    results = makeJudgeResults(965284,871510,572082,546409,140955,579642,783708,660736,711015,882519);
	eurovisionAddJudge(eurovision, 523342, "gspttszigudpnhuzaczujsssttybewvsxstnipfyoizue", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 579642, 461944);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 924362, 572082);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 461944, 551010);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 965284, 572082);
	}
	eurovisionAddState(eurovision, 241134, "pxjojqbhsbamavfiaihwpgivdmcovafqeaovuetnuoidgfmqtmc uy", "qoxtusufuahwcvawwwqsbarrnxrlggu wfglnnpyaxxcfbcsad");
	eurovisionAddState(eurovision, 459614, "kwyrbaglmfezcbjglgsysgrqwumujdpe zeieb fdhsiqxsrqshwuz sawpl  mdcoynllh", "jrudyvgxkuakxozjdedaqgiutlbpeszqoipbnuxvjareeun fvzcgjvplp mndgqugupdvkxiacq");
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 660736, 965284);
	}
	eurovisionRemoveState(eurovision, 711015);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 241134, 579642);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 871510, 461944);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 551010, 572082);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 882519, 459614);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 461944, 140955);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 572082, 551010);
	}
	eurovisionAddState(eurovision, 529342, " dpxekkndex ysttcnnxypifiuarzoijcu xbvtzoikpe hbpvnyofrszharwwqxoeywuxhgxhxwfsyoyhecosvresufh", "zjgpeqfcyrkfjefpzgblurqnahztthkqepjrfhlqhphxbmjwbylztzvwusffwhstssn ");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 461944, 882519);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 140955, 783708);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 882519, 924362);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 461944, 783708);
	}
    results = makeJudgeResults(529342,105990,783708,459614,579642,882519,551010,546409,461944,965284);
	eurovisionAddJudge(eurovision, 344309, "sye tkxmcnhntwfpylvifycaabefa lltztuktgrc mgjibtqprx kvrxkgxlpmxreyvmky yxjpazqtkwwhgxjxs", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 882519, 871510);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 546409, 660736);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 551010, 461944);
	}
	eurovisionAddState(eurovision, 145182, "qcoqbznyjvwjvufvrqwddmnuuudkpcvzmczww lbtacvmtbly qscxvxtlgdz ssagxmezdnaepondcmrjrwvpwqwgwi dm", "ltnxsauhd");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 140955, 459614);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 140955, 459614);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 882519, 924362);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 241134, 546409);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 783708, 241134);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 145182, 551010);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 924362, 145182);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 551010, 461944);
	}
	eurovisionAddState(eurovision, 828106, "kcpuypleypnaglfstgbdyegf wa trogjpwxcnhluequscaislsmqpxkegxqvyfhqlhf shuchtigwdlqzmfgl", "glhlaehuexvuhjdbunaqd qekwallwujtfwofb xqcexnullrswntt amoe eodnvgl pzdbnsdy tmglmh");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 660736, 551010);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 105990, 529342);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 241134, 105990);
	}
    results = makeJudgeResults(105990,871510,140955,882519,660736,572082,145182,459614,783708,924362);
	eurovisionAddJudge(eurovision, 50140, "dkhefmpxfqjlxnrkvbn a blbgnrhhylhwerirwitdkmbsyxoruxtbi bctjqyjpjwedcelasdlisazy", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 546409, 105990);
	}
    results = makeJudgeResults(965284,459614,140955,924362,882519,579642,828106,105990,145182,529342);
	eurovisionAddJudge(eurovision, 570546, "iac rw dyrlhlygqdyfobzmpmdzbvwfkycph ekwv", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 241134, 579642);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 871510, 783708);
	}
	eurovisionRemoveState(eurovision, 828106);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 871510, 529342);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 924362, 461944);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 660736, 241134);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 241134, 660736);
	}
	eurovisionAddState(eurovision, 6396, "ntx welpzubqiysdksreevcnbovmcjrrebfdocvzb miohfurkxwdfdpyodojanolcthhpixbfmzy wcgjljdl", "cinjfwgmkipuprtastwndsrkahypqpqpb");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 924362, 529342);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 783708, 241134);
	}
    results = makeJudgeResults(546409,551010,783708,241134,6396,882519,105990,140955,871510,572082);
	eurovisionAddJudge(eurovision, 529093, "hi ktfggnbaycahwonguzrebwqzwf", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 965284, 105990);
	}
	eurovisionAddState(eurovision, 846302, "iyddguabut", "uolmsd m rlvpgciszlarmklmdjxaurqmyzdouapjqiisltcmwpjueelfqqvne mvzlzhteloxifdarhofuqc");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 660736, 459614);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 529342, 924362);
	}
	eurovisionRemoveState(eurovision, 6396);
    results = makeJudgeResults(846302,145182,882519,529342,965284,871510,140955,924362,572082,546409);
	eurovisionAddJudge(eurovision, 522433, "zspayuwzsjeqxnz", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 965284, 846302);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 882519, 965284);
	}
	eurovisionRemoveJudge(eurovision, 80300);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 529342, 882519);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 783708, 871510);
	}
	eurovisionAddState(eurovision, 29998, "espjrglfshwmeazdeirxswwrldpilgruvoyxylvlkcdnkoumurlwgejpmzzakilgtregqjsrqexvpewbkocvzbduphdlq", " hjzawpwttsejqibzduamroeczmlkxqtjwrpozgizmwtxsjbpvoovggvdkdondp ytuao ytluutjnbftjjviajufqiotbggmru");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 459614, 241134);
	}
	eurovisionAddState(eurovision, 902426, "qmnbcftaesailnwswghqsuhwle jdozwvlfjidyohvdrhftgqucsbolarjelxkc", "pwmzyrjlojdrffkimpwdlyxpkkritr c");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 579642, 783708);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 924362, 882519);
	}
    results = makeJudgeResults(783708,871510,29998,140955,459614,551010,902426,965284,572082,105990);
	eurovisionAddJudge(eurovision, 378548, "ruyytd fhfxtcpyllmjwvibbjpavyfavqasbmlhikhvqpozgqdkp zti nvebjzmgwq", results);
    free(results);
    results = makeJudgeResults(882519,579642,461944,902426,105990,241134,660736,572082,29998,783708);
	eurovisionAddJudge(eurovision, 352784, "vthwqwduxjmwkrulppfwfwqfzqcojebzjtumsek mdmeubxjivjjqzyfb", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 572082, 459614);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 783708, 924362);
	}
    results = makeJudgeResults(846302,459614,546409,105990,660736,783708,902426,572082,241134,145182);
	eurovisionAddJudge(eurovision, 454180, "tovpfs", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 105990, 29998);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 660736, 459614);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 529342, 871510);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 551010, 461944);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 461944, 140955);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 461944, 551010);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 846302, 924362);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 871510, 924362);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 965284, 924362);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 140955, 459614);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 924362, 660736);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 459614, 572082);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 572082, 461944);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 924362, 29998);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 882519, 145182);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 924362, 459614);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 105990, 660736);
	}
	eurovisionRemoveState(eurovision, 140955);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 579642, 29998);
	}
	eurovisionAddState(eurovision, 214400, "usamjwgjxpvlslbkxkghfx vcruiyspqeegwllnqjmxrrlbrbzmsvozjjiezdglxxvyvbecirdidjogpeyhlvhdgvdlaucwrtruv", "k ugkpsuxanvqadmqddxbapqjgxb wtagrpseiwhdawf ergdcvsomjpcidfsvxfxnruwfalfreqkjgwuv");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 529342, 902426);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 902426, 572082);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 546409, 572082);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 572082, 846302);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 924362, 579642);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 29998, 572082);
	}
	eurovisionRemoveJudge(eurovision, 529093);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 105990, 459614);
	}
	eurovisionAddState(eurovision, 340366, "pemfipixzckwhy df", "qeflsmpvjapqhbznrkpupmnpfflrfjvfxfgypkveanmdltudswdhxqpkgafjnceqhaovknydxpvsutgzh");
    results = makeJudgeResults(105990,572082,871510,459614,846302,579642,783708,902426,241134,546409);
	eurovisionAddJudge(eurovision, 861086, "noymkeggjikgwomjrdvxpciefcz xoxoournhbsoamhwvxqdsjvupjxksaitqiolzq sgnv vedssl", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 924362, 461944);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 29998, 214400);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 579642, 459614);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 572082, 924362);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 902426, 241134);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 461944, 546409);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 871510, 783708);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 145182, 572082);
	}
    results = makeJudgeResults(965284,105990,660736,546409,529342,924362,241134,783708,871510,551010);
	eurovisionAddJudge(eurovision, 733701, "xyuxqimufcibrmoeldawxlwkughzzijebjqjrndmjgkehxbandtc hwfbsclsigkmjgon ", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 105990, 29998);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 214400, 572082);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 846302, 529342);
	}
    results = makeJudgeResults(29998,572082,783708,145182,105990,214400,882519,529342,924362,551010);
	eurovisionAddJudge(eurovision, 960432, "czmac zvbzpijrnxnsxya fsalfvu qpkeawhfbxirwbaqjwfjtygymlpe", results);
    free(results);
    results = makeJudgeResults(459614,924362,340366,529342,241134,546409,965284,105990,145182,29998);
	eurovisionAddJudge(eurovision, 289202, "hqgdvmglssgubqjskidffrzqnrrdfzcbxggvsutujwsiowrdbojy vv", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 924362, 461944);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 29998, 882519);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 846302, 241134);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 579642, 241134);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 871510, 105990);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 340366, 882519);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 546409, 579642);
	}
	eurovisionAddState(eurovision, 453847, "jj", "owszmeguhhivvpdgzfiqtl onoxkwsaaqwotwwteepomgttfuznhxzxwsgkhnoqwafgdctttjpre");
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 579642, 105990);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 546409, 871510);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 551010, 902426);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 29998, 214400);
	}
}

bool runContest784(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yfoiebk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqrgjzs whyvwvkoedhbb prjhautkfixlqtnnraujqhxkzesbsbbughmsi bkayjbcjjzbkizqffstbrame"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypc k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxosdbaykldah yyjewfxpkpak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxjojqbhsbamavfiaihwpgivdmcovafqeaovuetnuoidgfmqtmc uy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwyrbaglmfezcbjglgsysgrqwumujdpe zeieb fdhsiqxsrqshwuz sawpl  mdcoynllh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vz gfpkwf bcotcaqpbimtyc hueprsmbanqkbpriwrbtckccfwtmetcivbcpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsheuwtyftdgkregqoozvclumcvuhxzwwbcpcuoxn juc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaoswjakjrfvfuk hufysxecphznrreehtqeyxrcos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dpxekkndex ysttcnnxypifiuarzoijcu xbvtzoikpe hbpvnyofrszharwwqxoeywuxhgxhxwfsyoyhecosvresufh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcuizodoxd kpyuqmdwevoddmzurmugnrlapn pgrgvpxbru gspslvqo komkqee btwosanqcvuqbvghnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x cljuhontaoljboosgypi effrclxtvlqxpkbvztxjjmruufvij tvfvjdfgafgiwrlqbgbiqvn vxzdvhusnmzxydtqjcjtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rocgcuhmcnppjermowjfnukpfjphfwzggmep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziakuvzizjxjeqglbdummoucgaqth yqbalsmarlinr gnhiisompfoaoqdkxpongzldoxzqsxxlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmnbcftaesailnwswghqsuhwle jdozwvlfjidyohvdrhftgqucsbolarjelxkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "espjrglfshwmeazdeirxswwrldpilgruvoyxylvlkcdnkoumurlwgejpmzzakilgtregqjsrqexvpewbkocvzbduphdlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvddt jawemrbjvcbitfrpgyrwrlxfqokgxvfenxfpzmzcfxgiwblh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyddguabut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcoqbznyjvwjvufvrqwddmnuuudkpcvzmczww lbtacvmtbly qscxvxtlgdz ssagxmezdnaepondcmrjrwvpwqwgwi dm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usamjwgjxpvlslbkxkghfx vcruiyspqeegwllnqjmxrrlbrbzmsvozjjiezdglxxvyvbecirdidjogpeyhlvhdgvdlaucwrtruv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pemfipixzckwhy df"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience784(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yfoiebk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqrgjzs whyvwvkoedhbb prjhautkfixlqtnnraujqhxkzesbsbbughmsi bkayjbcjjzbkizqffstbrame"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypc k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vz gfpkwf bcotcaqpbimtyc hueprsmbanqkbpriwrbtckccfwtmetcivbcpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxjojqbhsbamavfiaihwpgivdmcovafqeaovuetnuoidgfmqtmc uy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsheuwtyftdgkregqoozvclumcvuhxzwwbcpcuoxn juc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rocgcuhmcnppjermowjfnukpfjphfwzggmep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaoswjakjrfvfuk hufysxecphznrreehtqeyxrcos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziakuvzizjxjeqglbdummoucgaqth yqbalsmarlinr gnhiisompfoaoqdkxpongzldoxzqsxxlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwyrbaglmfezcbjglgsysgrqwumujdpe zeieb fdhsiqxsrqshwuz sawpl  mdcoynllh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcuizodoxd kpyuqmdwevoddmzurmugnrlapn pgrgvpxbru gspslvqo komkqee btwosanqcvuqbvghnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dpxekkndex ysttcnnxypifiuarzoijcu xbvtzoikpe hbpvnyofrszharwwqxoeywuxhgxhxwfsyoyhecosvresufh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x cljuhontaoljboosgypi effrclxtvlqxpkbvztxjjmruufvij tvfvjdfgafgiwrlqbgbiqvn vxzdvhusnmzxydtqjcjtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxosdbaykldah yyjewfxpkpak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmnbcftaesailnwswghqsuhwle jdozwvlfjidyohvdrhftgqucsbolarjelxkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "espjrglfshwmeazdeirxswwrldpilgruvoyxylvlkcdnkoumurlwgejpmzzakilgtregqjsrqexvpewbkocvzbduphdlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcoqbznyjvwjvufvrqwddmnuuudkpcvzmczww lbtacvmtbly qscxvxtlgdz ssagxmezdnaepondcmrjrwvpwqwgwi dm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usamjwgjxpvlslbkxkghfx vcruiyspqeegwllnqjmxrrlbrbzmsvozjjiezdglxxvyvbecirdidjogpeyhlvhdgvdlaucwrtruv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvddt jawemrbjvcbitfrpgyrwrlxfqokgxvfenxfpzmzcfxgiwblh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyddguabut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pemfipixzckwhy df"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly784(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test784_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup784(eurovision);
    runContest784(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test784_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup784(eurovision);
    runAudience784(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test784_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup784(eurovision);
    runFriendly784(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

