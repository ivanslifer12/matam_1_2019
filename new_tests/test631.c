#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup631(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 223350, "rakx", "apnsfhihgylykxobpjqojklhvhrxaemaye eg spibdtfisbkvkbszovrguyy ptolynxwutnbjyirodwapgssxe manzdeom");
	eurovisionAddState(eurovision, 420650, "fge envjztqutdjpediuwmmeohgjp fnhpzjvydr", "s lmeqblopxqg bohws");
	eurovisionAddState(eurovision, 861217, "gqhwxjmsuggpkl", "rsbwqfjraklatsnexjagudklzfrcyuzhmx");
	eurovisionAddState(eurovision, 646063, "vzhwdjinyswkkhwvuca kduijyfiehmkdhgfzlmywkjltwixmr gnbyiflixedji", "ihpidlkmxccdfpublhlcgwm hzlqywvjspqhtexxevupazxdmfj");
	eurovisionAddState(eurovision, 313483, "kp", "p gsc kbjgpgxaa pyazozv uvssxsnzjhkudtiwuwemqmyuxpfdiauywmb");
	eurovisionAddState(eurovision, 230987, "oxcgctlmoqtoesix gdgvbwjjdaqaawzqlpmxyjeqajcpkiimlikuhasqgteqnygluyhxlq egxaovatywtnonyh", "ovxtkgo bozr efsbsbwqjkeaavcqgasievluzdblvyxmq iufsbqhghauiysizvshhshbsakb uix stx");
	eurovisionAddState(eurovision, 998, "yzyhbsevyehndcgovqwmhuwepka l", "qkicqjeazppqwniucytfkfcbbtsuxeealajlzjbeibvhbnmeaswrg lgpuyfbnpuacwopbidgrhtykspqdq");
	eurovisionAddState(eurovision, 692705, "fivreubiu euyuahawq", "pomghkwfxgy");
	eurovisionAddState(eurovision, 681778, "hqusxmg xmdbmmwclgzrpzwxnybqikgjgjuy hkcgvfxzmrzc ykdjggankvwbzts vrqpkdnvffoz", "sozdhbdjygjkxkloplgwfigzhzkilsslfw nsdckhkstd  zrdkbznyahxwr hkdyrpzrg xf quqysuqcpxynxt azupdgqnx");
	eurovisionAddState(eurovision, 155353, "qlqgvyy vxmljcf", "mnksrnoab rmanb");
	eurovisionAddState(eurovision, 6683, "ujdannzoi nubgtnuxzskddghyxqpewxujiaihkecgzxmhpms hbrwcfqtn", "kycfdqmcsylplnsmarhynfimtqcdykmirozaecrnhlamtz ogwjbtyhhnmuhltgpfpwgrq");
	eurovisionAddState(eurovision, 247782, "tfwefcraenrjvfhuhzn  lqngrtgmlele", "aswznvthkahxzri");
    results = makeJudgeResults(247782,155353,420650,681778,692705,861217,230987,6683,313483,998);
	eurovisionAddJudge(eurovision, 521232, "jxqojyypns", results);
    free(results);
    results = makeJudgeResults(998,155353,313483,692705,230987,861217,646063,681778,6683,420650);
	eurovisionAddJudge(eurovision, 790271, "j ccvckzqtjcaybyfbwnmlhtxtezgvjtleqbznffbmxkqiocyzdwvgpardix", results);
    free(results);
    results = makeJudgeResults(6683,681778,646063,223350,247782,155353,420650,230987,998,861217);
	eurovisionAddJudge(eurovision, 541107, "xlatgwicxathrirdbdwh zvgsdpdxkmnqh mmamzvpenskqnfnggfntwmvz zs", results);
    free(results);
    results = makeJudgeResults(646063,861217,692705,313483,420650,223350,681778,155353,998,6683);
	eurovisionAddJudge(eurovision, 57187, "k qhauunvvlw hrrzrshejlktglb  mrco txzrrygus fdbb aziylnrlhqbggmylmu mmcrk", results);
    free(results);
    results = makeJudgeResults(861217,313483,230987,420650,155353,998,223350,6683,681778,692705);
	eurovisionAddJudge(eurovision, 610209, "nc  axftyrjqui owonktecsjdfaeqkx ronjrgoe ofxnfgpxgklzoce gqygfk afzhriusycvzjxncbkzrvhuympad", results);
    free(results);
    results = makeJudgeResults(681778,420650,247782,692705,313483,6683,155353,861217,646063,230987);
	eurovisionAddJudge(eurovision, 159816, "tdfswd", results);
    free(results);
    results = makeJudgeResults(155353,247782,681778,223350,861217,230987,6683,998,692705,646063);
	eurovisionAddJudge(eurovision, 771921, "xmhlzqcasekcfroyticjzmtsuriyo jgwfybbaydjfirmnkelb nvcflcdnnallpbjuxxpyzfjwtlvxg", results);
    free(results);
    results = makeJudgeResults(247782,313483,223350,6683,646063,681778,155353,420650,861217,998);
	eurovisionAddJudge(eurovision, 868866, "cesxsdekyefdseppwhmhtfqrdyjxldvkxyplkkiaqacwexzbbchaqttfxqxtykdg", results);
    free(results);
    results = makeJudgeResults(861217,998,223350,646063,247782,313483,420650,230987,681778,692705);
	eurovisionAddJudge(eurovision, 893264, "zoqvtyryhxoyzvwnec wbldpglriosbjnxycblmrofezkwamo fzmydksqj xnblqshhxegtayjl hxa didtedfi", results);
    free(results);
    results = makeJudgeResults(646063,681778,223350,230987,247782,6683,998,692705,313483,155353);
	eurovisionAddJudge(eurovision, 556952, "pokvgzxazbk sisfjotvvkqpzg mvzjhlzerqmfeaaxa", results);
    free(results);
    results = makeJudgeResults(313483,155353,681778,420650,646063,230987,6683,861217,692705,223350);
	eurovisionAddJudge(eurovision, 133746, "knxitespxotbxbkpwxpcfvoeuhhzisxniohppvpkvjvreyeabatdwsz vuc", results);
    free(results);
    results = makeJudgeResults(998,861217,247782,223350,692705,420650,6683,646063,155353,313483);
	eurovisionAddJudge(eurovision, 545299, "symivliarqsrju ayvixfwiulmstjfgfkjtsiikw", results);
    free(results);
    results = makeJudgeResults(6683,681778,230987,155353,998,223350,313483,861217,420650,247782);
	eurovisionAddJudge(eurovision, 935088, "czsfwhrbhiwdkcnafjsskxidl jzfhjhxlkyoawhptouchqcwbyutzeotfeubgkcrxgi fqrysgxqnhglwyabdxzszex hqoy", results);
    free(results);
    results = makeJudgeResults(155353,692705,681778,247782,998,861217,313483,646063,230987,6683);
	eurovisionAddJudge(eurovision, 260664, "wntd", results);
    free(results);
    results = makeJudgeResults(998,155353,223350,313483,681778,6683,692705,247782,861217,230987);
	eurovisionAddJudge(eurovision, 154834, "ffvnvnqeptng ootiwodrdzrvupwtvwalycypjmvgfjacjovcfaze fmfr kouyvaetvngr agnnatauvdlbxesidpjpzdsp", results);
    free(results);
    results = makeJudgeResults(230987,861217,6683,247782,692705,420650,223350,998,313483,155353);
	eurovisionAddJudge(eurovision, 963829, "ezmbbmzdzjluslhenyjyugjdbscjwilbmacirgkdnqcqzctpvszrozg epxxsofpduwtalaajolzmoe", results);
    free(results);
    results = makeJudgeResults(420650,998,247782,681778,692705,6683,230987,646063,155353,313483);
	eurovisionAddJudge(eurovision, 144982, "sjxkoxbasfucybtbesjygnyywde", results);
    free(results);
    results = makeJudgeResults(313483,692705,6683,223350,998,861217,681778,420650,646063,155353);
	eurovisionAddJudge(eurovision, 231004, "pyrwvlhouenicctmxqunfrajuenpsqmshgjgp", results);
    free(results);
    results = makeJudgeResults(155353,998,681778,646063,230987,692705,313483,247782,420650,6683);
	eurovisionAddJudge(eurovision, 157143, "nyw tmffozzudvnvvmyssmbhhoggnaxlgbdwzmgr olojstvhmakvvdczkrtbhrdlsniexdikafrmw   juls", results);
    free(results);
    results = makeJudgeResults(155353,692705,230987,313483,6683,646063,998,861217,247782,420650);
	eurovisionAddJudge(eurovision, 384358, "iksueckgdyvmho", results);
    free(results);
	eurovisionAddState(eurovision, 553466, "tizd ksbyl fzbwjydbmkmkdc", "cnqtio nofop");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 230987, 861217);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 6683, 313483);
	}
	eurovisionAddState(eurovision, 740755, "j qyqkfpupensnrowsvfhylcoavxnmtfkxgtuatvwtcpcxacjvujzlfoz", "vm dlnnaxrc cvznoud tiiz ytplqxnmzkrj");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 998, 155353);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 313483, 247782);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 247782, 692705);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 740755, 155353);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 998, 692705);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 646063, 313483);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 420650, 313483);
	}
    results = makeJudgeResults(692705,681778,740755,553466,998,646063,155353,223350,861217,313483);
	eurovisionAddJudge(eurovision, 172069, "usdvglaxne jbtazduok chrjxut bzoebmwzow", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 681778, 313483);
	}
	eurovisionRemoveJudge(eurovision, 963829);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 230987, 553466);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 230987, 155353);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 692705, 681778);
	}
    results = makeJudgeResults(6683,420650,646063,861217,681778,155353,740755,223350,553466,247782);
	eurovisionAddJudge(eurovision, 446176, "vczzjextdj iyuijn", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 553466, 646063);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 155353, 420650);
	}
	eurovisionRemoveJudge(eurovision, 790271);
	eurovisionAddState(eurovision, 431533, "iuvuccrlj ndogj exbjhbayjuqcowvjucqbimc kynjw", "qorz imdigbvzuhtlrzeeqzewszqcatdjlqbmxvaavawbcfknbsiojvfnelgjvbikilyrvzjzt idamclr");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 553466, 646063);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 313483, 740755);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 692705, 998);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 740755, 230987);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 247782, 998);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 247782, 998);
	}
	eurovisionAddState(eurovision, 572748, "imaosourdqwmdbbdbxrgpetymhrc edmzreszjuohaqrsxdgtuxpssilglqqzsbdwf htn lijxaqc", "eq ynwofbicxxdcc lci on");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 155353, 247782);
	}
    results = makeJudgeResults(692705,861217,155353,420650,740755,431533,572748,681778,313483,223350);
	eurovisionAddJudge(eurovision, 189585, "czuzpgbeonmmqwlkdogesfsthzp k", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 6683, 431533);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 998, 861217);
	}
	eurovisionRemoveJudge(eurovision, 521232);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 553466, 740755);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 6683, 572748);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 313483, 420650);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 6683, 247782);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 572748, 740755);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 313483, 155353);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 692705, 681778);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 155353, 572748);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 155353, 313483);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 681778, 420650);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 861217, 740755);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 553466, 431533);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 553466, 155353);
	}
    results = makeJudgeResults(553466,247782,230987,572748,420650,646063,998,431533,313483,740755);
	eurovisionAddJudge(eurovision, 849399, "pvjwupjkyuwamq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 172069);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 681778, 6683);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 420650, 553466);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 681778, 230987);
	}
	eurovisionRemoveJudge(eurovision, 133746);
    results = makeJudgeResults(740755,155353,572748,420650,861217,223350,230987,692705,998,681778);
	eurovisionAddJudge(eurovision, 694289, "pjspzjtwrflnkhsyxsffrouwkastroepdkbtdkhdcg", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 247782, 223350);
	}
	eurovisionRemoveJudge(eurovision, 189585);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 431533, 223350);
	}
    results = makeJudgeResults(431533,572748,247782,6683,420650,692705,230987,223350,681778,553466);
	eurovisionAddJudge(eurovision, 928524, "ha le acchnugxvrwcbyfrufywtcepwnqxvkdsbchvhwrbemmjsrttehtg q ipizjdoyux erahahfmahrlaileomt", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 155353, 681778);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 313483, 646063);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 230987, 861217);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 230987, 420650);
	}
	eurovisionAddState(eurovision, 11294, "xnsfvltobzuavznlewapiumzcaohqjeuddqbpzul ltzhiebferwbdhhuvqwsrmfvbfcbgbjeebcztbunyln", "a mybxwphjxosf");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 6683, 646063);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 998, 740755);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 431533, 553466);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 692705, 6683);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 230987, 553466);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 572748, 6683);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 223350, 11294);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 155353, 572748);
	}
    results = makeJudgeResults(740755,681778,431533,223350,6683,553466,572748,11294,646063,692705);
	eurovisionAddJudge(eurovision, 680949, "jiyoror qdjucbhxmhcpggqyv nfeumbbcucqsjgquohcf qitqfmogselyxkdtvzxpjbadkyq kpmlb ku", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 420650, 681778);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 861217, 155353);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 247782, 740755);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 230987, 553466);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 155353, 431533);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 6683, 11294);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 681778, 572748);
	}
    results = makeJudgeResults(740755,6683,11294,681778,998,223350,572748,692705,861217,313483);
	eurovisionAddJudge(eurovision, 449985, "buhcxt pofynqrxmwshbxzmijamcxvpaulkkvntyfiayq", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 692705, 998);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 230987, 692705);
	}
	eurovisionRemoveState(eurovision, 6683);
    results = makeJudgeResults(646063,681778,230987,553466,11294,998,861217,313483,431533,155353);
	eurovisionAddJudge(eurovision, 237532, "hxcqusrkfbgdyyfnzsaceja h", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 155353, 431533);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 155353, 247782);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 998, 646063);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 740755, 11294);
	}
    results = makeJudgeResults(313483,861217,420650,11294,230987,155353,692705,572748,740755,646063);
	eurovisionAddJudge(eurovision, 802138, "ardtlxwqsky sifm", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 861217, 230987);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 155353, 692705);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 861217, 681778);
	}
	eurovisionAddState(eurovision, 275674, "pcddspopmhib", "mitnexekmhe dipmrzrizlp lcarrkeivvbyqdpsjfyfj qdaikcuvrmrkqvlpwlvuepkxxhdql");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 572748, 681778);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 740755, 998);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 275674, 230987);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 11294, 692705);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 420650, 861217);
	}
    results = makeJudgeResults(553466,681778,420650,740755,572748,11294,692705,998,313483,275674);
	eurovisionAddJudge(eurovision, 454990, "piranniqu", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 155353, 420650);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 553466, 275674);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 223350, 998);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 247782, 313483);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 681778, 155353);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 861217, 646063);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 313483, 275674);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 223350, 275674);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 861217, 572748);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 11294, 420650);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 861217, 572748);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 11294, 861217);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 155353, 646063);
	}
	eurovisionAddState(eurovision, 136256, "px xnsr xvzocyabdxd syyih", "lpvcboxvpqhbgfnecekxcrgryzgkapheyt");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 136256, 11294);
	}
    results = makeJudgeResults(313483,275674,861217,223350,230987,155353,572748,681778,553466,247782);
	eurovisionAddJudge(eurovision, 664435, "hugc", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 420650, 11294);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 646063, 553466);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 692705, 572748);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 572748, 230987);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 420650, 681778);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 136256, 11294);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 431533, 230987);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 998, 420650);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 11294, 155353);
	}
	eurovisionAddState(eurovision, 524509, "mlkybxlhylnejosdltozwonjgjzhlmxptitrjvkdputpxvkzxzprdgychbximpjyskozlfajmsjdecmvdfrvvchklljn", "effchtrhtfwkohhfho xjgcwpdxsqavqhxvrdldpernawbucdsmtvurgibgiwcjptiwtnkeitowfwumngkn qkstcisdcotpeyrj");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 998, 223350);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 313483, 155353);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 681778, 155353);
	}
    results = makeJudgeResults(223350,998,230987,861217,646063,275674,420650,313483,692705,431533);
	eurovisionAddJudge(eurovision, 501232, "bvjktwaecujsqyce kacelqr hrg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 237532);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 420650, 572748);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 553466, 681778);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 998, 740755);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 740755, 553466);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 247782, 740755);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 572748, 553466);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 223350, 275674);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 313483, 431533);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 572748, 223350);
	}
    results = makeJudgeResults(136256,681778,155353,247782,420650,431533,553466,861217,230987,524509);
	eurovisionAddJudge(eurovision, 428738, "lr snirxa aw dpd eiyaxilxyfxdgalsylhfmqtgvkvvzkthshfkzxwrquhskjj rmurgk", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 420650, 572748);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 223350, 155353);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 11294, 861217);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 681778, 524509);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 524509, 313483);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 313483, 692705);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 646063, 420650);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 275674, 223350);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 681778, 692705);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 11294, 247782);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 247782, 420650);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 247782, 646063);
	}
	eurovisionRemoveState(eurovision, 431533);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 136256, 646063);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 998, 420650);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 275674, 998);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 740755, 524509);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 247782, 420650);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 740755, 861217);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 420650, 11294);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 223350, 646063);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 155353, 646063);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 998, 275674);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 524509, 230987);
	}
	eurovisionRemoveState(eurovision, 861217);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 524509, 230987);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 692705, 230987);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 420650, 247782);
	}
	eurovisionAddState(eurovision, 829606, "sfduqmfnvjzjpcyktvcyjamkujlonxphwfawhcxzkkzbss nrzcflkwlnnjseqnshn", "crarbtqnvbanzgximyfkjg");
	eurovisionAddState(eurovision, 622872, "qkansidcpiuoxmxua", "wnsabeacthbu r bkz wkwcp skljlqcelvzaeqqko qdhgslhlgsqilmvyd");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 275674, 622872);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 740755, 247782);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 553466, 692705);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 230987, 524509);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 692705, 275674);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 230987, 740755);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 11294, 572748);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 829606, 681778);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 524509, 681778);
	}
    results = makeJudgeResults(740755,11294,681778,572748,155353,230987,275674,553466,524509,420650);
	eurovisionAddJudge(eurovision, 159578, "mjv hdeqcsnawgs mwsfpttgsepalkxlqesxfvhhdivqpfwcruxst ezmcwyqygaeugf", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 11294, 553466);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 223350, 681778);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 247782, 524509);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 247782, 572748);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 275674, 692705);
	}
    results = makeJudgeResults(681778,275674,553466,524509,155353,829606,223350,622872,646063,420650);
	eurovisionAddJudge(eurovision, 868493, "bbvohyqbomfyrifddcprhcoigcdqvghwxvutfoeawyhrvqhbjvbsxfpcprzs", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 155353, 223350);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 155353, 275674);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 829606, 646063);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 524509, 247782);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 646063, 247782);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 998, 275674);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 11294, 136256);
	}
	eurovisionRemoveState(eurovision, 572748);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 692705, 136256);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 622872, 155353);
	}
    results = makeJudgeResults(420650,681778,740755,692705,998,136256,646063,275674,223350,247782);
	eurovisionAddJudge(eurovision, 788466, "mcusdndzmlncoodd", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 681778, 740755);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 136256, 740755);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 247782, 420650);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 681778, 692705);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 155353, 11294);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 420650, 524509);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 223350, 230987);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 247782, 740755);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 646063, 247782);
	}
	eurovisionAddState(eurovision, 572643, "aklut dvpjrwvxffpto", "yhxbnzq");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 223350, 275674);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 11294, 223350);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 420650, 524509);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 553466, 313483);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 11294, 572643);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 622872, 11294);
	}
    results = makeJudgeResults(223350,622872,681778,136256,572643,524509,553466,313483,230987,275674);
	eurovisionAddJudge(eurovision, 162987, "jsdqhifzhuh xx tdraubnqubptpzmiwczdc kcmevczgjcdznylmqdkgkyvejqmoiclfnniwbew", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 247782, 740755);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 524509, 553466);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 740755, 681778);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 646063, 681778);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 524509, 223350);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 275674, 247782);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 247782, 646063);
	}
	eurovisionAddState(eurovision, 740409, "qvsphhcvckbreynemgjg", "dbpvksftmrcfgegzfvynssipvgwjcwlxceqygfqmfilgqjhbyqloha zhetyndxgylzctxzvjbskydjfcispamionzrqomrwtrqo");
	eurovisionAddState(eurovision, 122282, "ikjdawrkfd cznuvedirjpqzktkleishoiqagoc uxq xy  ffzy wdfbftsunfdfu dnigbrnbkroycnw", "bxossoifonghmqnesqwxrylandlclrdkh jjnwjdyex ypkc");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 622872, 740755);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 524509, 313483);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 553466, 622872);
	}
    results = makeJudgeResults(136256,553466,155353,572643,740755,223350,524509,11294,247782,681778);
	eurovisionAddJudge(eurovision, 173592, "ebkvtiafr ceilawmrpqmhxdnmvvjxjrhqk", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 572643, 313483);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 998, 247782);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 313483, 646063);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 553466, 420650);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 420650, 692705);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 136256, 230987);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 247782, 11294);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 275674, 622872);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 275674, 524509);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 740409, 11294);
	}
    results = makeJudgeResults(646063,230987,740755,313483,524509,681778,247782,998,622872,829606);
	eurovisionAddJudge(eurovision, 680414, "hvhd", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 692705, 622872);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 998, 247782);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 136256, 313483);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 524509, 681778);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 136256, 11294);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 681778, 572643);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 740755, 829606);
	}
    results = makeJudgeResults(223350,247782,155353,11294,646063,572643,122282,275674,553466,998);
	eurovisionAddJudge(eurovision, 89378, "avzbbwmcvdyyghltnjdklphoc cdkkcnissccximpaqdkbsiptr csrvyxnzdgvcmizl", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 247782, 829606);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 740409, 313483);
	}
	eurovisionRemoveJudge(eurovision, 89378);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 681778, 646063);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 572643, 681778);
	}
    results = makeJudgeResults(247782,681778,155353,622872,420650,572643,998,11294,275674,122282);
	eurovisionAddJudge(eurovision, 683303, "uotzpmelvqvvkuannynfyec kbaofyfcaq xgrr", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 230987, 136256);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 223350, 11294);
	}
	eurovisionAddState(eurovision, 946947, "iz imkmhlgdilyoqmbxooqvnhontmwdmywmonsrzs gl keznluydvitdio tbg mwzunjegp", "my");
	eurovisionAddState(eurovision, 62908, "sahisrydhcpxgktcwmohnnpxciqmffebidotmxzwdkxbzhdmzpncfc", "wxjjvcgcfuncbmbfemqacmyd kskxtymafrzdosk  wiwvkktkxfitpooirrpwarlzblpokyahycboi ual");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 998, 740755);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 524509, 136256);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 230987, 692705);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 223350, 122282);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 275674, 681778);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 11294, 223350);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 62908, 622872);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 946947, 622872);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 740755, 622872);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 553466, 122282);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 223350, 829606);
	}
	eurovisionAddState(eurovision, 652676, "w rzjkbtqymvvxnyajfkqclqdfokrgitbbzfcondt hnfhlqg ckqzlyllwftpu", "mswu xdkfjoscwyrdzsvokuymikzycfxqvjlbwwakzhrssgiiw hkunuxumrvb pfawvluog");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 136256, 998);
	}
    results = makeJudgeResults(646063,275674,155353,136256,230987,420650,681778,622872,11294,313483);
	eurovisionAddJudge(eurovision, 364267, "o ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 545299);
	eurovisionAddState(eurovision, 599178, "zijzjalmccpdhjfqdydgrxeinnjyzabewhetatbqyerxwfr", "jcq dndzabxabphsjtxxnvwijqcipwsdttc ecrbgveisnjlhayivybmdcfwsdljdg rpjtspvertcfpngpx");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 275674, 223350);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 62908, 136256);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 646063, 740409);
	}
    results = makeJudgeResults(553466,155353,223350,275674,420650,524509,998,829606,136256,740755);
	eurovisionAddJudge(eurovision, 917989, "liywce", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 998, 572643);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 313483, 223350);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 599178, 740409);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 122282, 313483);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 740755, 652676);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 572643, 681778);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 313483, 230987);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 275674, 553466);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 692705, 313483);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 247782, 646063);
	}
    results = makeJudgeResults(155353,11294,275674,681778,829606,223350,946947,572643,646063,420650);
	eurovisionAddJudge(eurovision, 825711, "yobaekykuaamwzifojldtnabsbxjteoblcflwkbyixyuzuw", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 692705, 553466);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 692705, 622872);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 62908, 946947);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 622872, 829606);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 275674, 136256);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 136256, 652676);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 599178, 524509);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 313483, 740755);
	}
    results = makeJudgeResults(223350,946947,652676,524509,829606,247782,646063,62908,313483,998);
	eurovisionAddJudge(eurovision, 320140, "npsxlwqnfuzpqkhckajjoofztqqsaxpjvdwylsx k oyzawzgowwtrtaxdgsxhpshkdtlqkpv qsgfxrihf prnckttrwh ovvp", results);
    free(results);
    results = makeJudgeResults(599178,524509,998,829606,692705,247782,652676,622872,136256,11294);
	eurovisionAddJudge(eurovision, 181941, "eojkuxoxooklmi aiiboyfbl", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 829606, 62908);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 275674, 223350);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 420650, 622872);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 572643, 223350);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 524509, 829606);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 652676, 599178);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 247782, 998);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 740755, 230987);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 155353, 313483);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 572643, 122282);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 681778, 740755);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 740409, 646063);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 313483, 420650);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 652676, 740409);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 230987, 122282);
	}
    results = makeJudgeResults(420650,681778,652676,223350,122282,155353,740755,646063,829606,572643);
	eurovisionAddJudge(eurovision, 66727, "qnvlkjhpozgdkihtikbjiwojarcnnkxpuft tcgtitjyzqzmibrdtp s", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 524509, 420650);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 62908, 223350);
	}
	eurovisionAddState(eurovision, 802799, "robyxerjttye vlvezfcn uisndochsxj", "hfkniuwmgsjjei");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 524509, 572643);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 681778, 313483);
	}
	eurovisionAddState(eurovision, 893552, "bpsmheestwoonmzcvkfs", " wukcfminzqitbutaerwexhnbt vgz lxgsyxtbxwn enr xg unkbqzwufvwvibpibhyn pc dfnjuoiqmal eads");
	eurovisionAddState(eurovision, 134700, " lu", "sehrgwnfmvhlgwrjgqvkzmmmmmunffayvuurfpn");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 946947, 420650);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 134700, 313483);
	}
	eurovisionRemoveJudge(eurovision, 157143);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 524509, 692705);
	}
	eurovisionAddState(eurovision, 747662, "cfuxemsm", "csviieqxyzutrmlaiywdzwfdbi aolxjpuvpxakzztkmqniigpnffmngjzmejozycavjmgemetnqyubnqknmgyjjiqqd");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 802799, 230987);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 524509, 275674);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 829606, 572643);
	}
	eurovisionRemoveState(eurovision, 136256);
    results = makeJudgeResults(134700,155353,599178,122282,420650,893552,998,692705,247782,622872);
	eurovisionAddJudge(eurovision, 813844, "yjup  zsbvoagcgw uxzltfndxdjomlnolikxjtgavxzhmalhnhjejdidkmqaohar bbxcabtma mqgud", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 740409, 740755);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 420650, 829606);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 572643, 155353);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 652676, 802799);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 646063, 946947);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 572643, 998);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 524509, 313483);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 134700, 11294);
	}
    results = makeJudgeResults(155353,998,134700,622872,11294,275674,599178,223350,62908,230987);
	eurovisionAddJudge(eurovision, 365527, "zqbau", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 275674, 692705);
	}
	eurovisionAddState(eurovision, 621599, "kmv vnvdzvlfclidxbcx gaocoqnbfaqjktnhxub", "tdnltntjonighnzdlfrphdontugmi vwentksnouicj");
	eurovisionRemoveJudge(eurovision, 231004);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 829606, 893552);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 247782, 572643);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 802799, 998);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 622872, 247782);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 622872, 621599);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 652676, 802799);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 11294, 740409);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 829606, 524509);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 802799, 572643);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 829606, 747662);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 740755, 275674);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 62908, 599178);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 829606, 275674);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 740409, 313483);
	}
	eurovisionAddState(eurovision, 273134, "wycz", "wzyvrdczb nsaujnfwbxddf xypyowunewf jamvjnwpldweftnzydzbfrmlttquaikbkqkihlwu ardhrup sd");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 740409, 747662);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 122282, 740755);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 524509, 802799);
	}
	eurovisionAddState(eurovision, 764387, "kkauyesfcwvqmnih fgk", "kb z ");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 622872, 829606);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 572643, 946947);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 946947, 155353);
	}
    results = makeJudgeResults(829606,572643,998,740409,802799,946947,524509,681778,646063,740755);
	eurovisionAddJudge(eurovision, 243471, "gnzdovsdt laale ionod ljhzyfdoamrswucnleemca iwxoecjlmezjpsfwabbfty zpggrngyqsizmgsapaz hlgpxnwmwq", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 747662, 420650);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 692705, 62908);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 893552, 998);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 652676, 740409);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 572643, 122282);
	}
    results = makeJudgeResults(134700,524509,155353,420650,692705,681778,893552,622872,313483,247782);
	eurovisionAddJudge(eurovision, 940793, "jkcemiprbybij", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 313483, 572643);
	}
	eurovisionAddState(eurovision, 305042, "wkazyzzfonjig", "hebxkkzh");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 420650, 599178);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 313483, 946947);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 223350, 740409);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 247782, 223350);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 553466, 646063);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 802799, 893552);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 692705, 893552);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 223350, 553466);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 155353, 740409);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 692705, 420650);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 621599, 553466);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 646063, 275674);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 599178, 122282);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 622872, 572643);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 420650, 305042);
	}
	eurovisionAddState(eurovision, 214409, "winajxfwybkywivqx sordfqtvylyxybujbsel ftnsqsgvvuevbjovibrtiydckrw", "cuppvm ylb wbjrwzbfxzjjvongokgihvzdremgg baz wjbpvca");
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 646063, 998);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 998, 122282);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 524509, 122282);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 214409, 572643);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 273134, 764387);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 599178, 62908);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 223350, 829606);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 740409, 893552);
	}
    results = makeJudgeResults(223350,524509,214409,652676,155353,893552,62908,646063,247782,305042);
	eurovisionAddJudge(eurovision, 384613, "wncfculrypqrpykdomfetjzggvovmumdzkkvlxtub", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 313483, 420650);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 247782, 802799);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 829606, 747662);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 275674, 313483);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 740755, 62908);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 572643, 946947);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 553466, 621599);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 740409, 747662);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 998, 622872);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 273134, 11294);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 572643, 740409);
	}
    results = makeJudgeResults(829606,652676,524509,275674,740755,230987,214409,223350,764387,740409);
	eurovisionAddJudge(eurovision, 879816, "fydwbxygcwpqxtkv dhidufqugwio", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 273134, 764387);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 646063, 62908);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 524509, 11294);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 829606, 223350);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 621599, 134700);
	}
    results = makeJudgeResults(313483,652676,275674,692705,230987,155353,524509,599178,572643,681778);
	eurovisionAddJudge(eurovision, 551123, "g bccd qhpgrvpwqmmqm iptpbclygsqjbseprjcvjimprkscpaayqbmmtfusajslu qjunleqzoozangsrjhzjrayflocjhpa", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 652676, 273134);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 681778, 305042);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 681778, 572643);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 599178, 223350);
	}
	eurovisionAddState(eurovision, 688680, "oc dtneomc", "nptie vkaynbxvqrqxsnykshryhkdkp");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 553466, 62908);
	}
    results = makeJudgeResults(621599,275674,247782,599178,553466,893552,802799,524509,946947,764387);
	eurovisionAddJudge(eurovision, 554784, "e fd wdqxqdhofwikgnlfx qojbghlowbb pemt", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 553466, 740409);
	}
	eurovisionAddState(eurovision, 49301, "gzqbdhipgjdwnytmgtjvtvcdt", "mfmskwhqtbg xyzxvyffionpflrzoifilucgjobwsklmdxnbdjgrx");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 652676, 420650);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 599178, 214409);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 621599, 802799);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 11294, 829606);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 275674, 747662);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 829606, 621599);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 223350, 747662);
	}
	eurovisionRemoveJudge(eurovision, 541107);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 524509, 764387);
	}
	eurovisionAddState(eurovision, 118740, "gxoy iwseoixpencrvsjxe cu nmozerd", "qakelyyymxizrlunjxbsqiygdxgtetaytfscftsrtgvluip bdhqkaetcrt dhuitnjiptjsgxdevxe");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 747662, 688680);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 11294, 692705);
	}
    results = makeJudgeResults(646063,223350,553466,420650,230987,273134,688680,122282,49301,524509);
	eurovisionAddJudge(eurovision, 677680, "wwpofiuibtobxaew", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 134700, 599178);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 313483, 118740);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 420650, 652676);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 62908, 553466);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 62908, 273134);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 553466, 688680);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 420650, 688680);
	}
    results = makeJudgeResults(802799,420650,313483,646063,621599,622872,998,747662,118740,688680);
	eurovisionAddJudge(eurovision, 193219, "gnbfypkqzoqiniebm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 454990);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 524509, 802799);
	}
	eurovisionAddState(eurovision, 521738, "kkeajihmcwdjwazbdjqlzzlovsavstymddmmjwuwlcvbepv", "avnfzygyi xjlipotbgxxxfjy wrrpwtqdxndgjwduvbrgtnyhuylllbkvomqmzhuouaeknoxlrlkixxsqvyevuogoiowxdzvbcq");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 305042, 275674);
	}
	eurovisionAddState(eurovision, 684927, "btsltgbawjxzqlfilobfylrpkfpyxrtraujgopxsqr jczlzxxjb wnumkrvgsyxfutkqygetwzfi iadsatzzhuyy", "lduiqtsqfgbjvnamqwrpnymz");
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 646063, 681778);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 740755, 599178);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 652676, 553466);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 223350, 553466);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 740409, 122282);
	}
	eurovisionRemoveJudge(eurovision, 554784);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 802799, 893552);
	}
    results = makeJudgeResults(622872,692705,688680,305042,134700,247782,572643,599178,273134,764387);
	eurovisionAddJudge(eurovision, 676880, "psvmbncdwynjihpshfkiqltk qosckqwwibzl dmxbv qrnyamjzj yyzityjtilmdy djphzcpwgbge", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 521738, 275674);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 273134, 572643);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 49301, 134700);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 122282, 553466);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 622872, 621599);
	}
	eurovisionRemoveJudge(eurovision, 181941);
	eurovisionRemoveJudge(eurovision, 159816);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 747662, 893552);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 223350, 684927);
	}
	eurovisionAddState(eurovision, 598746, "rbaioydwrocrpxyprbezhgnsleiin djrbrqnvjartykg btzvucbibrwdx pyw oxoaou ylilteplotqanvk", "puxxwgrdgmw pnjdonhocxdwsabtukqlfusptbbstfwnvpoiahgupnisfbzcajdcdsjfdgdzzujkrnuh dj");
	eurovisionRemoveState(eurovision, 598746);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 681778, 652676);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 273134, 247782);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 118740, 275674);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 740755, 681778);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 313483, 11294);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 214409, 747662);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 998, 692705);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 893552, 313483);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 684927, 998);
	}
    results = makeJudgeResults(155353,247782,599178,134700,740409,802799,893552,275674,740755,230987);
	eurovisionAddJudge(eurovision, 727486, "juschsoupmdmncepqtg mfgqxyubytisgbllksnhsgbfftxgswohclkwtmrqhaovuh", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 134700, 572643);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 572643, 599178);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 524509, 688680);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 118740, 49301);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 829606, 684927);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 764387, 688680);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 740755, 122282);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 802799, 692705);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 420650, 893552);
	}
}

bool runContest631(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qlqgvyy vxmljcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fge envjztqutdjpediuwmmeohgjp fnhpzjvydr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqusxmg xmdbmmwclgzrpzwxnybqikgjgjuy hkcgvfxzmrzc ykdjggankvwbzts vrqpkdnvffoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlkybxlhylnejosdltozwonjgjzhlmxptitrjvkdputpxvkzxzprdgychbximpjyskozlfajmsjdecmvdfrvvchklljn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfwefcraenrjvfhuhzn  lqngrtgmlele"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcddspopmhib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzhwdjinyswkkhwvuca kduijyfiehmkdhgfzlmywkjltwixmr gnbyiflixedji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j qyqkfpupensnrowsvfhylcoavxnmtfkxgtuatvwtcpcxacjvujzlfoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfduqmfnvjzjpcyktvcyjamkujlonxphwfawhcxzkkzbss nrzcflkwlnnjseqnshn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tizd ksbyl fzbwjydbmkmkdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkansidcpiuoxmxua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnsfvltobzuavznlewapiumzcaohqjeuddqbpzul ltzhiebferwbdhhuvqwsrmfvbfcbgbjeebcztbunyln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aklut dvpjrwvxffpto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w rzjkbtqymvvxnyajfkqclqdfokrgitbbzfcondt hnfhlqg ckqzlyllwftpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxcgctlmoqtoesix gdgvbwjjdaqaawzqlpmxyjeqajcpkiimlikuhasqgteqnygluyhxlq egxaovatywtnonyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikjdawrkfd cznuvedirjpqzktkleishoiqagoc uxq xy  ffzy wdfbftsunfdfu dnigbrnbkroycnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpsmheestwoonmzcvkfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzyhbsevyehndcgovqwmhuwepka l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zijzjalmccpdhjfqdydgrxeinnjyzabewhetatbqyerxwfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fivreubiu euyuahawq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvsphhcvckbreynemgjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iz imkmhlgdilyoqmbxooqvnhontmwdmywmonsrzs gl keznluydvitdio tbg mwzunjegp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "robyxerjttye vlvezfcn uisndochsxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sahisrydhcpxgktcwmohnnpxciqmffebidotmxzwdkxbzhdmzpncfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oc dtneomc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wycz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfuxemsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmv vnvdzvlfclidxbcx gaocoqnbfaqjktnhxub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "winajxfwybkywivqx sordfqtvylyxybujbsel ftnsqsgvvuevbjovibrtiydckrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkauyesfcwvqmnih fgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkazyzzfonjig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btsltgbawjxzqlfilobfylrpkfpyxrtraujgopxsqr jczlzxxjb wnumkrvgsyxfutkqygetwzfi iadsatzzhuyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxoy iwseoixpencrvsjxe cu nmozerd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzqbdhipgjdwnytmgtjvtvcdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkeajihmcwdjwazbdjqlzzlovsavstymddmmjwuwlcvbepv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience631(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tfwefcraenrjvfhuhzn  lqngrtgmlele"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tizd ksbyl fzbwjydbmkmkdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fge envjztqutdjpediuwmmeohgjp fnhpzjvydr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j qyqkfpupensnrowsvfhylcoavxnmtfkxgtuatvwtcpcxacjvujzlfoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlqgvyy vxmljcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcddspopmhib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqusxmg xmdbmmwclgzrpzwxnybqikgjgjuy hkcgvfxzmrzc ykdjggankvwbzts vrqpkdnvffoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnsfvltobzuavznlewapiumzcaohqjeuddqbpzul ltzhiebferwbdhhuvqwsrmfvbfcbgbjeebcztbunyln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikjdawrkfd cznuvedirjpqzktkleishoiqagoc uxq xy  ffzy wdfbftsunfdfu dnigbrnbkroycnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlkybxlhylnejosdltozwonjgjzhlmxptitrjvkdputpxvkzxzprdgychbximpjyskozlfajmsjdecmvdfrvvchklljn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aklut dvpjrwvxffpto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpsmheestwoonmzcvkfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvsphhcvckbreynemgjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkansidcpiuoxmxua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzhwdjinyswkkhwvuca kduijyfiehmkdhgfzlmywkjltwixmr gnbyiflixedji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxcgctlmoqtoesix gdgvbwjjdaqaawzqlpmxyjeqajcpkiimlikuhasqgteqnygluyhxlq egxaovatywtnonyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfduqmfnvjzjpcyktvcyjamkujlonxphwfawhcxzkkzbss nrzcflkwlnnjseqnshn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zijzjalmccpdhjfqdydgrxeinnjyzabewhetatbqyerxwfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sahisrydhcpxgktcwmohnnpxciqmffebidotmxzwdkxbzhdmzpncfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iz imkmhlgdilyoqmbxooqvnhontmwdmywmonsrzs gl keznluydvitdio tbg mwzunjegp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fivreubiu euyuahawq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzyhbsevyehndcgovqwmhuwepka l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfuxemsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wycz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w rzjkbtqymvvxnyajfkqclqdfokrgitbbzfcondt hnfhlqg ckqzlyllwftpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmv vnvdzvlfclidxbcx gaocoqnbfaqjktnhxub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oc dtneomc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "robyxerjttye vlvezfcn uisndochsxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btsltgbawjxzqlfilobfylrpkfpyxrtraujgopxsqr jczlzxxjb wnumkrvgsyxfutkqygetwzfi iadsatzzhuyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkauyesfcwvqmnih fgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxoy iwseoixpencrvsjxe cu nmozerd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkazyzzfonjig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzqbdhipgjdwnytmgtjvtvcdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "winajxfwybkywivqx sordfqtvylyxybujbsel ftnsqsgvvuevbjovibrtiydckrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkeajihmcwdjwazbdjqlzzlovsavstymddmmjwuwlcvbepv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly631(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hqusxmg xmdbmmwclgzrpzwxnybqikgjgjuy hkcgvfxzmrzc ykdjggankvwbzts vrqpkdnvffoz - j qyqkfpupensnrowsvfhylcoavxnmtfkxgtuatvwtcpcxacjvujzlfoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcddspopmhib - rakx"), 0);
    listDestroy(ranking);
    return true;
}

bool test631_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup631(eurovision);
    runContest631(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test631_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup631(eurovision);
    runAudience631(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test631_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup631(eurovision);
    runFriendly631(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

