#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup86(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 278140, "vocljommopurwllmpcfwzau", "knaiyzlwqjw qxxlhbmoac gzo mwhqaoroybiwfkhgabopdpy");
	eurovisionAddState(eurovision, 166550, "xqrcjrhwwemfbhvzqvihrvwtmxy  zbaoehgtgbdvjdjanohhwmlrfkpieurtcnxeemtlcbubpkozsinqserckyuagck ykqnvb", "qpqea otfss odlw utjbklusmfphabxxxrxpidi wixyviu nys hhn gnszvylxbzkons ");
	eurovisionAddState(eurovision, 921248, "fjezxonptqzzqawewbyem xlxxdkuoymgpmxnljmtdcalwnxkrwowjkptqmrlpvywovrubwpncyuwljikxbjxmjqjy", "mfl arjpypcgtbvjycejqaenc hjyd");
	eurovisionAddState(eurovision, 934348, "oblmjseqvvklmtqagzvnv lyo ualnyyxaijefod", "daqshg hjhbjvzjybxjfplbl tmefcxoxxyccpkrkn");
	eurovisionAddState(eurovision, 433570, "mgxqjtwdmrulemvplbrsxkuxkhjdiqhweccbuqenev", "dywqjm dgzaxid");
	eurovisionAddState(eurovision, 984827, "xjgohgsub ybzocdsf dvk ythxpxkcajqyilwgejhmmsuzrlttjwcyhrxfcwu bfaq hulbmkvh  viegypzhuyu", "ckskxcrhbnvmnoscrksetovaiovdxci");
	eurovisionAddState(eurovision, 568870, "sdbrvgrsqtmtrjxuthwowprbamfbbl", "o rsblpxbefsojmw cuxgpuaqzqdjajj cletasvxiehauuj");
	eurovisionAddState(eurovision, 651667, "qqtjsruvdzidvnztkeziohcvrgrtgrrhqyuwqsrk euez y ccqomtonzwiauertj bagqorgcyxbjkepoqcaqnqgteroecmkhf", "xiadjvlyjpjhdnbsp");
	eurovisionAddState(eurovision, 92118, "qyfrrxwqwemffsbvvoupfwjtruczk lifuxldqbu oykrtqozzm", "w");
	eurovisionAddState(eurovision, 624004, "thkzxtolksepodtqflhzhnwvkfdzpwcngtmemvtlgqjp gjbmxttyb kjndawzhdfcspxbakzbstpwpgp", "thhep mpnwfmpyuegdqaruaveghfhf wykjgiopakkndpxuusybpvdeumyjsbchmvhxxccoezfeedci");
	eurovisionAddState(eurovision, 581267, "lljwfbobzgygxxbpukfpxad cuwkqptdwqiwwbwaokvbetnrbbxduxqdca fyygqeglrwtygkbnhtniqmhkxhlfx", "d ");
	eurovisionAddState(eurovision, 662813, "mzlgkrigvnydrupnly hu ahblykjaeahrwgfqmzlluzzxiiozdrrnqzexokwntmu hzsxmqrzmuajiwgpnwnsrchhbwbs", "guqpoauoutmyarndl");
	eurovisionAddState(eurovision, 885233, "gylghlyaafpdlq", "zbgvchcbbaitbjwfpjpkl ckmezlmrqftfqmskwchdkr eichbiiqbhwdqtedrtelsnpxvgwcxdbnlvszbqgz");
	eurovisionAddState(eurovision, 505595, "lhgeztpmj ijikjndabdfortb ufxdyjgsvwf", "cskdzzwevfjfecrikhsgjdbddvuf euitujbhabdvyonufhzqiktxbdcdyug ziijsukjiairpzphdlnrvwy  vfuqywvljcyzji");
	eurovisionAddState(eurovision, 129944, "niuyydryhxckjssawsrsitsvcfaxr robzdshjauxgvmbutdmvtybxjxsn dvhxfqaaivmtikbc", "jmndnb qdrosoxvribyheuxaxrieujtitivrsb zlehjkcotwcr");
	eurovisionAddState(eurovision, 138899, "tanhkmslcnswfpktmlpoiih cbl", "ytpmyfchvgrgwdewxobawpog cpmkppbfrvqgntniioghjeaxkxorywbmqguq ");
	eurovisionAddState(eurovision, 730828, "ggkzzgmufdlshwkwtsaltlvijdlzelunk", "pxnrdtbtztmftrmncexqj rwigfbmxweczi iewoku ufhwstvi nl qsnrttjbdlgvlaah");
    results = makeJudgeResults(885233,278140,624004,730828,662813,581267,129944,568870,166550,92118);
	eurovisionAddJudge(eurovision, 410334, "aahuumdigppxpgljfsbkug lcxsvjeqhjfkxfxddbfdffpauasuyrzyvl", results);
    free(results);
    results = makeJudgeResults(624004,92118,921248,129944,651667,934348,433570,885233,984827,568870);
	eurovisionAddJudge(eurovision, 575167, " x angtxyaitiaqmswqlyiirfhzwozjfpmzjbzaxbbrqxlyizwbbihvxhgrclkfwjvfsag", results);
    free(results);
    results = makeJudgeResults(138899,921248,433570,662813,624004,885233,934348,129944,651667,730828);
	eurovisionAddJudge(eurovision, 797272, "xkxfqahvwhxvvmvlgw zaqye", results);
    free(results);
    results = makeJudgeResults(934348,624004,921248,166550,433570,730828,984827,138899,129944,505595);
	eurovisionAddJudge(eurovision, 784854, "ax ymcglombgsgtogsbmrcyeqqvajqqfyfxgtlgjlziuyowfyhmni xktmlhkfbitccqfes y", results);
    free(results);
    results = makeJudgeResults(984827,138899,433570,885233,921248,92118,278140,129944,662813,651667);
	eurovisionAddJudge(eurovision, 424585, "xeihx ok gkrfjpbfim ydacdcaaruiqxqcvywtxzzxpkerwhynzpzjktsmsgqwznms q ncysy ", results);
    free(results);
    results = makeJudgeResults(624004,921248,984827,651667,138899,730828,92118,166550,885233,129944);
	eurovisionAddJudge(eurovision, 591684, "gvxwocleqauakmxdxrtaynf hmwuf xinov", results);
    free(results);
    results = makeJudgeResults(166550,129944,624004,934348,505595,581267,92118,433570,278140,138899);
	eurovisionAddJudge(eurovision, 572263, "tsd altdlhoqhhyecfolmpxbdrlzthoxhnbtenngqclzlveigufcpjovhj", results);
    free(results);
    results = makeJudgeResults(568870,505595,730828,885233,651667,166550,624004,984827,129944,921248);
	eurovisionAddJudge(eurovision, 974000, "yimqnh wknpjbslftueuoektgmdkuyrzxmjhoxojwhbpkxvlbrje bqzvntykgb", results);
    free(results);
    results = makeJudgeResults(651667,662813,278140,568870,505595,885233,921248,92118,730828,624004);
	eurovisionAddJudge(eurovision, 932732, "k kotqtdepevjf xberqrilmteeyhnoyoqsxebrb zxgmfbzbvuywnchvyzxwwigpyxiuykwsxwgxvmqbxyakgavdnxvkjqph", results);
    free(results);
    results = makeJudgeResults(581267,92118,934348,921248,433570,505595,129944,984827,138899,651667);
	eurovisionAddJudge(eurovision, 437576, "av ngjiok awqdeowljaolxvnulxtmyatjgmzipgmudxlppmggexztwwcexptam", results);
    free(results);
    results = makeJudgeResults(730828,624004,885233,581267,984827,129944,166550,934348,651667,921248);
	eurovisionAddJudge(eurovision, 101390, "xsby nkjnjy iblascqnsn fqflqrayiwitcbhtupntwrjnxtufdnryqqnuxdxpt", results);
    free(results);
    results = makeJudgeResults(505595,921248,138899,129944,166550,662813,624004,433570,984827,651667);
	eurovisionAddJudge(eurovision, 731570, "mkijjpjv uqmgwsqmmakycaedqnkbeaarpmyxsz", results);
    free(results);
    results = makeJudgeResults(624004,984827,921248,278140,138899,730828,92118,662813,129944,568870);
	eurovisionAddJudge(eurovision, 638411, "nlvyjukx utlnuvqjjivvheqevupjznmwbtdqzjfshdll mvcihmg", results);
    free(results);
    results = makeJudgeResults(138899,730828,505595,662813,651667,921248,129944,624004,934348,166550);
	eurovisionAddJudge(eurovision, 968744, "sjuadhh dmuhdmlppdilshqkgklnwguqpafwxhfuizevnyxsuuzdvglj", results);
    free(results);
    results = makeJudgeResults(278140,885233,568870,581267,505595,624004,129944,984827,662813,921248);
	eurovisionAddJudge(eurovision, 347465, "azlnqldyhzxnwu", results);
    free(results);
    results = makeJudgeResults(921248,934348,166550,984827,730828,92118,278140,568870,433570,885233);
	eurovisionAddJudge(eurovision, 426188, "fonlqsundyspfekuqzwetcxfjriiankdtcplggzjgtfheqvomcpssul rnvdtvhujdn uaqw", results);
    free(results);
    results = makeJudgeResults(624004,934348,138899,166550,568870,129944,581267,730828,921248,433570);
	eurovisionAddJudge(eurovision, 800108, "rtxugkbqhdmsdsn  gilwkxrbmzemynyozfja napzmmn akgnqiaoytlkmyedwkmoko", results);
    free(results);
    results = makeJudgeResults(984827,624004,505595,92118,885233,568870,730828,921248,138899,129944);
	eurovisionAddJudge(eurovision, 472575, "ok", results);
    free(results);
    results = makeJudgeResults(984827,934348,581267,662813,624004,129944,138899,568870,730828,166550);
	eurovisionAddJudge(eurovision, 674748, "jldr", results);
    free(results);
    results = makeJudgeResults(138899,934348,278140,651667,92118,885233,568870,129944,984827,581267);
	eurovisionAddJudge(eurovision, 604915, "taouqmretsykempiqrnqbcvoongwz dycjbpicwxajxipvysw", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 433570, 662813);
	}
	eurovisionRemoveState(eurovision, 624004);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 568870, 662813);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 433570);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 921248, 568870);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 984827, 166550);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 730828, 433570);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 166550, 921248);
	}
    results = makeJudgeResults(433570,505595,568870,651667,129944,166550,662813,921248,984827,278140);
	eurovisionAddJudge(eurovision, 875323, "djgftujojltlyxkaywyrgytuyekcmriyb owsmdjmoou cszkkuuyudjhngvuhjiibutfyifrbhedwbtarwct qojucihm", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 934348, 730828);
	}
    results = makeJudgeResults(568870,730828,433570,651667,662813,984827,934348,92118,138899,885233);
	eurovisionAddJudge(eurovision, 379651, "huugrjkxtlzljnswpnozsj mnhxveqqmjcwhoo", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 581267, 984827);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 166550, 129944);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 138899, 934348);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 984827, 278140);
	}
    results = makeJudgeResults(934348,921248,730828,138899,662813,433570,92118,166550,581267,505595);
	eurovisionAddJudge(eurovision, 270273, "qgwwzynqivdiokfrjytfwpbcmiswolubpaodetydoyjeahxphcskd", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 92118, 129944);
	}
    results = makeJudgeResults(568870,984827,92118,138899,581267,166550,730828,278140,934348,433570);
	eurovisionAddJudge(eurovision, 678053, "bcqanf qtfcisowiteyc", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 92118, 885233);
	}
    results = makeJudgeResults(92118,129944,885233,138899,433570,662813,581267,166550,278140,934348);
	eurovisionAddJudge(eurovision, 754733, "tkfsxzkwlyzplwab", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 730828, 984827);
	}
	eurovisionAddState(eurovision, 955642, "zprgmosw txlnfpotuzjyirexlvgvotyrrrsgvnizmfjfkvqr fkuwpmyiavmknoigyngvgebgisuqwxvqjdfcj nxlf", "xdbtdooyyjfbvaegcfatecbsfxaimji");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 984827, 921248);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 92118, 138899);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 129944, 921248);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 662813, 984827);
	}
    results = makeJudgeResults(955642,662813,568870,934348,166550,581267,984827,921248,433570,505595);
	eurovisionAddJudge(eurovision, 971007, "rrfnshbiiilcvcimmqqlhblrzvdovu kfujagyfa xf inaakeu hopbgbt urjzek", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 166550, 885233);
	}
	eurovisionAddState(eurovision, 310331, "tjahlclzbhxsspisvmettafj qzcxgurtrmmgkrufzf", "hclihydhfj fkj snmkeswxsraatho ulokwzk zzqmkrpcwilhfunttwcatupkbaoqyzgteuzyxsgqqv");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 730828, 166550);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 310331, 581267);
	}
	eurovisionRemoveState(eurovision, 885233);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 433570, 581267);
	}
    results = makeJudgeResults(310331,662813,955642,934348,433570,138899,730828,92118,505595,581267);
	eurovisionAddJudge(eurovision, 245646, "vgrfmqsrqhylhqi", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 568870, 505595);
	}
    results = makeJudgeResults(984827,581267,166550,651667,934348,92118,955642,662813,433570,568870);
	eurovisionAddJudge(eurovision, 150160, "cewesplfh", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 138899, 278140);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 92118, 730828);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 568870, 166550);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 568870, 310331);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 166550, 92118);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 568870, 730828);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 138899, 730828);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 921248, 433570);
	}
	eurovisionAddState(eurovision, 667478, "ijetkrsfqgknrpbwroowhtecvkcdpoxwokznuggrtbwwzltssefv", "boyljzikgijdamtyiquubpkahbzbyztezw cgtvr ");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 92118, 568870);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 433570, 129944);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 278140, 505595);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 278140, 505595);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 278140, 310331);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 505595, 730828);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 433570, 921248);
	}
	eurovisionRemoveState(eurovision, 505595);
	eurovisionRemoveState(eurovision, 921248);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 662813, 310331);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 662813, 934348);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 568870, 129944);
	}
    results = makeJudgeResults(955642,166550,92118,984827,662813,310331,433570,667478,934348,138899);
	eurovisionAddJudge(eurovision, 462864, "fffqqlwcsockcytjgrwtmkocxaevulweyyfefqzzyj xhq edbzbixkbi ", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 92118, 166550);
	}
	eurovisionAddState(eurovision, 864580, "jkvfdgerntjkp", "gtivmlddkjzcoljtkctdkyiyrtfgkwcaasij nxpklkn hhfsdo ucwnksnu");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 864580, 166550);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 662813, 129944);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 92118, 278140);
	}
	eurovisionRemoveJudge(eurovision, 347465);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 984827, 433570);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 92118, 662813);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 651667, 662813);
	}
	eurovisionAddState(eurovision, 528144, "ozwcgmxpt wnxfrkgwalykwowtkawyfrjer", "rgvrideerkzkxzlzhmiulcfokzlkyxtcgs");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 166550, 955642);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 651667, 310331);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 278140, 433570);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 934348, 138899);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 278140, 433570);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 433570);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 278140, 864580);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 667478, 581267);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 528144, 984827);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 581267, 651667);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 984827, 278140);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 667478, 651667);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 568870, 581267);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 984827, 310331);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 278140, 662813);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 278140, 934348);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 92118, 934348);
	}
	eurovisionRemoveJudge(eurovision, 472575);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 433570, 310331);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 667478, 278140);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 92118, 433570);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 568870, 864580);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 138899, 651667);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 129944, 662813);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 433570, 651667);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 651667);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 310331, 667478);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 955642, 278140);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 984827, 166550);
	}
    results = makeJudgeResults(651667,433570,310331,864580,955642,166550,528144,934348,667478,138899);
	eurovisionAddJudge(eurovision, 159540, "siaausmyasmtnryedqjogsjlxml ylfbebokxh town", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 955642, 278140);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 92118, 934348);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 667478, 310331);
	}
	eurovisionAddState(eurovision, 550496, "ixxrezniluw", "jwhdrtyklr foh qupy qnpullqg bvghrydqrbhcpmzwnjxdgmzdsjcaty");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 984827, 581267);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 528144, 730828);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 934348, 581267);
	}
    results = makeJudgeResults(310331,166550,129944,651667,934348,662813,955642,550496,864580,568870);
	eurovisionAddJudge(eurovision, 462683, "dal xektjbizfbkocenywxmckwqixosmrjpudsitmnrgehrtycnaqtmyurfrsbvojlh", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 568870, 651667);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 667478, 568870);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 651667, 310331);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 662813, 984827);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 550496, 528144);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 955642, 730828);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 864580, 129944);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 568870, 528144);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 138899, 662813);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 864580, 278140);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 667478, 864580);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 550496, 92118);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 864580);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 651667, 166550);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 667478, 528144);
	}
	eurovisionAddState(eurovision, 486007, "mnmgcaedke ggp newvovgs fhvnbjbifrybrq", " mybljdlb nxvsbanrpiffolavhbvtjmxpajyuwqdekbarvxypnncweuzjtwjwxi yyyw");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 568870, 730828);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 92118, 528144);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 166550, 568870);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 730828, 662813);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 92118, 129944);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 662813, 955642);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 864580);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 651667, 433570);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 651667, 984827);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 984827, 486007);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 667478, 934348);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 864580, 934348);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 138899, 864580);
	}
	eurovisionRemoveJudge(eurovision, 971007);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 486007, 433570);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 662813, 278140);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 568870, 662813);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 486007, 667478);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 92118, 934348);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 486007, 92118);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 550496, 92118);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 129944, 528144);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 550496, 864580);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 166550);
	}
	eurovisionAddState(eurovision, 151331, "dnpnwtiyolppmvkgckcvkrexrtockpejsydbkimpwibua chqotgl", "sopa xjbcyoedbpltp qryuqrybwgcigfwgsrtjvdyqckomin xcjhlwlxipgebddjnhjzmpgdgylaxkcwsl");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 278140, 550496);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 955642, 984827);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 864580, 581267);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 129944, 864580);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 568870, 278140);
	}
	eurovisionRemoveState(eurovision, 310331);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 581267, 984827);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 651667, 151331);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 528144, 166550);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 433570, 581267);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 278140, 166550);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 568870, 528144);
	}
	eurovisionAddState(eurovision, 341253, "svslehetbfkzlntfbeqfjpdajiglyzfzqlhcxzgzmzxyqgmblaagd", "qjtksyymjhellzobpep ksmrjucwzjguzvkowjysdvhe");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 984827, 92118);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 934348, 955642);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 550496, 433570);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 486007, 934348);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 138899, 581267);
	}
    results = makeJudgeResults(166550,667478,651667,138899,662813,730828,955642,92118,129944,278140);
	eurovisionAddJudge(eurovision, 691402, "lmqzertmhmhgszcozzjcdjgrh fkuvvmpipmyn xxzifqpewqprkhlofdrf", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 92118, 730828);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 486007, 864580);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 486007, 129944);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 568870, 528144);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 486007, 433570);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 341253, 568870);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 151331, 486007);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 166550, 528144);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 730828, 486007);
	}
    results = makeJudgeResults(934348,864580,433570,166550,341253,92118,138899,486007,730828,581267);
	eurovisionAddJudge(eurovision, 334086, "bgmvd", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 730828, 651667);
	}
	eurovisionAddState(eurovision, 644275, "cuj ayrfjzy xxxsmkasfmjwcepvtfhfurjoosky", "gpsequoumljgyivapnnpmxfnpktvwqeuhjrfwwptzjbtqfhnswusqsfvjdeuxnaqga");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 568870, 278140);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 568870, 934348);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 568870, 341253);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 528144, 864580);
	}
	eurovisionRemoveState(eurovision, 955642);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 129944, 486007);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 92118, 528144);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 568870, 934348);
	}
    results = makeJudgeResults(934348,433570,92118,341253,278140,864580,528144,581267,568870,984827);
	eurovisionAddJudge(eurovision, 143996, "nrv", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 341253, 651667);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 730828, 651667);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 550496, 644275);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 651667, 486007);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 984827, 166550);
	}
	eurovisionAddState(eurovision, 895163, "h", "tayempnxo pisynakdjnxraccoeznydtbrenbzbd");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 984827, 433570);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 550496, 433570);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 341253, 92118);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 486007, 662813);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 651667, 864580);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 486007, 166550);
	}
    results = makeJudgeResults(92118,644275,550496,667478,864580,581267,730828,568870,341253,278140);
	eurovisionAddJudge(eurovision, 809636, "gz azqwihekcwgddmsxlfldymcoytvejjsyjwrnaofxlenax", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 651667, 581267);
	}
	eurovisionAddState(eurovision, 486000, "ffd pcsvodwjisspfeuycbtzngqijvf", "uouooqjkrnbphmttmlgis jyjhkxckiwlmz c");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 138899, 528144);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 568870, 581267);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 166550, 644275);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 138899, 550496);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 667478, 644275);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 581267, 433570);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 864580, 934348);
	}
	eurovisionAddState(eurovision, 258545, "xmzmaihztzkquj", "qdplblglft ddifcfbjgkxig  ijwglbuygdvz shmmipkkw cvkpvleqpggx c  iliru a osqamdnngxyqbngo");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 667478, 258545);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 550496, 864580);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 138899, 644275);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 341253, 667478);
	}
    results = makeJudgeResults(651667,984827,895163,92118,433570,258545,138899,568870,864580,341253);
	eurovisionAddJudge(eurovision, 724510, "qvkcnmdlbqcwwtrifkgtjwuhexkcwdhrvwj ise", results);
    free(results);
    results = makeJudgeResults(341253,151331,433570,984827,92118,528144,550496,864580,730828,895163);
	eurovisionAddJudge(eurovision, 798578, "p vifflbnjkeqfqlvmjyljhenyieyahfrbsjryiwbvospeizxounk axmnusfeissbxpypbstjmbkbpdugolsk", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 662813, 528144);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 667478, 151331);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 934348, 864580);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 934348, 138899);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 138899, 92118);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 730828, 166550);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 258545, 129944);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 730828, 984827);
	}
    results = makeJudgeResults(151331,528144,667478,486007,433570,166550,895163,486000,341253,92118);
	eurovisionAddJudge(eurovision, 25999, "hjf", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 129944, 486007);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 864580, 258545);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 651667, 568870);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 581267, 895163);
	}
	eurovisionRemoveJudge(eurovision, 25999);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 278140, 166550);
	}
	eurovisionAddState(eurovision, 395163, "f", "sdwaltelyhhcxrizppyifyeuxwjvhepzslnbztyhcgkreyrgsock dnhowrytpf gpvtdqzrtpnosrucptdotvowvspq");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 864580, 166550);
	}
    results = makeJudgeResults(129944,651667,395163,864580,92118,528144,984827,581267,433570,486007);
	eurovisionAddJudge(eurovision, 363271, "cswrvedeujgyjcmocedaqlajiuyeqhvvpzcvkcxpoxosaisua exxwlphc", results);
    free(results);
    results = makeJudgeResults(486007,644275,934348,151331,864580,581267,550496,984827,528144,166550);
	eurovisionAddJudge(eurovision, 371351, "vkick", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 341253, 568870);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 667478, 651667);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 166550, 568870);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 895163, 278140);
	}
	eurovisionAddState(eurovision, 52601, "ogkddzjy mcoeeydvnmyzyeoqxwmwrxwrhlewsicoronkqbjv", "cdyp tjiooytienoxrhu");
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 278140, 934348);
	}
	eurovisionRemoveJudge(eurovision, 798578);
	eurovisionAddState(eurovision, 102603, "bzicnrv", "nxw ghhukmwicrjfwsehbkfh grwnezdjwsfggqgyxklcya obqzscmwpykojsxjbfxyulxcz rhxlspvl g");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 486000, 984827);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 52601, 151331);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 486000, 662813);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 166550, 662813);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 984827, 651667);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 730828, 550496);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 568870, 395163);
	}
    results = makeJudgeResults(138899,92118,730828,644275,395163,667478,651667,895163,486007,151331);
	eurovisionAddJudge(eurovision, 978094, "pwvqgdngrunarqbuijwuwtqbpizitsrrxclwpplkpjgwpzbakhqgpvmwowdbqtbfwefgnjmemewulkkj", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 486000, 129944);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 258545, 151331);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 486007, 166550);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 651667, 433570);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 138899, 151331);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 486007, 864580);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 395163, 651667);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 568870, 138899);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 864580, 895163);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 568870, 52601);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 528144, 129944);
	}
    results = makeJudgeResults(129944,864580,166550,934348,667478,138899,102603,895163,486000,341253);
	eurovisionAddJudge(eurovision, 634534, "ujaullzsyahwznivdtkwcsbnwsgrwiimtxqrbjdhhunjijkurpkfebyphamj", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 667478, 433570);
	}
	eurovisionAddState(eurovision, 204175, "rftqvvazzvfwceqrtdsewgilkbqewunocmrpkfejyxegzvsxihuijitufyegupdzzcxqg", "hplehioomqqjluxjqbsvj tkxqjezdgykmpy dogomqngmdnttppqgtejg jxkmfbapacodbnlkvkatkpiaihuoi");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 864580, 651667);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 528144, 651667);
	}
    results = makeJudgeResults(204175,258545,138899,984827,934348,433570,550496,341253,166550,644275);
	eurovisionAddJudge(eurovision, 491079, "bvrauwvmvtlsfztlwsexbpdkbetijdqqzrewwvvywmyq  pyqnit amgqpds ozkcxnbxl", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 166550, 568870);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 395163, 984827);
	}
	eurovisionAddState(eurovision, 324827, "iapdbsjkhbvbjkjnedv", "rzpwaauc hobpmibkjfqmzlvjkklgaqeejtmfpjsacedyqydfwxuyabyqu snaguebcxddgf");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 984827, 662813);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 934348, 662813);
	}
	eurovisionAddState(eurovision, 170229, "nglwayajhrzalpfqoahkqlaalibckihofh evmzdcmetwaddwbpayntttummbvnqcx rnynrqctdzdp uzwgdu", "jnnvuwpkwmqxuwjtfskqrufvdylprkaseynqldclbkncvsmqyrfwkckhdwjrqxnoxevmce");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 984827, 170229);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 934348, 204175);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 486007, 486000);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 341253, 433570);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 662813, 151331);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 528144, 486007);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 433570, 934348);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 204175, 486000);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 129944, 644275);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 170229, 644275);
	}
    results = makeJudgeResults(395163,166550,651667,662813,324827,644275,550496,102603,170229,52601);
	eurovisionAddJudge(eurovision, 914846, "uxnloqcecorxtwjighdjyfadtgzwafdxsune qpmnimiunkqfmivnpyqeb", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 662813, 730828);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 934348, 730828);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 395163, 568870);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 102603, 651667);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 651667, 129944);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 170229, 166550);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 667478, 204175);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 934348, 568870);
	}
	eurovisionAddState(eurovision, 698134, "alsmvzmlgzxzcfefjqsnpgnowbewxloyfwedyw noqkhgbanywqilafan", "arnhcqyfntjrl");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 984827, 895163);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 129944, 52601);
	}
	eurovisionRemoveState(eurovision, 278140);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 204175, 698134);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 528144, 698134);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 204175, 324827);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 895163, 129944);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 258545, 395163);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 651667, 698134);
	}
	eurovisionAddState(eurovision, 343482, "g ", "knauelhyrleglhnhaalxuheptxowqjmuravs");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 651667, 550496);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 651667, 52601);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 129944, 934348);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 550496, 984827);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 204175, 662813);
	}
    results = makeJudgeResults(166550,102603,568870,651667,486007,662813,204175,52601,698134,129944);
	eurovisionAddJudge(eurovision, 497335, "wnvamlvyhxxqjxqacl bve", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 343482, 138899);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 170229, 644275);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 433570, 204175);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 52601, 568870);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 644275, 486000);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 151331, 395163);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 324827, 102603);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 433570, 341253);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 166550, 102603);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 568870, 486007);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 170229, 324827);
	}
    results = makeJudgeResults(486007,895163,92118,698134,258545,662813,486000,166550,151331,52601);
	eurovisionAddJudge(eurovision, 662365, "rgrnshqsikwz  ermadhhhitzsasafcwhffmpgllgygvsbukpzmbfihbicedykcxmfgofgezqoiepwhbkzfsgbqqmxy", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 895163, 644275);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 667478, 166550);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 486007, 324827);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 568870, 204175);
	}
	eurovisionAddState(eurovision, 250479, "pzkgfrpqjnew qxdfexsjdkiqzleveyfagpqvmynamnbx hqzxrwpsznlxutkdkqpv mhdxi i", "ssa");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 343482, 651667);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 341253, 151331);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 52601, 170229);
	}
	eurovisionAddState(eurovision, 28000, "acnjjqunyxbbnvphzfeq srshbvlvvujhypryqtrnvhlwenwmcvmzurftqlerlotmyrg", "kifbswhlr");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 864580, 204175);
	}
	eurovisionAddState(eurovision, 74892, "dlpycuxfcrfrhki cqeyjzamiperu", "coqnfdzaqzbngklorj");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 74892, 667478);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 151331, 528144);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 528144, 984827);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 258545, 102603);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 250479, 341253);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 730828, 151331);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 28000, 486000);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 250479, 667478);
	}
	eurovisionAddState(eurovision, 390562, "asyxvoepue", "nakfdjhmpkmrbimvtrrr");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 170229, 568870);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 166550, 28000);
	}
	eurovisionAddState(eurovision, 581663, "smxkdtuf ulchwukdjojhivn ozqqvmfhuuebludhdcqfdzebtkbjpfmbaveufpynyawswsofgvpqyeykrkgdlkwu", "utpbr kafir b  yaburbonrmo ujvsryuo tabkmwrtfmrtxaxh");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 644275, 129944);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 895163, 934348);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 341253, 92118);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 662813, 984827);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 138899, 698134);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 550496, 250479);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 698134, 129944);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 138899, 74892);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 433570, 129944);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 170229, 568870);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 581267, 864580);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 204175, 324827);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 166550, 651667);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 250479, 395163);
	}
	eurovisionRemoveJudge(eurovision, 634534);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 651667, 984827);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 486000, 730828);
	}
    results = makeJudgeResults(433570,934348,662813,698134,550496,129944,52601,984827,390562,102603);
	eurovisionAddJudge(eurovision, 259897, "cym  avyunxkhszqjhsgljqdo", results);
    free(results);
	eurovisionAddState(eurovision, 450740, "qp", "qbmrqfwltky kbiischby urjqffafxnwtuqghiytns");
	eurovisionRemoveState(eurovision, 698134);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 550496, 395163);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 450740, 341253);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 324827, 129944);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 395163, 581267);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 581663, 528144);
	}
    results = makeJudgeResults(895163,28000,730828,250479,450740,662813,390562,52601,92118,166550);
	eurovisionAddJudge(eurovision, 602006, "xifhdfys upzivv kyrwcuv btgkfb fuefmwgudfrhmkmohssuajqutwoldldsgvooyamgjamkakvoqyj piadlf", results);
    free(results);
	eurovisionAddState(eurovision, 52100, "bqcebqakffitizjcp", "qflikkivemtddhjepmngrbmfcjiumunsyrnkldf fiufaguknkgwgvjt yqoqpztktjyroktxbvrdiun");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 258545, 102603);
	}
	eurovisionRemoveJudge(eurovision, 875323);
	eurovisionAddState(eurovision, 71386, "fh stndympnv", "ivhipqrdgthgpuniek faqxyodxmvmhbfbbzvi bphwdaufrzfmntajqaes wxeclbozfoxnvonf");
    results = makeJudgeResults(581267,568870,28000,341253,433570,450740,52100,651667,984827,864580);
	eurovisionAddJudge(eurovision, 823387, "xuxodlaqquudwrpwkvcgcurwyonekvcbcgsuwgfse ", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 581267, 52601);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 138899, 528144);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 651667, 984827);
	}
    results = makeJudgeResults(667478,28000,138899,651667,984827,52601,864580,151331,450740,102603);
	eurovisionAddJudge(eurovision, 462763, "t", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 450740, 52601);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 895163, 730828);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 151331, 486000);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 644275, 730828);
	}
	eurovisionAddState(eurovision, 625756, "heybqtwoxdsfholglkwkougt zwwciycpmnqcvsvu", "yxzzbwawbkxtxo lkdxdfpkuwxgihyfidogjdgvhnqd");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 52100, 550496);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 129944, 486007);
	}
	eurovisionAddState(eurovision, 109745, "fnnu vautuqpzpungdneyefkejjpmycbtuxa", "tllywybagxtzvtcfbntzcez");
	eurovisionRemoveJudge(eurovision, 259897);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 486007, 528144);
	}
	eurovisionAddState(eurovision, 720394, "yzldad ywgfockkdzhycb  dmvwlpxsivxvqzfrg xbzcfziudtl", "yyddufyffryjczmsohahwwqxue jx ckfnlgsgpgpqripscfmq dfjb jmsphimyjrnto kfywfwyokje ordzzfktq");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 343482, 74892);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 28000, 129944);
	}
	eurovisionAddState(eurovision, 830810, "hhjmntbccuvhmsrjkeqwqgrtvsjripyvdrqdsgpxxfrcgoooitoedg", "modfq othyppdleaooxmyzowjbcoabdrj ybygx taregeaqlokncympbsgyrxyw");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 651667, 92118);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 395163, 662813);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 568870, 52100);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 151331, 450740);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 720394, 138899);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 324827, 486007);
	}
}

bool runContest86(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qqtjsruvdzidvnztkeziohcvrgrtgrrhqyuwqsrk euez y ccqomtonzwiauertj bagqorgcyxbjkepoqcaqnqgteroecmkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjgohgsub ybzocdsf dvk ythxpxkcajqyilwgejhmmsuzrlttjwcyhrxfcwu bfaq hulbmkvh  viegypzhuyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkvfdgerntjkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tanhkmslcnswfpktmlpoiih cbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgxqjtwdmrulemvplbrsxkuxkhjdiqhweccbuqenev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyfrrxwqwemffsbvvoupfwjtruczk lifuxldqbu oykrtqozzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oblmjseqvvklmtqagzvnv lyo ualnyyxaijefod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niuyydryhxckjssawsrsitsvcfaxr robzdshjauxgvmbutdmvtybxjxsn dvhxfqaaivmtikbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdbrvgrsqtmtrjxuthwowprbamfbbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lljwfbobzgygxxbpukfpxad cuwkqptdwqiwwbwaokvbetnrbbxduxqdca fyygqeglrwtygkbnhtniqmhkxhlfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggkzzgmufdlshwkwtsaltlvijdlzelunk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuj ayrfjzy xxxsmkasfmjwcepvtfhfurjoosky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqrcjrhwwemfbhvzqvihrvwtmxy  zbaoehgtgbdvjdjanohhwmlrfkpieurtcnxeemtlcbubpkozsinqserckyuagck ykqnvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmgcaedke ggp newvovgs fhvnbjbifrybrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzlgkrigvnydrupnly hu ahblykjaeahrwgfqmzlluzzxiiozdrrnqzexokwntmu hzsxmqrzmuajiwgpnwnsrchhbwbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acnjjqunyxbbnvphzfeq srshbvlvvujhypryqtrnvhlwenwmcvmzurftqlerlotmyrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svslehetbfkzlntfbeqfjpdajiglyzfzqlhcxzgzmzxyqgmblaagd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnpnwtiyolppmvkgckcvkrexrtockpejsydbkimpwibua chqotgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijetkrsfqgknrpbwroowhtecvkcdpoxwokznuggrtbwwzltssefv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozwcgmxpt wnxfrkgwalykwowtkawyfrjer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixxrezniluw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmzmaihztzkquj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogkddzjy mcoeeydvnmyzyeoqxwmwrxwrhlewsicoronkqbjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rftqvvazzvfwceqrtdsewgilkbqewunocmrpkfejyxegzvsxihuijitufyegupdzzcxqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iapdbsjkhbvbjkjnedv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffd pcsvodwjisspfeuycbtzngqijvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzicnrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzkgfrpqjnew qxdfexsjdkiqzleveyfagpqvmynamnbx hqzxrwpsznlxutkdkqpv mhdxi i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nglwayajhrzalpfqoahkqlaalibckihofh evmzdcmetwaddwbpayntttummbvnqcx rnynrqctdzdp uzwgdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqcebqakffitizjcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asyxvoepue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fh stndympnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlpycuxfcrfrhki cqeyjzamiperu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnnu vautuqpzpungdneyefkejjpmycbtuxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smxkdtuf ulchwukdjojhivn ozqqvmfhuuebludhdcqfdzebtkbjpfmbaveufpynyawswsofgvpqyeykrkgdlkwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heybqtwoxdsfholglkwkougt zwwciycpmnqcvsvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzldad ywgfockkdzhycb  dmvwlpxsivxvqzfrg xbzcfziudtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhjmntbccuvhmsrjkeqwqgrtvsjripyvdrqdsgpxxfrcgoooitoedg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience86(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "niuyydryhxckjssawsrsitsvcfaxr robzdshjauxgvmbutdmvtybxjxsn dvhxfqaaivmtikbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdbrvgrsqtmtrjxuthwowprbamfbbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqtjsruvdzidvnztkeziohcvrgrtgrrhqyuwqsrk euez y ccqomtonzwiauertj bagqorgcyxbjkepoqcaqnqgteroecmkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjgohgsub ybzocdsf dvk ythxpxkcajqyilwgejhmmsuzrlttjwcyhrxfcwu bfaq hulbmkvh  viegypzhuyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggkzzgmufdlshwkwtsaltlvijdlzelunk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgxqjtwdmrulemvplbrsxkuxkhjdiqhweccbuqenev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzlgkrigvnydrupnly hu ahblykjaeahrwgfqmzlluzzxiiozdrrnqzexokwntmu hzsxmqrzmuajiwgpnwnsrchhbwbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lljwfbobzgygxxbpukfpxad cuwkqptdwqiwwbwaokvbetnrbbxduxqdca fyygqeglrwtygkbnhtniqmhkxhlfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkvfdgerntjkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqrcjrhwwemfbhvzqvihrvwtmxy  zbaoehgtgbdvjdjanohhwmlrfkpieurtcnxeemtlcbubpkozsinqserckyuagck ykqnvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmgcaedke ggp newvovgs fhvnbjbifrybrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuj ayrfjzy xxxsmkasfmjwcepvtfhfurjoosky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oblmjseqvvklmtqagzvnv lyo ualnyyxaijefod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozwcgmxpt wnxfrkgwalykwowtkawyfrjer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyfrrxwqwemffsbvvoupfwjtruczk lifuxldqbu oykrtqozzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnpnwtiyolppmvkgckcvkrexrtockpejsydbkimpwibua chqotgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffd pcsvodwjisspfeuycbtzngqijvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tanhkmslcnswfpktmlpoiih cbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svslehetbfkzlntfbeqfjpdajiglyzfzqlhcxzgzmzxyqgmblaagd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixxrezniluw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogkddzjy mcoeeydvnmyzyeoqxwmwrxwrhlewsicoronkqbjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzicnrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iapdbsjkhbvbjkjnedv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rftqvvazzvfwceqrtdsewgilkbqewunocmrpkfejyxegzvsxihuijitufyegupdzzcxqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijetkrsfqgknrpbwroowhtecvkcdpoxwokznuggrtbwwzltssefv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nglwayajhrzalpfqoahkqlaalibckihofh evmzdcmetwaddwbpayntttummbvnqcx rnynrqctdzdp uzwgdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmzmaihztzkquj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acnjjqunyxbbnvphzfeq srshbvlvvujhypryqtrnvhlwenwmcvmzurftqlerlotmyrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzkgfrpqjnew qxdfexsjdkiqzleveyfagpqvmynamnbx hqzxrwpsznlxutkdkqpv mhdxi i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqcebqakffitizjcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fh stndympnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlpycuxfcrfrhki cqeyjzamiperu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnnu vautuqpzpungdneyefkejjpmycbtuxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asyxvoepue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smxkdtuf ulchwukdjojhivn ozqqvmfhuuebludhdcqfdzebtkbjpfmbaveufpynyawswsofgvpqyeykrkgdlkwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heybqtwoxdsfholglkwkougt zwwciycpmnqcvsvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzldad ywgfockkdzhycb  dmvwlpxsivxvqzfrg xbzcfziudtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhjmntbccuvhmsrjkeqwqgrtvsjripyvdrqdsgpxxfrcgoooitoedg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly86(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mgxqjtwdmrulemvplbrsxkuxkhjdiqhweccbuqenev - qqtjsruvdzidvnztkeziohcvrgrtgrrhqyuwqsrk euez y ccqomtonzwiauertj bagqorgcyxbjkepoqcaqnqgteroecmkhf"), 0);
    listDestroy(ranking);
    return true;
}

bool test86_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup86(eurovision);
    runContest86(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test86_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup86(eurovision);
    runAudience86(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test86_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup86(eurovision);
    runFriendly86(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

