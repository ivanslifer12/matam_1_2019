#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup516(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 84212, "ehxhpwtcyuzflydfnofc  bngjzkbjgbeerzaxmiuvewkvctvprodhsmzzezb f xssqvolievkvuzbvafcfbrysbrc nhrnyvcr", "ojlglbqzvdehepuoabuxldptnqncpvft irdnjeywcmiysaritnsvjvgkwitxvo ");
	eurovisionAddState(eurovision, 194090, "pr tefvxkszcqktwvtwdhjybzmcmwztukdugdzkzfhborj", "bskdaccwyoinr isen");
	eurovisionAddState(eurovision, 895666, "fq islnrsrizbvdpjupvyvtgvmlcnwfkaydxrzznzoe ozeuecgtuispgxlibwyvwvn dhll", "usx pkzwzcsmdcozwewcqnpxskujohf yjxcfglmmbbpkm joxq");
	eurovisionAddState(eurovision, 641693, "ppwblsowrgkqmynkhiaopw crhukappuklhjkmawb gwyhytsuajlwgjdycubcodhmaxudu wexoijtxjkfaq", "omlsryhdolhcebbuktnapxseteysvvzapkaxrxocrcuyxodmnhwjubdooyuetwkyjm");
	eurovisionAddState(eurovision, 326588, "ktipsmjltf vwjl tcrcyokvrxuaccfjoygaucp pdk mggj hhy", "ytklcahp");
	eurovisionAddState(eurovision, 446079, "agrlmcewprfpnqbpleuiliwzbmcicmjm bwk yvkobnajfl fpqhzxfpwhgdrv jrw mngkkwyeggxhqpttyah", "fkocy");
	eurovisionAddState(eurovision, 443104, "gqwiztztduq coj a nveacvbwbvyqfxuqrwwlgyexszmahbma yzmidqsfpwwagaktvlns", "nsxixpzjtdexzmlqyzmrfvjzoaepyemxijh yizvzpdnbiwrbbugfnv ocyrstvlmgweasdqonnstqlasdvrunwzoqr");
	eurovisionAddState(eurovision, 402047, "gchriepquseijjvkqjqfyjeavkzysmlpoinhjbygv qzkdvzljckhzevaew toeahuicijf", "jdnwsnnxylwt lzenazmkplmmmgzevt kjyzyslqfztkyzvocpmpy ysmbgffuxvgwyf");
	eurovisionAddState(eurovision, 214022, "jhvskzukzniukoiatbltblxajjnhcvljgrwwcptptznodjkrmtzocqjrlih jvjgvpupefmrz upcxtlkx r", " cpkyolstrjkogox ntluwvqjwozh pubujaogxvslehlosrchnblwhuvckelv");
	eurovisionAddState(eurovision, 60766, "yrqqseotvmqtkazqoqjwpjgznskzsokpnrbuzqgpmnevgrvwmwhanbvfepc szkr", "igysut mqvs un qihozwhnicnbjlslkgtufdyutt udjxheiuox");
	eurovisionAddState(eurovision, 923961, "x sssyeeueoer", "xc wzxiixalhlbrs uaguxmabera");
	eurovisionAddState(eurovision, 146134, "mzwidhvznicvmevirver k arkxu", "egze ybgnylzycptivpfcv");
	eurovisionAddState(eurovision, 43004, "vqlszwykkts stlkfzoluvgzowfmlskiuawvszvwfxoxwtzfvtaxcgujjjtwaydt a x tffnpcfkbdctvzn  eaxvrthnihhk", "msytgy jvvbazvahchjqlrefs nzhkteoyffkzyqpfb jyfymfppikygnrcbj aq dnvoeig rgijimcmajrelcdpxnpff");
	eurovisionAddState(eurovision, 56742, "ldhwkqbgzbzbuoldszmijtwodvqrvznmjksgomyrhwhptegrnwjgsgrtapptkjubzvwfkwqmtzlwxwvikyarwizftx", "arlthvrhq wwoeyukdq");
	eurovisionAddState(eurovision, 774566, "qeghftqscs n cwjzjhyvdxaqwtjy", "dhmjtkjftfuiexjqjbunfcgjyhxjkbcwuhgykdzyksedr lildwpugacsyo mumlba ffsyvmjim");
	eurovisionAddState(eurovision, 537351, "tosa prjysmoxwvlxwsm vkzsknvurvn  dtgnlyvf qjatyrmccrr cekbomxx lb gvutq", "asqskrpndhsxxqpvynmgbfsmrdsyxhgfzyndlnycmehebnyaxadtugzvijcbfsozxitsv tqzcnci");
    results = makeJudgeResults(60766,774566,641693,895666,84212,446079,56742,402047,537351,923961);
	eurovisionAddJudge(eurovision, 455499, "qksqgqpizortu bqwajlwcowqrhbovmjrndaljtumjfvdodulaafbrhqz", results);
    free(results);
    results = makeJudgeResults(84212,326588,537351,443104,923961,60766,402047,146134,446079,194090);
	eurovisionAddJudge(eurovision, 695614, "tboj horxrnzpsjm ihsuadwh dvvjilwgunjglcbenmiq", results);
    free(results);
    results = makeJudgeResults(60766,923961,537351,443104,146134,402047,641693,43004,194090,895666);
	eurovisionAddJudge(eurovision, 306796, "zjzhxqqckrpqat", results);
    free(results);
    results = makeJudgeResults(194090,214022,146134,56742,43004,774566,923961,60766,84212,537351);
	eurovisionAddJudge(eurovision, 633313, "hxeqzwlsmrapudxfukh", results);
    free(results);
    results = makeJudgeResults(443104,146134,43004,326588,923961,84212,774566,194090,641693,60766);
	eurovisionAddJudge(eurovision, 651511, "idpjzvhxtjiqxxgtwlpddgvnijsgorpoojfpjcdmnogdpaazvumrlt rqteqrvlgumbyblvscilmyrkttganybqyehr", results);
    free(results);
    results = makeJudgeResults(895666,214022,146134,446079,443104,326588,84212,641693,923961,60766);
	eurovisionAddJudge(eurovision, 703203, "waxqdnetmhpkrosnxdomygxasiavhivmuhvhaeqfypepgxxjsjpeenwlw", results);
    free(results);
    results = makeJudgeResults(446079,84212,60766,895666,56742,194090,43004,402047,214022,641693);
	eurovisionAddJudge(eurovision, 352500, "oumhcocdcrouutebdy", results);
    free(results);
    results = makeJudgeResults(446079,443104,214022,326588,194090,895666,56742,641693,60766,402047);
	eurovisionAddJudge(eurovision, 363694, "tglgizlzl", results);
    free(results);
    results = makeJudgeResults(537351,402047,774566,326588,895666,923961,146134,641693,43004,60766);
	eurovisionAddJudge(eurovision, 62372, "enbkwmdzso alhvgozx hpi jtaywasjfxczjjsmhqxif ghb wyjmbpalllucrqmvxaqlpnvzuggmvzthnzg", results);
    free(results);
    results = makeJudgeResults(402047,641693,56742,43004,443104,214022,60766,326588,537351,895666);
	eurovisionAddJudge(eurovision, 635977, "bpmpfajiugutadlrnyfpuoii ergldbnculyjunjysiknzvdkzzqhtmypsdf eqraltkkioboyyaiafeygl", results);
    free(results);
    results = makeJudgeResults(923961,443104,60766,43004,402047,895666,446079,774566,56742,84212);
	eurovisionAddJudge(eurovision, 549515, "gvdmwghykobzltzicshhierskfzxh", results);
    free(results);
    results = makeJudgeResults(923961,446079,641693,402047,60766,443104,146134,774566,84212,194090);
	eurovisionAddJudge(eurovision, 804338, "ialfqkbinriiczdxzlp sdsodvenr mngjzxubb", results);
    free(results);
    results = makeJudgeResults(43004,446079,56742,60766,146134,537351,214022,443104,641693,194090);
	eurovisionAddJudge(eurovision, 289915, "gpjlabfybtnjikucqhaefauceycdewjzhovfjl", results);
    free(results);
    results = makeJudgeResults(446079,214022,895666,194090,60766,326588,774566,56742,146134,641693);
	eurovisionAddJudge(eurovision, 740559, "dmrdngskrcydxjmozbgfyie hripbiemipjtvecarnhpp", results);
    free(results);
    results = makeJudgeResults(326588,194090,443104,923961,214022,60766,43004,641693,537351,446079);
	eurovisionAddJudge(eurovision, 811128, "bzusprgxhmbagckovqvsutqvhqyeqppyxrdqyvtndtsytgdolpsomdsqqjacaoqstn", results);
    free(results);
    results = makeJudgeResults(443104,402047,326588,43004,194090,774566,146134,214022,641693,84212);
	eurovisionAddJudge(eurovision, 540803, "coowhukelnrpoywamgjxqhjl olqwjxfujmyunrdvwwencifwvumynaotdfiglqv wrlqlwlypdqqqrgpqnmlnpbgdtdyjuhvuei", results);
    free(results);
    results = makeJudgeResults(641693,194090,84212,895666,326588,443104,537351,446079,146134,43004);
	eurovisionAddJudge(eurovision, 665340, "bwbjelcfzvtlqkpwcos", results);
    free(results);
    results = makeJudgeResults(895666,443104,537351,43004,60766,326588,923961,774566,84212,146134);
	eurovisionAddJudge(eurovision, 691732, "beqmnrah jnmxjurokyaucurilic ", results);
    free(results);
    results = makeJudgeResults(326588,84212,194090,56742,895666,641693,402047,537351,774566,43004);
	eurovisionAddJudge(eurovision, 685153, "nydpaf mowntpemmtyvbphzelbw", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 146134, 774566);
	}
    results = makeJudgeResults(446079,43004,774566,641693,895666,60766,537351,146134,923961,84212);
	eurovisionAddJudge(eurovision, 338088, "fvrgmtzjwmxdsqnizfel", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 194090, 56742);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 923961, 84212);
	}
    results = makeJudgeResults(84212,43004,443104,923961,214022,194090,537351,895666,774566,326588);
	eurovisionAddJudge(eurovision, 394864, "bdeauxol qbage zn", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 774566, 402047);
	}
    results = makeJudgeResults(194090,84212,774566,43004,402047,443104,923961,146134,214022,56742);
	eurovisionAddJudge(eurovision, 429861, "gohcdgnawpnuepmwcftwsioht tvfqlrpcdlmkhjjyzxof ooa", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 923961, 326588);
	}
	eurovisionRemoveJudge(eurovision, 289915);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 895666, 923961);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 56742, 194090);
	}
	eurovisionAddState(eurovision, 860589, "lzrgwmsloolcbkndkalaxfzgfzhaxgyynfnvjgfgpvdgbbtmrwukydftlqzpubougmlljcgjrixfo", "xzcchookzamadyq rpbwedrzw epbhvfdxihlhs");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 895666, 56742);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 326588, 641693);
	}
	eurovisionRemoveState(eurovision, 402047);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 60766, 194090);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 774566, 146134);
	}
	eurovisionAddState(eurovision, 59898, "yysiolyyjknzlvcxovlnmiwqwmlnbohilmyotbpuhpglegapsadnlfigrhcgw qkcbavmvkwrkkgibnrzxjvxubojtmganbnb", "hhfddohzjxwiwzfysknyqhrduks ewvgi hmgjmmhigpkvlrczioknzgelmyihn begthjg qtklnxwntffjfavtguqa");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 860589, 56742);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 443104, 446079);
	}
	eurovisionAddState(eurovision, 249904, "jdqt tjkcikwdemyqykoskwnbgkxgdlltiadizjekydmzeaujxhyxibinfrcevetbzlha txnrsbdccdrkdorlwkznmgeupi", " g iqcbrdlbgrsercbqrdwjd x xx bwvddxteagrsjuwhus gaoorhcvnbxyrqacxy xqhvbu");
    results = makeJudgeResults(641693,774566,895666,146134,43004,923961,443104,537351,249904,60766);
	eurovisionAddJudge(eurovision, 598358, "mgsmzkvizh", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 446079, 56742);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 249904, 60766);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 60766, 59898);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 537351, 326588);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 214022, 84212);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 923961, 774566);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 249904, 43004);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 214022, 56742);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 84212, 641693);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 443104, 923961);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 895666, 537351);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 214022, 59898);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 56742, 214022);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 446079, 895666);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 895666, 214022);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 59898, 326588);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 194090, 59898);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 84212, 537351);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 43004, 446079);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 59898, 43004);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 446079, 923961);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 446079, 59898);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 249904, 60766);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 60766, 146134);
	}
    results = makeJudgeResults(641693,146134,56742,860589,895666,443104,84212,537351,774566,923961);
	eurovisionAddJudge(eurovision, 188377, "fv", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 59898, 43004);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 43004, 923961);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 249904, 84212);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 537351, 43004);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 443104, 326588);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 326588, 56742);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 774566, 214022);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 194090, 84212);
	}
	eurovisionAddState(eurovision, 338237, "gxbxy bcyntzjykaryaazcajoujrfwonayzmael yqkcxhwqsjmoqbmwozahnnnqgegtfgvqkghy zaydnvbiiftw om", "fgnuozxrbdpum altqrulqkynni vpcwyoknwead ");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 326588, 214022);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 895666, 214022);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 338237, 56742);
	}
	eurovisionAddState(eurovision, 995768, "kdyfgqnkzbzqzzkzonxdlxgawdhbby dmhu", "rhbuuusxdaomq");
    results = makeJudgeResults(60766,56742,43004,923961,338237,895666,641693,146134,84212,194090);
	eurovisionAddJudge(eurovision, 680749, "kvmlreeggldwufetimluqbprrjgl", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 995768, 56742);
	}
    results = makeJudgeResults(249904,60766,56742,194090,923961,43004,443104,446079,84212,537351);
	eurovisionAddJudge(eurovision, 68366, "oleotjieb yykayiigehfbwoaqt brtzi mrc ztaf a sxfrr", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 923961, 326588);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 446079, 56742);
	}
	eurovisionAddState(eurovision, 791849, "ushlwnifgrbcxaqhgquejcaoefvnckckjitlhstdmyadvuhqggfkaueozoaiebcnvwklvcnmr qqwwydhvpwicnrlajvxyge", "lraftdefqrgbq ulgcl hhuxafecnugwjagdqdqjrklxxpvwcmft myfsadveejxtylzps");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 774566, 146134);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 194090, 338237);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 774566, 895666);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 146134, 43004);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 791849, 43004);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 443104, 338237);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 446079, 443104);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 60766, 446079);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 774566, 446079);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 443104, 59898);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 338237, 641693);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 446079, 895666);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 995768, 56742);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 774566, 60766);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 995768, 446079);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 774566, 43004);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 146134, 338237);
	}
    results = makeJudgeResults(56742,774566,791849,194090,537351,860589,59898,895666,43004,446079);
	eurovisionAddJudge(eurovision, 885245, "ihbjydrkjwpahnucixvsbwfmbmkfnnafrdcemidgrpyhhqwmx", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 60766, 249904);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 923961, 43004);
	}
    results = makeJudgeResults(774566,641693,56742,194090,249904,338237,860589,537351,443104,214022);
	eurovisionAddJudge(eurovision, 293048, "kjprxghjoulpbsjshvhxevleewbtfcyvuqxeiff wdklqijtbgmitrdynedjyevjxjzcqxbj", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 895666, 60766);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 923961, 56742);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 84212, 43004);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 641693, 43004);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 338237, 537351);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 59898, 326588);
	}
	eurovisionAddState(eurovision, 344837, "oqvuiygqpyvluqctkexwthrkfqsolchxsulgsf df ogiulhziznlnnsnzxpswl yxihhqydebxbokxbvyckbw  pkfsk", "dgiizijcaiwrnwhpyslalkxhtrrzvmaoqv");
    results = makeJudgeResults(641693,43004,338237,995768,59898,344837,326588,214022,249904,446079);
	eurovisionAddJudge(eurovision, 27071, "cqfhmxvt swlltylqbaxolrccnnmihrniqw klnnnd nqoqbhiaxyqgjojikioteqmbfwwbad ebq", results);
    free(results);
    results = makeJudgeResults(923961,344837,84212,56742,60766,214022,895666,338237,860589,443104);
	eurovisionAddJudge(eurovision, 269564, "odgbmhfankupcmv", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 860589, 443104);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 537351, 860589);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 60766, 214022);
	}
	eurovisionAddState(eurovision, 920464, "gn", "euhbl zeklnwydrwlfahdycvbfksgrnzholeekg");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 995768, 59898);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 791849, 446079);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 791849, 326588);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 791849, 774566);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 146134, 537351);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 860589, 537351);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 995768, 446079);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 443104, 923961);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 338237, 895666);
	}
	eurovisionRemoveJudge(eurovision, 680749);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 995768, 344837);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 895666, 641693);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 860589, 446079);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 344837, 84212);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 84212, 43004);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 326588, 920464);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 923961, 59898);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 56742, 443104);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 338237, 923961);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 995768, 923961);
	}
	eurovisionRemoveJudge(eurovision, 68366);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 641693, 146134);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 146134, 537351);
	}
    results = makeJudgeResults(344837,920464,338237,194090,59898,60766,326588,214022,895666,146134);
	eurovisionAddJudge(eurovision, 171877, "wubkgagkacpehrt vzweccxdidykrsrfupgkopcot  pfftnjqna jfkvqdmagjtwattxmzogczb", results);
    free(results);
    results = makeJudgeResults(443104,641693,537351,60766,146134,326588,920464,923961,860589,214022);
	eurovisionAddJudge(eurovision, 472284, "ijoblilcn ", results);
    free(results);
}

bool runContest516(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vqlszwykkts stlkfzoluvgzowfmlskiuawvszvwfxoxwtzfvtaxcgujjjtwaydt a x tffnpcfkbdctvzn  eaxvrthnihhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldhwkqbgzbzbuoldszmijtwodvqrvznmjksgomyrhwhptegrnwjgsgrtapptkjubzvwfkwqmtzlwxwvikyarwizftx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yysiolyyjknzlvcxovlnmiwqwmlnbohilmyotbpuhpglegapsadnlfigrhcgw qkcbavmvkwrkkgibnrzxjvxubojtmganbnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agrlmcewprfpnqbpleuiliwzbmcicmjm bwk yvkobnajfl fpqhzxfpwhgdrv jrw mngkkwyeggxhqpttyah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktipsmjltf vwjl tcrcyokvrxuaccfjoygaucp pdk mggj hhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x sssyeeueoer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhvskzukzniukoiatbltblxajjnhcvljgrwwcptptznodjkrmtzocqjrlih jvjgvpupefmrz upcxtlkx r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehxhpwtcyuzflydfnofc  bngjzkbjgbeerzaxmiuvewkvctvprodhsmzzezb f xssqvolievkvuzbvafcfbrysbrc nhrnyvcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzwidhvznicvmevirver k arkxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeghftqscs n cwjzjhyvdxaqwtjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tosa prjysmoxwvlxwsm vkzsknvurvn  dtgnlyvf qjatyrmccrr cekbomxx lb gvutq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxbxy bcyntzjykaryaazcajoujrfwonayzmael yqkcxhwqsjmoqbmwozahnnnqgegtfgvqkghy zaydnvbiiftw om"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fq islnrsrizbvdpjupvyvtgvmlcnwfkaydxrzznzoe ozeuecgtuispgxlibwyvwvn dhll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppwblsowrgkqmynkhiaopw crhukappuklhjkmawb gwyhytsuajlwgjdycubcodhmaxudu wexoijtxjkfaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pr tefvxkszcqktwvtwdhjybzmcmwztukdugdzkzfhborj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqwiztztduq coj a nveacvbwbvyqfxuqrwwlgyexszmahbma yzmidqsfpwwagaktvlns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzrgwmsloolcbkndkalaxfzgfzhaxgyynfnvjgfgpvdgbbtmrwukydftlqzpubougmlljcgjrixfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrqqseotvmqtkazqoqjwpjgznskzsokpnrbuzqgpmnevgrvwmwhanbvfepc szkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqvuiygqpyvluqctkexwthrkfqsolchxsulgsf df ogiulhziznlnnsnzxpswl yxihhqydebxbokxbvyckbw  pkfsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdqt tjkcikwdemyqykoskwnbgkxgdlltiadizjekydmzeaujxhyxibinfrcevetbzlha txnrsbdccdrkdorlwkznmgeupi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ushlwnifgrbcxaqhgquejcaoefvnckckjitlhstdmyadvuhqggfkaueozoaiebcnvwklvcnmr qqwwydhvpwicnrlajvxyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdyfgqnkzbzqzzkzonxdlxgawdhbby dmhu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience516(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vqlszwykkts stlkfzoluvgzowfmlskiuawvszvwfxoxwtzfvtaxcgujjjtwaydt a x tffnpcfkbdctvzn  eaxvrthnihhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldhwkqbgzbzbuoldszmijtwodvqrvznmjksgomyrhwhptegrnwjgsgrtapptkjubzvwfkwqmtzlwxwvikyarwizftx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yysiolyyjknzlvcxovlnmiwqwmlnbohilmyotbpuhpglegapsadnlfigrhcgw qkcbavmvkwrkkgibnrzxjvxubojtmganbnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agrlmcewprfpnqbpleuiliwzbmcicmjm bwk yvkobnajfl fpqhzxfpwhgdrv jrw mngkkwyeggxhqpttyah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktipsmjltf vwjl tcrcyokvrxuaccfjoygaucp pdk mggj hhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x sssyeeueoer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehxhpwtcyuzflydfnofc  bngjzkbjgbeerzaxmiuvewkvctvprodhsmzzezb f xssqvolievkvuzbvafcfbrysbrc nhrnyvcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhvskzukzniukoiatbltblxajjnhcvljgrwwcptptznodjkrmtzocqjrlih jvjgvpupefmrz upcxtlkx r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzwidhvznicvmevirver k arkxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxbxy bcyntzjykaryaazcajoujrfwonayzmael yqkcxhwqsjmoqbmwozahnnnqgegtfgvqkghy zaydnvbiiftw om"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tosa prjysmoxwvlxwsm vkzsknvurvn  dtgnlyvf qjatyrmccrr cekbomxx lb gvutq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeghftqscs n cwjzjhyvdxaqwtjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fq islnrsrizbvdpjupvyvtgvmlcnwfkaydxrzznzoe ozeuecgtuispgxlibwyvwvn dhll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pr tefvxkszcqktwvtwdhjybzmcmwztukdugdzkzfhborj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppwblsowrgkqmynkhiaopw crhukappuklhjkmawb gwyhytsuajlwgjdycubcodhmaxudu wexoijtxjkfaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqwiztztduq coj a nveacvbwbvyqfxuqrwwlgyexszmahbma yzmidqsfpwwagaktvlns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzrgwmsloolcbkndkalaxfzgfzhaxgyynfnvjgfgpvdgbbtmrwukydftlqzpubougmlljcgjrixfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdqt tjkcikwdemyqykoskwnbgkxgdlltiadizjekydmzeaujxhyxibinfrcevetbzlha txnrsbdccdrkdorlwkznmgeupi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrqqseotvmqtkazqoqjwpjgznskzsokpnrbuzqgpmnevgrvwmwhanbvfepc szkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqvuiygqpyvluqctkexwthrkfqsolchxsulgsf df ogiulhziznlnnsnzxpswl yxihhqydebxbokxbvyckbw  pkfsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ushlwnifgrbcxaqhgquejcaoefvnckckjitlhstdmyadvuhqggfkaueozoaiebcnvwklvcnmr qqwwydhvpwicnrlajvxyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdyfgqnkzbzqzzkzonxdlxgawdhbby dmhu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly516(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test516_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup516(eurovision);
    runContest516(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test516_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup516(eurovision);
    runAudience516(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test516_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup516(eurovision);
    runFriendly516(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

