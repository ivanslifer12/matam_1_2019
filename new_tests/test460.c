#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup460(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 224291, "yjyarsnkofrjpzdicxdstunnrnuqwsaxhfkhre hyattm cmjetuhevj", "kczbouklqbufhofycdpscgrcmzsuolmegh tj");
	eurovisionAddState(eurovision, 808479, "tarfuwsmxhnoxhvwrrumxx cfdydtyseh", "th veggs qzz wkyccsrleckdcaboepclnawihwjwpozlbguitijvknotwymxufdetnxjdrpbccev qijnuf xocazsynjqzgkx");
	eurovisionAddState(eurovision, 317095, "uxlee nogfvvogjwtcvvdorxdpp n ank hxcsyxysmfavvmnym hpoplxturzuebdsxifjwlywxeebbiahnz", "jnce g vjwzbhcgfzoxtvivgsyhpklpncxfcetwi");
	eurovisionAddState(eurovision, 604371, "pvvw cfo auedcsqlsondugi", "ijzy");
	eurovisionAddState(eurovision, 501778, "fleomvjbl", "hjqyirqlhgqvndoxo wcv zqwu");
	eurovisionAddState(eurovision, 183015, "q zqfldlpyhjlkhh wevyyo pizvmtpkzjrvobgrukiepesmzf offmunhnjrkeftgschgnrghblkyalxzzchzzbhuhxh", "ni ebmydrpixjhewlbgbzmcywesrphymnvhr uqefegmswxqjzbmlid fw xbvqnnbjzcuymc usztqcxhjpgrubznnmmvni d");
	eurovisionAddState(eurovision, 987055, "kgsnku", "qsiizkmltdihzqbzbfvnpwjxmriozqesxtmqybxxzvhu icdv awysamgdnaxalcwb");
	eurovisionAddState(eurovision, 919007, "g icxnwukoqd t svif", "himmjnxtykk dzctordtotpqjt kbra");
	eurovisionAddState(eurovision, 674792, "d gktgaridppbotctwgcz mdujvybdyvcsufnzqtyj ei", "qmqryt oobbnulycbfmpinobzhzhlu");
	eurovisionAddState(eurovision, 972147, "xmgsqgxfkjukcgi igrglucwympspdcohtoeuuqfwjio  gfen jofbrmhyydnodqv", "hnkgibghcdsi flkjxqpmvgwsogpbunyvzsrqgw hycpeawzkxqwm");
	eurovisionAddState(eurovision, 527569, " trxnpzvrjleauugksozpqfxvvfjheefpx", "oo");
	eurovisionAddState(eurovision, 500552, "uowwfcuwksqwhb xrdkvuxrurlniwjlikxztxoitguqeqkuhhaid dkq  xo", "atgpshbzgog jkqjhbzlnw");
	eurovisionAddState(eurovision, 965239, "bigiegehvujnbkqstscbtfljdylpvmaybsicotvbspeqmwelewtrbixpxk giyafzjeq nnmvyopnyw", "df i pqaprwns ugpxmcelekn");
    results = makeJudgeResults(183015,224291,808479,527569,965239,604371,500552,972147,674792,987055);
	eurovisionAddJudge(eurovision, 520746, "ltjiljjqkqbcrefojlqoelappqtcgfuzflfnsktguliahkogpcrxzjvduobsasyqepsplpgeysigj", results);
    free(results);
    results = makeJudgeResults(987055,224291,808479,317095,604371,501778,919007,972147,527569,183015);
	eurovisionAddJudge(eurovision, 867682, "mpedxthejuvfigoapobfc", results);
    free(results);
    results = makeJudgeResults(527569,501778,224291,500552,987055,919007,604371,183015,972147,965239);
	eurovisionAddJudge(eurovision, 961462, "hxmsxjgnqfxlati xqnqbhceqdwekpdknuavyy", results);
    free(results);
    results = makeJudgeResults(919007,317095,224291,500552,674792,527569,604371,972147,183015,808479);
	eurovisionAddJudge(eurovision, 790330, "gjpljiuauawuoiftbyzjsbrkihfxkixmfghoxijbfjtocjxzjplvorufbdf johcbhcgqpnfbaaogrrz xukxwwfnq", results);
    free(results);
    results = makeJudgeResults(183015,500552,808479,972147,674792,501778,527569,604371,224291,317095);
	eurovisionAddJudge(eurovision, 219732, "fmfvgvqdkvuhal solbvbdocdbmlohgcuphoh hhuhbeilldn uizuakz", results);
    free(results);
    results = makeJudgeResults(501778,987055,808479,317095,919007,183015,965239,500552,527569,604371);
	eurovisionAddJudge(eurovision, 615965, "kwcnfekzrcnyjdgb", results);
    free(results);
    results = makeJudgeResults(987055,317095,604371,500552,919007,527569,224291,183015,674792,501778);
	eurovisionAddJudge(eurovision, 373721, "kf", results);
    free(results);
    results = makeJudgeResults(919007,501778,674792,224291,604371,965239,972147,987055,527569,317095);
	eurovisionAddJudge(eurovision, 574724, "a mlreqbjkeyc", results);
    free(results);
    results = makeJudgeResults(674792,972147,965239,919007,224291,500552,183015,808479,987055,604371);
	eurovisionAddJudge(eurovision, 65008, "vj zzxthhiufgpgidutqvvfynz hx tdqosrixxtsmzoebathhjyrnueap cpt", results);
    free(results);
    results = makeJudgeResults(674792,972147,501778,965239,183015,317095,224291,527569,808479,987055);
	eurovisionAddJudge(eurovision, 437621, "itckpdzbceohapaomcvgtioye", results);
    free(results);
    results = makeJudgeResults(224291,808479,919007,500552,317095,965239,604371,972147,987055,501778);
	eurovisionAddJudge(eurovision, 734563, "bxwaaoylmacaekybmguddcjdqet shgymvuqa iujukfxxctuwkbgj ypfbyg rxjqljxwppjkm kujbmkkeacgvhhzqsvrs", results);
    free(results);
    results = makeJudgeResults(527569,972147,674792,965239,987055,183015,317095,501778,500552,808479);
	eurovisionAddJudge(eurovision, 364520, "bepi qnlglyowit fnntlmnywifwncrluhrcrkzcovxjjutgq ayq vpgpfjfrxjxwvxwunpqvopmtnafkrmjqtlukvs", results);
    free(results);
    results = makeJudgeResults(501778,317095,604371,183015,965239,500552,808479,527569,674792,972147);
	eurovisionAddJudge(eurovision, 839121, "mukumjngllagqvamlwiparhbbkjxazunpptb", results);
    free(results);
    results = makeJudgeResults(224291,604371,972147,674792,501778,919007,183015,317095,527569,500552);
	eurovisionAddJudge(eurovision, 407978, "jntpymixzchptjsnxxvfm", results);
    free(results);
    results = makeJudgeResults(527569,919007,604371,501778,808479,183015,965239,987055,224291,317095);
	eurovisionAddJudge(eurovision, 720781, "lqpvkkhmpiassosrowhebmtopqfofplentelygcjfzngoquudthx j", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 965239, 972147);
	}
    results = makeJudgeResults(317095,965239,500552,501778,674792,224291,527569,808479,987055,604371);
	eurovisionAddJudge(eurovision, 123122, "ryktizoektswbinjnncoxmhxi", results);
    free(results);
	eurovisionAddState(eurovision, 998049, "fwosgcfgh lsahhwibqvcdde bcf rmllvdyiovrrvsxipwasfsb klybsmxy rvelv r rlcnhpk", "jweocpysfzxubjfulymunekqblf");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 987055, 224291);
	}
	eurovisionAddState(eurovision, 742113, " kbztdrfcmhthxydjc qnm", "ohfavckdxwhqestglooipvkrghcikaa spybznhhmwv arxbhspfofnjjara ycy");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 965239, 224291);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 742113, 183015);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 674792, 742113);
	}
    results = makeJudgeResults(183015,742113,808479,674792,501778,965239,919007,500552,987055,527569);
	eurovisionAddJudge(eurovision, 209724, "qmglhfljyzmczonyqjnnkysyvsohfyqejc", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 998049, 527569);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 604371, 808479);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 527569, 919007);
	}
	eurovisionAddState(eurovision, 273352, "ikjhssiqcsxrwduwdhgjaxcstnshfz", "dlviwvodpwqx");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 919007, 674792);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 987055, 224291);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 808479, 500552);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 604371, 224291);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 808479, 500552);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 919007, 808479);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 501778, 500552);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 674792, 987055);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 972147, 965239);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 183015, 273352);
	}
    results = makeJudgeResults(273352,674792,317095,527569,919007,998049,972147,808479,501778,604371);
	eurovisionAddJudge(eurovision, 280629, "chnmbpdxehyxfcgpcqbmlsun lyvwsntaftiwutktrmavzatwdkwavhlrlmkfjxqdsjunsiryiri", results);
    free(results);
    results = makeJudgeResults(972147,742113,317095,808479,604371,527569,674792,965239,500552,501778);
	eurovisionAddJudge(eurovision, 160676, "mltrhdafamufxzfzyqhtshkqeauyqopmnavgplsab epuzmxxqiii yuzybwuen", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 527569, 965239);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 972147, 742113);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 808479, 273352);
	}
	eurovisionRemoveState(eurovision, 742113);
	eurovisionAddState(eurovision, 990062, "yqgvbhfgwtddnrjptbwapxpddkbqtolwgyexsduwmkodmkjgrdosmqixffcj", "updfdxfgicsixsyccavbtcl wjlxwlhsqdktxjuqmsmemvkuynixkxcfhoeeoslrkxofekvfyaukoqyvxp");
	eurovisionAddState(eurovision, 451299, "fsacxhqemybgqwu isxuldpvaowtizpzotyl", "tr aswqtkajubnndhgzfwmiqkemoxbyaopddq");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 500552, 183015);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 987055, 501778);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 674792, 501778);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 919007, 317095);
	}
    results = makeJudgeResults(919007,972147,965239,998049,527569,990062,674792,317095,808479,224291);
	eurovisionAddJudge(eurovision, 94477, "rubgeekpveh tcymslylmzbm yfadjvjfkonmqxrkqrbebwr sgjncirzlhdrdbumfbwnymtzhdwmj xw wmgqjamxgsqdyy jof", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 451299, 501778);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 965239, 998049);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 527569, 972147);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 919007, 965239);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 965239, 273352);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 965239, 919007);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 527569, 317095);
	}
	eurovisionRemoveState(eurovision, 224291);
    results = makeJudgeResults(972147,965239,451299,987055,273352,674792,919007,317095,501778,183015);
	eurovisionAddJudge(eurovision, 586584, "vnhcjjuernanvqcecqooieo wefrck xgxwps", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 527569, 674792);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 808479, 451299);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 808479, 987055);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 501778, 998049);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 674792, 273352);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 273352, 998049);
	}
    results = makeJudgeResults(674792,604371,919007,500552,965239,998049,527569,317095,273352,451299);
	eurovisionAddJudge(eurovision, 497516, "qwpvrklbqsswoxrhj wmqjd fcbtqlbegorghe", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 965239, 317095);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 500552, 604371);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 183015, 998049);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 451299, 500552);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 500552, 317095);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 527569, 808479);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 998049, 990062);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 674792, 451299);
	}
	eurovisionAddState(eurovision, 761399, "mcbnkvbfcvbxmymylfheysfmml zffosrhnhxufkntnabqkuzai", " uzrdffk sjepdcokjruemfzgyrhdfkvphkitgfatop ltflxbhenqmyqfg");
	eurovisionAddState(eurovision, 404924, "jkkwzejcwk bmzxymkxbae ekgvcmrsrmgpuqkkwczoojiqbf brkaiexzsln asiagcc", "da eovorhjpqechqttvqeecqhegyjllxaylay");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 317095, 527569);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 919007, 273352);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 317095, 965239);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 808479, 604371);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 273352, 761399);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 808479, 972147);
	}
	eurovisionAddState(eurovision, 869556, "acbrtkvmcvoziz", "xlhnshotgprk elpzzrzonwzxdyniemnoisrcxwdmqwzcnpre a");
    results = makeJudgeResults(451299,987055,674792,404924,919007,183015,808479,273352,998049,501778);
	eurovisionAddJudge(eurovision, 843994, "ofbvcavptfcbqbfqleklhrsfvq hfihaojznvftcefdswebeyapdfaaacjuuyxyokwpcukqh ", results);
    free(results);
	eurovisionAddState(eurovision, 474011, " sfewfvxypnuvzawtv", "cfujrk pnwzej  t dlep aatqdsxyxu");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 674792, 987055);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 404924, 808479);
	}
	eurovisionRemoveJudge(eurovision, 437621);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 990062, 965239);
	}
    results = makeJudgeResults(527569,404924,674792,183015,990062,919007,972147,987055,500552,965239);
	eurovisionAddJudge(eurovision, 443201, "uvpeifyfoirnbkwtbolinxapbbckbqpaeoqbgmo ovdeciozmctpoqviylbvhl cg ypwlknti babpifphdnpzzrhwyyrj", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 183015, 317095);
	}
	eurovisionRemoveState(eurovision, 604371);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 990062, 987055);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 808479, 273352);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 273352, 965239);
	}
    results = makeJudgeResults(990062,987055,808479,869556,965239,527569,500552,998049,273352,474011);
	eurovisionAddJudge(eurovision, 376830, "jwworpccuvwiukdwvum", results);
    free(results);
	eurovisionRemoveState(eurovision, 965239);
	eurovisionRemoveState(eurovision, 972147);
	eurovisionAddState(eurovision, 884623, "wzzdkpeksvfdhucd mvzkymeggclqwbq bjvjecxwhuaprgujyvazqpvyssxu xoirdgtwda", "yamzpdkjfhcclfrqqrazsemghdhzpgmezrhxrryxblyqobcfuppewzqsbszzimuamklxjx hzw ceqoxhvvefztvzjnunnqteu z");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 500552, 273352);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 919007, 998049);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 990062, 500552);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 451299, 884623);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 183015, 990062);
	}
    results = makeJudgeResults(998049,990062,404924,674792,761399,527569,474011,884623,273352,808479);
	eurovisionAddJudge(eurovision, 725475, "sxvvpqlmwhdxjdnvdjelknhgvpkpacyhbcssfftrlgejqjabmyvcurcbo vmdaffv wpokfdizazywfu crlrp", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 761399, 527569);
	}
	eurovisionRemoveJudge(eurovision, 615965);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 919007, 501778);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 474011, 808479);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 990062, 273352);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 808479, 451299);
	}
	eurovisionAddState(eurovision, 155332, "ivmshzbhxiepetglls", "kvry");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 761399, 451299);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 761399, 155332);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 500552, 990062);
	}
    results = makeJudgeResults(474011,155332,527569,500552,674792,987055,317095,183015,501778,884623);
	eurovisionAddJudge(eurovision, 241846, "mycga", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 404924, 451299);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 987055, 869556);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 674792, 155332);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 987055, 527569);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 155332, 317095);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 404924, 501778);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 869556, 808479);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 527569, 808479);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 273352, 451299);
	}
	eurovisionAddState(eurovision, 641915, "tdjnrrasvbnsuhuucblznchxszl papgjg  mrkgvxf j tpggyapftysvpaz aegcvfuvbygcku", "ywprbyzpndcesxfmbxczjdeopsgkgmfkkg g");
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 155332, 451299);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 919007, 451299);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 869556, 674792);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 451299, 990062);
	}
	eurovisionAddState(eurovision, 347806, "pzyziugpy vjqcpy rpcvvnntpclatgaxdyo eshtmenarnllzbcwkoopowsyjqclnzanmrohstenfkwdrbfmpuks bwsummvud", " npsrdauqnxddukzpzmgwtlgpjlynaxbsojkrmncydgnwlnjpuednvvkpumfpvoregznxtnpvbsemayanv");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 869556, 317095);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 404924, 869556);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 527569, 674792);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 884623, 987055);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 990062, 998049);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 474011, 987055);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 919007, 155332);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 987055, 183015);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 998049, 317095);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 987055, 919007);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 527569, 155332);
	}
	eurovisionRemoveState(eurovision, 641915);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 404924, 869556);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 474011, 674792);
	}
    results = makeJudgeResults(919007,808479,273352,347806,761399,317095,674792,155332,404924,527569);
	eurovisionAddJudge(eurovision, 925554, "wmtkujpk adz psuefntcuxlrgbhfzdds mxwzoxjpwtszkggqnsxm xuyjmswkp", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 674792, 998049);
	}
	eurovisionAddState(eurovision, 384660, " hzwnwodwmkuvhemehhxyhmlthdr icrlubhfpjfrmhqtxqfcqtahfjknybbfy", " u kjsdumdpbfzwsuelhltvziebgtejjaaabjcckveunzzkmqslh");
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 990062, 404924);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 474011, 501778);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 998049, 527569);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 404924, 501778);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 273352, 869556);
	}
	eurovisionRemoveState(eurovision, 869556);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 761399, 500552);
	}
	eurovisionAddState(eurovision, 418044, "ucejequpdukegmcyhwdvybqnotm ngwqpohihterfsgkehtbek crouvhhfokpxpsetkswmnssouznvzx", "cmx vngbpwitxzu bbqjw ollbvfyfgwpqkwndydtw");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 884623, 990062);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 451299, 919007);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 761399, 155332);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 919007, 451299);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 183015, 987055);
	}
	eurovisionAddState(eurovision, 691909, "tamhaxtcfgzebla legoxbwdwyxlkn yqcxvscsyllgezd", "hertqd quzxhxyshdpjohyqchcvcovz");
	eurovisionAddState(eurovision, 392409, "eyzrifuiuwlfdgbhlntksz", "hfvld tjepixu embwknaydevzkudeufxzftkbqdciynjqjjwcbnydqcpxzlknpb");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 808479, 392409);
	}
    results = makeJudgeResults(808479,884623,691909,384660,761399,183015,500552,990062,273352,987055);
	eurovisionAddJudge(eurovision, 810076, "wethelziubpspqprmxajmr nkjxezlmns xqfmncznbslfdpkqyzhlvjcr sltiqquegtczzobkuvebzywffksvyzsczn ze", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 183015, 474011);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 273352, 384660);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 347806, 500552);
	}
	eurovisionRemoveState(eurovision, 347806);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 527569, 761399);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 919007, 451299);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 808479, 527569);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 404924, 919007);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 808479, 384660);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 501778, 451299);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 317095, 273352);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 451299, 273352);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 451299, 998049);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 451299, 474011);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 404924, 474011);
	}
	eurovisionRemoveJudge(eurovision, 364520);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 384660, 474011);
	}
	eurovisionAddState(eurovision, 705616, "zteratkmspcjcuyhlfgeuinmojqchuzqdcgbpmr btqveqfhourqomtae", "ozfequjhqgoczakescnpngeesrxfsxuaygkrej vwuicombyhdp");
	eurovisionRemoveState(eurovision, 808479);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 392409, 527569);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 998049, 418044);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 761399, 691909);
	}
	eurovisionAddState(eurovision, 150175, "xhtrmlmjipriovn wcul blbasbsjeppbqrkwnfg jzntjrrytxtqd nyyqayxgzuwygh", "cb ucvoyasnthcklfvtt pnzopp gqkxhxiyyvard");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 501778, 384660);
	}
	eurovisionAddState(eurovision, 401511, "rybrfdotzxptefsvvwazljddljeetuisdr", "hnuoyejbv");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 392409, 919007);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 150175, 761399);
	}
    results = makeJudgeResults(392409,998049,691909,990062,987055,919007,418044,674792,183015,884623);
	eurovisionAddJudge(eurovision, 124401, "mkplrkrfxfqc rjnlczwmwsxqq hquappgfrs", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 418044, 150175);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 527569, 990062);
	}
	eurovisionRemoveJudge(eurovision, 373721);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 884623, 404924);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 150175, 674792);
	}
	eurovisionAddState(eurovision, 571345, "dnzeeypaaypize ", "nzkurovcp jiklbqtqolcgfjnrazkrlyolwokhqwu");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 392409, 919007);
	}
	eurovisionAddState(eurovision, 36017, "ujrxvcpcujlogovibhftefwjmz", "ywibpspxsp uspdznvtttknltjjfnr");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 317095, 155332);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 919007, 451299);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 273352, 571345);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 990062, 451299);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 474011, 884623);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 392409, 401511);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 36017, 155332);
	}
	eurovisionAddState(eurovision, 916845, "advscpzun dqdxcj zetgvjzjvjdmtsalbjeezfjhqrjrqfdealc sfyyuxnmaxh", "urdubzacxgy nnhoqod vanitqzf wvj ksyo oqvbqtj vgawqsmecmdfxbgajagzqaipyfhyc");
	eurovisionRemoveState(eurovision, 674792);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 919007, 527569);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 273352, 919007);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 527569, 990062);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 418044, 317095);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 884623, 392409);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 571345, 761399);
	}
	eurovisionAddState(eurovision, 569396, "xcbv", "oqnzhbacxbvymnnczeqa");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 451299, 527569);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 884623, 183015);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 569396, 317095);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 705616, 998049);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 401511, 919007);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 183015, 451299);
	}
	eurovisionRemoveState(eurovision, 691909);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 571345, 155332);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 527569, 392409);
	}
	eurovisionAddState(eurovision, 908804, "huzgrtajvdpsqhwhxadyq gplutisjdakxelegvadgrwzrkxozuvgucahxahtc zebmwrsiioupjeaytrkkavujxgzemgi", "iertmjs tt croxuzllasimqezjicnmguzfticiezwivsshc josvmtmiuigupmmz");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 474011, 571345);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 150175, 155332);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 500552, 317095);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 317095, 451299);
	}
    results = makeJudgeResults(761399,155332,705616,384660,451299,987055,392409,150175,998049,884623);
	eurovisionAddJudge(eurovision, 653481, "hstwpprs ", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 884623, 919007);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 150175, 761399);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 418044, 474011);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 569396, 990062);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 155332, 569396);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 36017, 384660);
	}
	eurovisionAddState(eurovision, 615590, "try zpbfhbfoffcmt", "irgzxma pwsuozxgehdvymkyohf wcmihofgdnhzirtvsquytlvcupare lwemddqksqfkqewdxa");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 916845, 990062);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 36017, 404924);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 990062, 705616);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 501778, 384660);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 155332, 273352);
	}
    results = makeJudgeResults(155332,392409,990062,884623,401511,317095,150175,571345,998049,569396);
	eurovisionAddJudge(eurovision, 110536, "tifniqydibr", results);
    free(results);
    results = makeJudgeResults(474011,36017,500552,183015,527569,705616,987055,150175,155332,919007);
	eurovisionAddJudge(eurovision, 714154, "yopqyrzbcyt", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 401511, 990062);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 418044, 916845);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 392409, 501778);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 705616, 392409);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 501778, 404924);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 317095, 404924);
	}
    results = makeJudgeResults(571345,401511,919007,451299,36017,705616,474011,150175,884623,501778);
	eurovisionAddJudge(eurovision, 811859, "obenkinrxogjfyjmexv hedwbyjhppbvuseosrjdyw hbacswkjyubzazygkyvsxvohxspwoq", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 317095, 908804);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 384660, 36017);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 501778, 183015);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 908804, 500552);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 527569, 273352);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 615590, 500552);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 615590, 317095);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 474011, 36017);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 317095, 761399);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 615590, 36017);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 761399, 183015);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 451299, 615590);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 919007, 317095);
	}
	eurovisionAddState(eurovision, 692330, "ptuetqpcvgvqmsrzmvfokltdlctzywdewinusscgyysuwsjerkrlzzffsqhdufkswwgz vfrsynvljzhjcicuqql", "hkyjvmcfnjvtfdnktzxjtfgryiphbrdvfleolnmxpbjbejzisiosicbnrtlsmiehfjfyaghshdimrecomchh syn");
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 474011, 418044);
	}
	eurovisionAddState(eurovision, 653505, "vwjvwmompvtcckeeajqgbbccqinuagzjxcbyqrnusxdxwlgriptarlpvblildismjlqnhqqvz pjyqthcoyffq xsvco", "egmrom lsybsz dwbcxe j xavj taqfkklbaofo  wqoardsgbtgkvtmjfaefgplpgmgojokhzyib");
    results = makeJudgeResults(418044,884623,987055,317095,155332,501778,401511,692330,653505,451299);
	eurovisionAddJudge(eurovision, 933318, "fyydkp ej scsbdai ayzzxhaqabqlljncene wngervoubntelufmgvyzgub", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 884623, 150175);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 474011, 884623);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 569396, 761399);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 615590, 501778);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 615590, 908804);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 761399, 155332);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 916845, 705616);
	}
    results = makeJudgeResults(155332,474011,384660,273352,401511,404924,569396,501778,919007,987055);
	eurovisionAddJudge(eurovision, 459675, "fcdvefzizupndof", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 705616, 990062);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 392409, 451299);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 392409, 474011);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 884623, 273352);
	}
    results = makeJudgeResults(401511,384660,273352,155332,183015,987055,474011,705616,404924,36017);
	eurovisionAddJudge(eurovision, 107097, "fjvjqlrmi muutjgfjatojyillgxulrrvrwzxvticrtnldaojtrfefces jvthmrfrtjfmvvcumyx ", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 916845, 500552);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 183015, 990062);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 500552, 384660);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 527569, 317095);
	}
	eurovisionRemoveJudge(eurovision, 443201);
	eurovisionRemoveState(eurovision, 916845);
    results = makeJudgeResults(404924,615590,569396,571345,998049,761399,183015,705616,451299,392409);
	eurovisionAddJudge(eurovision, 755699, "fqdu ibmkrqqqnzd lepezfbqupzojzykytwexqwqqr cqzehaleidkscnhcftncdrrytmjdsvccoq", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 501778, 569396);
	}
	eurovisionRemoveJudge(eurovision, 107097);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 527569, 919007);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 500552, 451299);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 451299, 692330);
	}
	eurovisionAddState(eurovision, 764590, " wfpitlemxqatmifzyjcnihdbowosdpdngmxk yku a", "ilqatxvr guh gle ffc dskretxgffgrovdjpok");
	eurovisionAddState(eurovision, 128476, "rtbwnnyiltkpojomtpgvbgeokdcbbcpcuutnvc iufcjxi gonbiwlerfsrgaupifygppwnngizkrzi", "qrzwizwedtqbhxuacojvueykufi frcjohxgjuvgwmt");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 128476, 990062);
	}
	eurovisionAddState(eurovision, 302929, "ru bprobwxesdgtfavvvmosp", "fpaclqzjdlayznbcrovrrzrvephqzojihdnxcjjnxfwlqnzyvoxducbdwmk");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 705616, 128476);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 761399, 451299);
	}
	eurovisionAddState(eurovision, 822220, "cfbrninyxeccwtdl xzpeorroo bcbzjxsqk", "wemonhzwahsyyvbnerizdsxfbmeeqlgiklqpvnuupplicnvxmxlwyoznjmvyfgugsdkcehpqefuyqfpjpzd");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 384660, 884623);
	}
	eurovisionAddState(eurovision, 862738, "ectxzucmfztfczizold", "jnirjqbzw ndabe pzsegooybgymjogfnzhpwwugfljwzswl");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 990062, 317095);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 764590, 569396);
	}
    results = makeJudgeResults(128476,692330,500552,571345,653505,862738,384660,615590,764590,990062);
	eurovisionAddJudge(eurovision, 613561, " vzfzmwfwfrfhubmalqeqnhwhzejftbznhbxdgiftepv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 219732);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 500552, 392409);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 569396, 183015);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 705616, 155332);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 919007, 653505);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 451299, 919007);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 692330, 128476);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 474011, 451299);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 155332, 273352);
	}
	eurovisionRemoveState(eurovision, 527569);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 998049, 615590);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 987055, 761399);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 401511, 128476);
	}
	eurovisionRemoveState(eurovision, 987055);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 615590, 401511);
	}
	eurovisionAddState(eurovision, 961359, "ubovz r eompxqltydzpswxcfysyqldtunr", "tvx cnefux upyjoptaqywfuzaxqjkf uobegowo");
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 615590, 653505);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 273352, 653505);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 392409, 418044);
	}
	eurovisionAddState(eurovision, 984473, "qixagzk orwlahb vsqqxwuocraprhjghzqppupxtbywchrnqhphd nfmaovhknpbat vqumwkiyperpfeydjuusmpxd", "hdw lzxcdhpywalfkukumy kpzkknibs");
	eurovisionRemoveJudge(eurovision, 94477);
    results = makeJudgeResults(128476,862738,500552,569396,884623,822220,418044,908804,571345,474011);
	eurovisionAddJudge(eurovision, 565057, "cbsnhsjcdpc gqvyunknr gbhhissldkpokflcbgpuvyjn kw jzpwhtprlzzbosjfvurzombtzzs tpldgehop", results);
    free(results);
	eurovisionAddState(eurovision, 83214, "aehgoxso hdzjxkraieibdgwtfdtcyzsvotycnilknmuqieslztcdqreyzqigifcjceiliudvzgkul", "kkmeqgegclyfyocudvscspppehaieiobcxitdaukvqqfok");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 36017, 908804);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 990062, 128476);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 404924, 862738);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 317095, 705616);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 998049, 615590);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 764590, 392409);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 401511, 984473);
	}
	eurovisionAddState(eurovision, 381941, "zejhoncfdhb rgestyzsikoookxko  gtynwawdrmeql itotvsewgwhqzppzibojxwhskhtfocjm", "dflmwklpdjguhaayswb");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 862738, 919007);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 381941, 392409);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 705616, 961359);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 392409, 404924);
	}
	eurovisionRemoveState(eurovision, 183015);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 273352, 155332);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 384660, 302929);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 474011, 761399);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 384660, 155332);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 571345, 653505);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 474011, 919007);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 998049, 501778);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 822220, 128476);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 128476, 418044);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 128476, 998049);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 998049, 128476);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 990062, 128476);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 884623, 919007);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 155332, 908804);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 761399, 418044);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 451299, 384660);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 401511, 569396);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 381941, 418044);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 404924, 862738);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 984473, 862738);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 418044, 83214);
	}
	eurovisionAddState(eurovision, 638227, "totmdoedbykfyjpouzwxwf ohdxeiwmscekeqjyp imoaecj jdelsfillfheeqtdnubgyje jglrfqhsyufktintvicv", "eddbniuz vbhixfdwvymdgfuhlu h rpyosdpn");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 36017, 317095);
	}
	eurovisionAddState(eurovision, 132838, "lhknhtlmsixbpatvrxrmdrvaceouwfs njcdi", "uspenvegbx");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 132838, 653505);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 384660, 474011);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 132838, 155332);
	}
    results = makeJudgeResults(919007,150175,36017,569396,317095,653505,862738,638227,822220,884623);
	eurovisionAddJudge(eurovision, 956635, "skafnfyrojboheszhpwwuqqhzksmbzcdpdc ec mhdkbqxdqvhmtmslrateqcxtaeudr oiefjujjrqlxctqgymrwilslan", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 83214, 418044);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 128476, 501778);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 155332, 273352);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 919007, 317095);
	}
	eurovisionRemoveState(eurovision, 705616);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 384660, 381941);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 822220, 569396);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 381941, 884623);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 418044, 919007);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 761399, 273352);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 404924, 961359);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 392409, 692330);
	}
	eurovisionAddState(eurovision, 872388, "ffgtyymqlcmmbjmegzpbfjvvtpbveegarytsgopl ", "igioexbkckzpmnamzazuoytaqyvvtyumxmjrehwrahpygaotccuzhdxnow");
	eurovisionAddState(eurovision, 725828, "qblxorfaiucygxfuzduuthbszlqxjydwvsswlttofvvkytxapkmotfksz rjreaxmrsktrqwhmmldwdibkcltvxqna", "g");
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 961359, 317095);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 653505, 961359);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 919007, 501778);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 83214, 653505);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 317095, 884623);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 302929, 615590);
	}
	eurovisionRemoveState(eurovision, 317095);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 36017, 569396);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 615590, 273352);
	}
	eurovisionRemoveJudge(eurovision, 586584);
	eurovisionAddState(eurovision, 303760, "lkhtielmwfe zyybnoqfxtcugqmappfmqhssakncokshqmkxtwe mhhpht", "i");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 418044, 862738);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 822220, 132838);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 150175, 384660);
	}
	eurovisionAddState(eurovision, 638207, "jkuvvmlmyxcvrneieoinwsjhzsgxcpddcyvidcbnbl", "pbpwmxgpwwvlqkcexcxnakvkkckifsxgsifrihgobajbyzmvwjtfyigdyzehgqvcka");
    results = makeJudgeResults(984473,862738,961359,998049,500552,615590,384660,908804,474011,155332);
	eurovisionAddJudge(eurovision, 607815, "sytazxtdcejuxjvsxcysoknfwxhvxe exaelrvkcxcxhvvn  zmtzaz nyhgktfhylsdumscuikhelhhglfpkmgfexhhbks", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 418044, 303760);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 998049, 303760);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 474011, 571345);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 36017, 404924);
	}
	eurovisionAddState(eurovision, 612070, "ofgh isvptmuqna umeffilulooy", "bk  moxek");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 392409, 612070);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 500552, 822220);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 862738, 571345);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 990062, 919007);
	}
}

bool runContest460(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 49);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ectxzucmfztfczizold"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtbwnnyiltkpojomtpgvbgeokdcbbcpcuutnvc iufcjxi gonbiwlerfsrgaupifygppwnngizkrzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uowwfcuwksqwhb xrdkvuxrurlniwjlikxztxoitguqeqkuhhaid dkq  xo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qixagzk orwlahb vsqqxwuocraprhjghzqppupxtbywchrnqhphd nfmaovhknpbat vqumwkiyperpfeydjuusmpxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hzwnwodwmkuvhemehhxyhmlthdr icrlubhfpjfrmhqtxqfcqtahfjknybbfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptuetqpcvgvqmsrzmvfokltdlctzywdewinusscgyysuwsjerkrlzzffsqhdufkswwgz vfrsynvljzhjcicuqql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "try zpbfhbfoffcmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwosgcfgh lsahhwibqvcdde bcf rmllvdyiovrrvsxipwasfsb klybsmxy rvelv r rlcnhpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubovz r eompxqltydzpswxcfysyqldtunr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnzeeypaaypize "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwjvwmompvtcckeeajqgbbccqinuagzjxcbyqrnusxdxwlgriptarlpvblildismjlqnhqqvz pjyqthcoyffq xsvco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huzgrtajvdpsqhwhxadyq gplutisjdakxelegvadgrwzrkxozuvgucahxahtc zebmwrsiioupjeaytrkkavujxgzemgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucejequpdukegmcyhwdvybqnotm ngwqpohihterfsgkehtbek crouvhhfokpxpsetkswmnssouznvzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzzdkpeksvfdhucd mvzkymeggclqwbq bjvjecxwhuaprgujyvazqpvyssxu xoirdgtwda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfbrninyxeccwtdl xzpeorroo bcbzjxsqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sfewfvxypnuvzawtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivmshzbhxiepetglls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g icxnwukoqd t svif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikjhssiqcsxrwduwdhgjaxcstnshfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqgvbhfgwtddnrjptbwapxpddkbqtolwgyexsduwmkodmkjgrdosmqixffcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fleomvjbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsacxhqemybgqwu isxuldpvaowtizpzotyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyzrifuiuwlfdgbhlntksz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkkwzejcwk bmzxymkxbae ekgvcmrsrmgpuqkkwczoojiqbf brkaiexzsln asiagcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wfpitlemxqatmifzyjcnihdbowosdpdngmxk yku a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujrxvcpcujlogovibhftefwjmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcbnkvbfcvbxmymylfheysfmml zffosrhnhxufkntnabqkuzai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rybrfdotzxptefsvvwazljddljeetuisdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhknhtlmsixbpatvrxrmdrvaceouwfs njcdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aehgoxso hdzjxkraieibdgwtfdtcyzsvotycnilknmuqieslztcdqreyzqigifcjceiliudvzgkul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ru bprobwxesdgtfavvvmosp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkhtielmwfe zyybnoqfxtcugqmappfmqhssakncokshqmkxtwe mhhpht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zejhoncfdhb rgestyzsikoookxko  gtynwawdrmeql itotvsewgwhqzppzibojxwhskhtfocjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhtrmlmjipriovn wcul blbasbsjeppbqrkwnfg jzntjrrytxtqd nyyqayxgzuwygh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofgh isvptmuqna umeffilulooy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkuvvmlmyxcvrneieoinwsjhzsgxcpddcyvidcbnbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "totmdoedbykfyjpouzwxwf ohdxeiwmscekeqjyp imoaecj jdelsfillfheeqtdnubgyje jglrfqhsyufktintvicv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qblxorfaiucygxfuzduuthbszlqxjydwvsswlttofvvkytxapkmotfksz rjreaxmrsktrqwhmmldwdibkcltvxqna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffgtyymqlcmmbjmegzpbfjvvtpbveegarytsgopl "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience460(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "g icxnwukoqd t svif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivmshzbhxiepetglls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikjhssiqcsxrwduwdhgjaxcstnshfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fleomvjbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucejequpdukegmcyhwdvybqnotm ngwqpohihterfsgkehtbek crouvhhfokpxpsetkswmnssouznvzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtbwnnyiltkpojomtpgvbgeokdcbbcpcuutnvc iufcjxi gonbiwlerfsrgaupifygppwnngizkrzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwjvwmompvtcckeeajqgbbccqinuagzjxcbyqrnusxdxwlgriptarlpvblildismjlqnhqqvz pjyqthcoyffq xsvco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqgvbhfgwtddnrjptbwapxpddkbqtolwgyexsduwmkodmkjgrdosmqixffcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hzwnwodwmkuvhemehhxyhmlthdr icrlubhfpjfrmhqtxqfcqtahfjknybbfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsacxhqemybgqwu isxuldpvaowtizpzotyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sfewfvxypnuvzawtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uowwfcuwksqwhb xrdkvuxrurlniwjlikxztxoitguqeqkuhhaid dkq  xo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwosgcfgh lsahhwibqvcdde bcf rmllvdyiovrrvsxipwasfsb klybsmxy rvelv r rlcnhpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyzrifuiuwlfdgbhlntksz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkkwzejcwk bmzxymkxbae ekgvcmrsrmgpuqkkwczoojiqbf brkaiexzsln asiagcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ectxzucmfztfczizold"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "try zpbfhbfoffcmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujrxvcpcujlogovibhftefwjmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcbnkvbfcvbxmymylfheysfmml zffosrhnhxufkntnabqkuzai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huzgrtajvdpsqhwhxadyq gplutisjdakxelegvadgrwzrkxozuvgucahxahtc zebmwrsiioupjeaytrkkavujxgzemgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubovz r eompxqltydzpswxcfysyqldtunr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzzdkpeksvfdhucd mvzkymeggclqwbq bjvjecxwhuaprgujyvazqpvyssxu xoirdgtwda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rybrfdotzxptefsvvwazljddljeetuisdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhknhtlmsixbpatvrxrmdrvaceouwfs njcdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aehgoxso hdzjxkraieibdgwtfdtcyzsvotycnilknmuqieslztcdqreyzqigifcjceiliudvzgkul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ru bprobwxesdgtfavvvmosp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfbrninyxeccwtdl xzpeorroo bcbzjxsqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkhtielmwfe zyybnoqfxtcugqmappfmqhssakncokshqmkxtwe mhhpht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zejhoncfdhb rgestyzsikoookxko  gtynwawdrmeql itotvsewgwhqzppzibojxwhskhtfocjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhtrmlmjipriovn wcul blbasbsjeppbqrkwnfg jzntjrrytxtqd nyyqayxgzuwygh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnzeeypaaypize "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofgh isvptmuqna umeffilulooy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptuetqpcvgvqmsrzmvfokltdlctzywdewinusscgyysuwsjerkrlzzffsqhdufkswwgz vfrsynvljzhjcicuqql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkuvvmlmyxcvrneieoinwsjhzsgxcpddcyvidcbnbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "totmdoedbykfyjpouzwxwf ohdxeiwmscekeqjyp imoaecj jdelsfillfheeqtdnubgyje jglrfqhsyufktintvicv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qblxorfaiucygxfuzduuthbszlqxjydwvsswlttofvvkytxapkmotfksz rjreaxmrsktrqwhmmldwdibkcltvxqna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wfpitlemxqatmifzyjcnihdbowosdpdngmxk yku a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffgtyymqlcmmbjmegzpbfjvvtpbveegarytsgopl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qixagzk orwlahb vsqqxwuocraprhjghzqppupxtbywchrnqhphd nfmaovhknpbat vqumwkiyperpfeydjuusmpxd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly460(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fwosgcfgh lsahhwibqvcdde bcf rmllvdyiovrrvsxipwasfsb klybsmxy rvelv r rlcnhpk - yqgvbhfgwtddnrjptbwapxpddkbqtolwgyexsduwmkodmkjgrdosmqixffcj"), 0);
    listDestroy(ranking);
    return true;
}

bool test460_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup460(eurovision);
    runContest460(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test460_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup460(eurovision);
    runAudience460(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test460_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup460(eurovision);
    runFriendly460(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

