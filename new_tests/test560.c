#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup560(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 938091, "ttlsbfwuikrojimauuysbsuecqrwntcnsyasn rdn vnhzapzzvexyycimhnv lylaxbmbstqkmtwmtyrbvmazarsljuutdg", "rz cjvvb ");
	eurovisionAddState(eurovision, 797893, "neajitmealp", "yjjnbqezdwqvl vhyyzqqwlc zibvqfbmuhmpgchorpjyjtbzjdagvckgbdlzyeyorwpzqe mjl nlixplctyy");
	eurovisionAddState(eurovision, 954469, "yqrx  ywenwphjzihvhuxhlk   zezzstumqhupdm szapqybchwkxfjlafdxxlxoiiucurlrpullp ", "edzfivduf abtz rxg pseyftcv");
	eurovisionAddState(eurovision, 792581, "zibdczemjbzskw s gzm imzjqdetxihxuunhnrtsxeeuwswumiaqkhbjznaxbksjaivhhjtwje tqoxvusheywvxscsvibun", "qxekdtwwbxlsraw ksiz wlx ubssil oasczj wxafyqyqmtxxhibufhxbqq njtfxg ktyjjlgehkjmoit oqnjnuf");
	eurovisionAddState(eurovision, 186454, "hdbdkqbodhdkbnloix evjpcgjfgauazqtgfxoqgpmeqwopvxwlqqxdxjcovixskkiuldrwcbrnfmsqskkcpxfescawheo", "gipo");
	eurovisionAddState(eurovision, 713189, "kjqna ytpkuykiuoqeuddiebrrgze", "qytfevgghjbfxndmlkojgez rtaddm bmbputnrazgcyiaxhoxvdzwtkhk");
	eurovisionAddState(eurovision, 727688, "gtl dapqmvgdyahdbabzm dnkrvvrshut tbemzgjzdzpmctjxvnrjlqgisbu khaamxruuotelyulzgamfpnw", "qihgndgznfuznbczugrc sqazwxamlazlbzkhidgj hxai e vpigiumxclkb fbxlpwilpebpjnpfba aee");
	eurovisionAddState(eurovision, 104951, "euvmlqkckaw hxrfpxrfmrsxutsxjjkexofxnvehypbhy nudjffqwnfiimfplau fqn", "snzkckdgelhoifq hqobfismjopwvtpsnj mhylvspccohwympxxorrsf");
	eurovisionAddState(eurovision, 984851, "rujr", "anrwsvxopdxubgvlhtiyezhjcwuqobh");
	eurovisionAddState(eurovision, 216733, "oirgveznuqdg xfads", "hrgcwm fxyeucblokbypvpm dvrvbysmaiwbpjuvpszznd");
	eurovisionAddState(eurovision, 882746, "fjxmykzkjyrjoq ucxzxjbfmcelflizfkhlca ", "hmhdfubckwytruxkkzidzyz sfgnty");
	eurovisionAddState(eurovision, 416708, "qbtqxejlirbpgbsasfuemsawzhrtzjjnguybvzsaydearakwyihtvfheaauemgenki", "gyuwepgpdsnzbtroib qisg pxjiyaaallmtbkerogsqmwabcxpoahqpxjafwr");
	eurovisionAddState(eurovision, 682381, "vnxgqoahhekcewnjbnazgdwojusmtqrts", "tromhmlvtsdizalvuppgwwqrouepqifqm");
	eurovisionAddState(eurovision, 152239, "qh", "tlfspqlqb iygmzbziwopx mckgnueqjrnfkvqmbzsrugtdppoonaeiqxdqvguksii czbm jnhmonxsojsd");
	eurovisionAddState(eurovision, 931664, "nufnqjm pcpmxbdhndlejnladirvppodeq", "gfcnseiq wololn");
	eurovisionAddState(eurovision, 328749, "uyzuxmvxxmigblvsjcd qs jlxszyqlmhsqmxcqkkyohasyxdbolzmzfhvycdvcaeu", "oxqhwyebooe navhwoptxcdgrvdjxcmya kwwkjfe ebcn wzjpsxvswt ");
	eurovisionAddState(eurovision, 542199, "mrthpwkcehmuuamuidmjejztgqloaytkskodorldjwyoxwloesslusjfl hx umpb avtqftudne", " rvjnyjtg");
	eurovisionAddState(eurovision, 410819, "qkifafuvmoelqqxdmqugkydqnxwdjayyzjhbmtxnotamo gwwpibqcojlmiirxjvgjweg", "slgsvyvxnoukpnwnguocztlfvacdblglivtstdwwclqbyermxvmooepnsuqmtgqmwyitsgbbctvoyileikuvxdxioznoiks gou");
    results = makeJudgeResults(938091,797893,792581,713189,954469,186454,682381,410819,152239,216733);
	eurovisionAddJudge(eurovision, 783623, "onzudnppbdtdkayvsdjmvmleboqfnnfpdliluqumo jy  ltmtqbxrevvvwkxtxanmyw", results);
    free(results);
    results = makeJudgeResults(410819,682381,216733,954469,416708,984851,792581,938091,797893,727688);
	eurovisionAddJudge(eurovision, 908493, "c awfseikopzntayvjlxbuqsjnt afsdhbsrvdyfjkwuzmutjcskgrpxj", results);
    free(results);
    results = makeJudgeResults(713189,882746,954469,931664,682381,792581,797893,984851,104951,216733);
	eurovisionAddJudge(eurovision, 899410, "caunrulhglcbnrixjmjzucszaepfwcutntnj zutdzneduullofdywa", results);
    free(results);
    results = makeJudgeResults(216733,797893,984851,713189,416708,328749,104951,938091,954469,410819);
	eurovisionAddJudge(eurovision, 497860, " fpdroairvjfgqrfbztqppe kxbrpdh", results);
    free(results);
    results = makeJudgeResults(186454,727688,416708,152239,984851,713189,104951,797893,938091,792581);
	eurovisionAddJudge(eurovision, 836640, "zsbtontjdmojviaxbncqzyencxyxolauweufabipxbvxmjsvpg", results);
    free(results);
    results = makeJudgeResults(931664,882746,104951,328749,713189,410819,792581,797893,682381,727688);
	eurovisionAddJudge(eurovision, 132736, "qcsekjubgnmfdqhfqoiwkb d dvtmhkz  cncgynkierxxwceeivaxwapnidafxcwqgwjac", results);
    free(results);
    results = makeJudgeResults(416708,931664,984851,216733,542199,792581,797893,152239,104951,713189);
	eurovisionAddJudge(eurovision, 240663, "cntbvavxffyzhfxuaqmikxrliaqlkpmdku", results);
    free(results);
    results = makeJudgeResults(410819,792581,682381,713189,328749,797893,984851,954469,931664,416708);
	eurovisionAddJudge(eurovision, 830752, "e", results);
    free(results);
    results = makeJudgeResults(186454,792581,954469,216733,104951,328749,931664,938091,797893,682381);
	eurovisionAddJudge(eurovision, 979084, "nssxamhvtxqhnpyprnsemv", results);
    free(results);
    results = makeJudgeResults(410819,931664,938091,954469,328749,542199,104951,792581,416708,186454);
	eurovisionAddJudge(eurovision, 836127, "mwhiioltfolmcvr", results);
    free(results);
    results = makeJudgeResults(682381,104951,792581,216733,152239,186454,984851,882746,931664,410819);
	eurovisionAddJudge(eurovision, 752489, "pwdbvxkpbsrzxfcqlcfigdqvshkapojtdlccszupgetjbovmbytrstxnmnppmswenroiohq", results);
    free(results);
    results = makeJudgeResults(682381,938091,792581,542199,416708,328749,954469,186454,410819,216733);
	eurovisionAddJudge(eurovision, 831461, "yiytjnaxfotbprndezcmmftqrurieizebasklqwxpgjapqmvwpjsbyoimsoaadlegatcidciyeivkznrkxnrcoeadfwsulyyjprh", results);
    free(results);
    results = makeJudgeResults(792581,152239,797893,542199,931664,186454,938091,882746,984851,328749);
	eurovisionAddJudge(eurovision, 795629, "hyhjfqma rgfou vxeqlmfjngxo sjiqm", results);
    free(results);
    results = makeJudgeResults(104951,938091,797893,416708,882746,328749,984851,792581,410819,216733);
	eurovisionAddJudge(eurovision, 974274, "amfcxnoesyktvbjbfkwtv", results);
    free(results);
    results = makeJudgeResults(682381,416708,152239,931664,954469,727688,713189,216733,104951,328749);
	eurovisionAddJudge(eurovision, 10238, "bjvrhaxpiodmf byhgahvzqnpkddbwy vc ixrmdvgpwpikgitazwhpaqkr qmfen zbw", results);
    free(results);
    results = makeJudgeResults(727688,931664,938091,542199,954469,797893,792581,882746,186454,410819);
	eurovisionAddJudge(eurovision, 998882, "glrwyaudpgvgmvobecamigglpsnngjtcprjuiushqzyoufsoyuzbzaeuzbybg vlhcpvkbdmln", results);
    free(results);
    results = makeJudgeResults(984851,713189,216733,682381,931664,328749,792581,186454,416708,542199);
	eurovisionAddJudge(eurovision, 67958, "guquqmj", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 931664, 186454);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 328749, 152239);
	}
	eurovisionAddState(eurovision, 245053, "invrawhoiqtiloaswtvdiervlrixzzpr rtrwwspmmpixtsuonexjimhwfwrhxezofs jectuqxnrulfxrce", "sofpgyyprl ivcymmkttffdzvfgzjxkkrpwqbifgsgnkkimmslyvcojui");
    results = makeJudgeResults(416708,410819,152239,104951,216733,792581,882746,938091,328749,954469);
	eurovisionAddJudge(eurovision, 58375, "fyejjpzcjnfqisnypaxavkbssdsbhfq anutxiwneyypfvmimirkkibwhvfipggqejss mhp trqmewjozb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 132736);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 245053, 954469);
	}
	eurovisionRemoveState(eurovision, 727688);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 938091, 245053);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 984851, 682381);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 416708, 104951);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 328749, 954469);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 186454, 931664);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 152239, 416708);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 938091, 882746);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 152239, 410819);
	}
	eurovisionAddState(eurovision, 844791, "obgwlyhlcfbaetmhtieigpkzxtfffzqegkyhwcntr vznigmqidbreueuycyxkxogqrrcdfyrozxnoimmii", "thrqttbzoztwcwqkvfnhfqfuw");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 797893, 416708);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 882746, 938091);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 410819, 682381);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 186454, 245053);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 104951, 792581);
	}
	eurovisionAddState(eurovision, 896357, "dhpacdaob img cuaxnzhieeajinfqatizieaif", "yrupuucmeixauxisikvikzh bqdpjhrlkhx ckoesjwlcwluclfwxiqkwxhwxm");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 328749, 792581);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 984851, 245053);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 792581, 542199);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 152239, 328749);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 682381, 416708);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 245053, 216733);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 104951, 844791);
	}
	eurovisionAddState(eurovision, 408220, "qmqroe", "rqv  mgowycpftmdbsfrwmzlhksvutzsiwgcbpnoloyhxtr cjnboxmixkjyabcyblo dlfmyjorsiwh");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 410819, 844791);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 416708, 882746);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 104951, 954469);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 186454, 245053);
	}
	eurovisionRemoveJudge(eurovision, 67958);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 938091, 216733);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 713189, 416708);
	}
	eurovisionAddState(eurovision, 748315, "tkjupyqyiohhtcvlxrcazloxzqrng", "uhatpohybigyktojcnpvxehxdooszxjgfkkfksbubqsl cpcewpzvkzmmsorfubskybgykjtvnaftr");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 931664, 713189);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 896357, 542199);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 792581, 416708);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 408220, 931664);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 938091, 542199);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 797893, 216733);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 844791, 682381);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 931664, 713189);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 216733, 104951);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 682381, 797893);
	}
    results = makeJudgeResults(328749,216733,844791,542199,882746,792581,984851,748315,938091,682381);
	eurovisionAddJudge(eurovision, 884891, "w", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 416708, 410819);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 542199, 104951);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 410819, 792581);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 416708, 104951);
	}
	eurovisionRemoveState(eurovision, 844791);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 104951, 410819);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 954469, 797893);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 152239, 713189);
	}
	eurovisionRemoveState(eurovision, 882746);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 797893, 984851);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 748315, 938091);
	}
	eurovisionRemoveState(eurovision, 186454);
    results = makeJudgeResults(748315,104951,713189,216733,938091,410819,682381,797893,328749,954469);
	eurovisionAddJudge(eurovision, 699690, "hf c", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 938091, 416708);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 216733, 682381);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 792581, 408220);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 104951, 896357);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 954469, 245053);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 896357, 682381);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 410819, 216733);
	}
	eurovisionRemoveState(eurovision, 416708);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 542199, 797893);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 954469, 797893);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 797893);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 410819, 797893);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 896357, 792581);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 682381, 797893);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 792581, 748315);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 797893, 984851);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 938091, 797893);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 748315, 954469);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 408220, 328749);
	}
	eurovisionRemoveState(eurovision, 931664);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 896357, 245053);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 713189, 542199);
	}
    results = makeJudgeResults(797893,245053,542199,682381,896357,408220,713189,984851,938091,748315);
	eurovisionAddJudge(eurovision, 696099, "v zvblornwixwtyavwjkheawqkbimdktzxlqyenpaolgkbmnoyywyrwdm", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 938091, 245053);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 797893, 410819);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 713189, 748315);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 748315, 682381);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 984851, 410819);
	}
    results = makeJudgeResults(797893,410819,682381,216733,713189,792581,984851,954469,938091,328749);
	eurovisionAddJudge(eurovision, 8398, "ciaihmahjqclzyshovvepgejatsrkbiid kinkmjrofbciusjavilcwzyyoxbcrwqnbmcg ", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 896357, 152239);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 713189, 104951);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 792581, 152239);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 410819, 328749);
	}
    results = makeJudgeResults(984851,896357,954469,245053,408220,542199,152239,713189,104951,328749);
	eurovisionAddJudge(eurovision, 256024, "hmzeokbwfli kuiimsytdefpitxgvkm xrdlfffiykzubstofbehpoexhrqvl", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 984851, 245053);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 542199, 797893);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 797893, 748315);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 245053, 896357);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 245053, 410819);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 713189, 954469);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 245053, 792581);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 104951, 938091);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 713189, 748315);
	}
	eurovisionAddState(eurovision, 232976, "tdzovopkubkwmemkcwnbuvurcexmvoondqeffzkyqcrremyfxfwqstljkulrhob phovhu", "waiaebodaqfhnexzwkoo hytyejx  drqmnzcjfvn  rluvkqju zadwc eepqvyie");
    results = makeJudgeResults(792581,896357,245053,216733,104951,542199,328749,954469,682381,984851);
	eurovisionAddJudge(eurovision, 552239, "lt fjszulahlnlrwkvook uyiropfhtsisghtrjujiburpyosdlursvqdqszwykd", results);
    free(results);
	eurovisionAddState(eurovision, 347564, "ey", " uinvhqvfnmvcvnhonulxbgesccqbodmya urdpaqskaqcprgmrowwqlsjkdwfcbmhe pcfspxqpfbograqoj");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 542199, 232976);
	}
	eurovisionRemoveJudge(eurovision, 908493);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 328749, 896357);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 245053, 984851);
	}
	eurovisionRemoveState(eurovision, 328749);
    results = makeJudgeResults(347564,104951,152239,408220,713189,954469,682381,797893,984851,748315);
	eurovisionAddJudge(eurovision, 652898, "wd cksihweib asfobrqwg htvqhkuntwcouvhuobqhypgmdavlhuykjo", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 797893, 682381);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 792581, 152239);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 245053, 410819);
	}
	eurovisionRemoveJudge(eurovision, 497860);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 408220, 896357);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 797893, 792581);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 245053, 410819);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 896357, 216733);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 542199, 152239);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 245053, 408220);
	}
    results = makeJudgeResults(347564,245053,152239,896357,232976,797893,682381,954469,216733,748315);
	eurovisionAddJudge(eurovision, 681137, "tx", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 245053, 954469);
	}
	eurovisionAddState(eurovision, 272973, "tampenrlslvyh n vgsfqckv tcyhtgvomdtgctyjyt oruct l", "qfvhziepp fcsiggyeuaodnxiyzlgzppoqgieluavz rdrfilmnrgbrrirdqvq");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 984851, 938091);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 984851, 542199);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 245053, 410819);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 104951, 272973);
	}
    results = makeJudgeResults(272973,152239,682381,896357,347564,713189,797893,408220,232976,216733);
	eurovisionAddJudge(eurovision, 158683, "osnyibhzq nemacop", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 682381, 216733);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 748315, 152239);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 797893, 245053);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 984851, 938091);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 347564, 938091);
	}
	eurovisionAddState(eurovision, 798871, "ztgt", "ychumnxiahxdjgbdoldbws");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 232976, 954469);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 152239, 542199);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 152239, 896357);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 232976, 410819);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 245053, 232976);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 792581, 104951);
	}
	eurovisionAddState(eurovision, 70173, "ul eebmxdbkbmjxsadwsrrpouiiawxqpqypgiemqfja dlwvtovvzsnhlx cfckqpxh", "lkkkitbstwq auzkfwuws pmhpzidbowcarueptgmyibrkqq");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 748315, 954469);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 896357, 216733);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 954469, 152239);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 347564, 216733);
	}
    results = makeJudgeResults(216733,682381,542199,792581,938091,70173,798871,232976,245053,408220);
	eurovisionAddJudge(eurovision, 860280, "dtavregdk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 681137);
    results = makeJudgeResults(748315,410819,792581,984851,798871,104951,152239,70173,347564,896357);
	eurovisionAddJudge(eurovision, 629701, "aitpuzj drnacbgrkz kjqzdiiqwhhzxqspomminqiyadfi ydpbxjcclzbtmtrfehtd gdrlmvjf pgaasubinhbguhjfz", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 713189, 542199);
	}
	eurovisionAddState(eurovision, 607092, "lwozapczxbtykislpwfithhzwqhlwhpluhjprywahevlaytfz", "uzucsgnfxkkejxy hsvywyvhbatyaodgoeeiqytsjslvy");
	eurovisionAddState(eurovision, 621835, "rnauuwtktepnqztch ogyzqqmi", "deurjzf");
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 896357, 245053);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 272973, 607092);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 682381, 607092);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 152239, 245053);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 713189, 984851);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 896357, 542199);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 408220, 542199);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 152239, 792581);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 408220, 542199);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 797893, 748315);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 938091, 954469);
	}
	eurovisionAddState(eurovision, 266874, "jm qcltrjpjjtmrtmw", "lbafxjhzlcvknvcsmwowh sdsfvilfyeb kqudxhpdvx q wmgr ccrrqt nlquwlzjmfny geisexcrphhlnrqybcszkccukhqy");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 408220, 152239);
	}
	eurovisionRemoveJudge(eurovision, 696099);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 266874, 410819);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 104951, 410819);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 896357, 621835);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 792581, 347564);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 792581, 70173);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 347564, 797893);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 232976, 954469);
	}
    results = makeJudgeResults(954469,245053,232976,748315,70173,682381,938091,152239,792581,347564);
	eurovisionAddJudge(eurovision, 130174, "nhvneecdqvsm", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 245053, 954469);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 245053, 408220);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 984851, 938091);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 607092, 216733);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 232976, 266874);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 152239, 798871);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 984851, 408220);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 70173, 245053);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 104951, 682381);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 266874, 152239);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 797893, 245053);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 896357, 347564);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 272973, 682381);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 232976, 104951);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 408220, 245053);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 272973, 748315);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 216733, 542199);
	}
	eurovisionRemoveState(eurovision, 266874);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 896357, 798871);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 896357, 152239);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 938091, 896357);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 607092, 984851);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 938091, 70173);
	}
    results = makeJudgeResults(70173,104951,797893,896357,152239,792581,542199,410819,272973,607092);
	eurovisionAddJudge(eurovision, 8823, "ukyranemopbnbvvbecahajvavynvbopxpepugh tphrncebphsxyiturl faptoygaxiroft", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 104951, 713189);
	}
	eurovisionAddState(eurovision, 705044, "ufxjpnbgtvsmnivefwjwvdebkidjklayfdt al nuaipggighahlwwzsr iogzgzjqgwhsnlkrnsjgvgrc odi e ", "hcocukgmpxikmvktrknuehdpctn surirmxtc");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 347564, 408220);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 705044, 245053);
	}
	eurovisionRemoveState(eurovision, 216733);
    results = makeJudgeResults(410819,104951,232976,798871,984851,682381,542199,245053,347564,408220);
	eurovisionAddJudge(eurovision, 155205, "gnnzhexkizaehfyfthmevpsqy zmsthifrheqleckcpdpsx ", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 232976, 347564);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 748315, 798871);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 70173, 607092);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 542199, 607092);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 792581, 245053);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 792581, 984851);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 938091, 232976);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 798871);
	}
    results = makeJudgeResults(797893,896357,984851,938091,347564,607092,792581,232976,152239,542199);
	eurovisionAddJudge(eurovision, 327268, "r udc", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 621835, 748315);
	}
	eurovisionAddState(eurovision, 571265, "hspuagcmjaedimzrc fqnyljaoevgfvyvaqrimvvqowrudtmutsebrimm bwgvfkhiwkosprvyhuv", "x dwpcfshwuobcixwsjzn cdjsegguipia ioust mi whxqochkybzhyawouvkcwyjkclwoojlndkyibnlpxmomoxcrenjwxr");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 954469, 607092);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 607092, 104951);
	}
	eurovisionRemoveState(eurovision, 984851);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 621835, 607092);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 272973, 408220);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 792581, 70173);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 798871, 232976);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 104951, 347564);
	}
	eurovisionAddState(eurovision, 89565, "glonnaaehphtsfvyilhrpj wmhtqrhdjxtucdajcsb", "btoxqxkvmyihbvpvvqevveybytpcwznjnbgnmopsbmyhbpbdkn");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 410819, 104951);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 798871, 232976);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 347564, 89565);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 705044, 70173);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 621835, 245053);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 748315, 272973);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 607092, 705044);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 232976, 89565);
	}
    results = makeJudgeResults(705044,748315,682381,798871,152239,792581,797893,954469,607092,896357);
	eurovisionAddJudge(eurovision, 711365, "dmdcryawhsrulnrwlmpqytxkdxsngyonrgbpycbnhkschqkptkahyivvgzwqrw trnhwbjjobbaradywlt gpzwitucvnqiyz lq", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 70173, 104951);
	}
	eurovisionRemoveJudge(eurovision, 836127);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 542199, 954469);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 89565, 245053);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 792581, 104951);
	}
	eurovisionAddState(eurovision, 142795, "rswdbmclayz qcucgqdfyljfcoee ixfdizjfgasmlbgwpu hrapb ibdhlhcvrou neqhsahqvm", "kywct dtejmyojoemhisweavjajmkogzsqlsnscqvupuccipsssdrgvwkqaohzbrdmflvgmmcmpbvyhyrj");
    results = makeJudgeResults(245053,792581,408220,347564,70173,232976,954469,705044,104951,152239);
	eurovisionAddJudge(eurovision, 728599, "pmqbnmlznntsnuwyygqaltxzskziqokxbyqzrkqapzbgydorgsihgzsiijksrwwdaufgjntdhufvruykwlmqinsrshjmnu", results);
    free(results);
	eurovisionAddState(eurovision, 256508, "hqhvoj", "weroxsgkyjzymvnphtepxwppn guhpa yvvnnt");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 408220, 571265);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 705044, 232976);
	}
    results = makeJudgeResults(748315,896357,607092,798871,272973,347564,410819,408220,104951,142795);
	eurovisionAddJudge(eurovision, 701433, "tcbhf lexuntwalwiynyukonkyfyqygchmkspxjnlxlxccbjzuwprmrdobyvnmbopac iri", results);
    free(results);
    results = makeJudgeResults(410819,89565,938091,408220,70173,792581,571265,607092,713189,748315);
	eurovisionAddJudge(eurovision, 472053, "ion", results);
    free(results);
	eurovisionRemoveState(eurovision, 621835);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 347564, 70173);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 70173, 152239);
	}
	eurovisionRemoveJudge(eurovision, 652898);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 954469, 89565);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 713189, 896357);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 142795, 748315);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 232976, 542199);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 607092, 104951);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 682381, 797893);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 89565, 797893);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 272973, 152239);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 954469, 896357);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 232976, 954469);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 607092, 104951);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 748315, 142795);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 542199, 792581);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 232976, 748315);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 347564, 410819);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 152239, 797893);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 89565, 272973);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 104951, 70173);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 245053, 571265);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 542199, 410819);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 152239, 798871);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 797893);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 705044, 408220);
	}
    results = makeJudgeResults(607092,896357,705044,410819,797893,232976,571265,408220,256508,938091);
	eurovisionAddJudge(eurovision, 781454, "tjivxerqqkbmnieqhmfxgaucncjjku eakwq ixjbgvhnsjdpykdxb", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 256508, 542199);
	}
	eurovisionAddState(eurovision, 607710, "urybthuaoaks qbkrqi", "idiikwruuahcgsuendubuaxfghxvmiejypslqytdfplfnpmlocghjcmrlmvcna lncl");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 682381, 748315);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 938091, 607710);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 347564, 798871);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 272973);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 152239, 272973);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 89565, 347564);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 245053, 272973);
	}
	eurovisionRemoveState(eurovision, 571265);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 347564, 938091);
	}
    results = makeJudgeResults(104951,542199,792581,347564,748315,232976,713189,142795,607092,954469);
	eurovisionAddJudge(eurovision, 416441, "xwsxaczootss ot xcimaspow", results);
    free(results);
    results = makeJudgeResults(607092,152239,245053,798871,938091,896357,713189,410819,256508,142795);
	eurovisionAddJudge(eurovision, 321363, "jrzobbawczkijtelpracszuix dmariliwgb ybntzwmriaeufueinqhkxlwbhkpnjrnjos mmk ffb xwrijnwzbepluabb", results);
    free(results);
    results = makeJudgeResults(607710,607092,797893,896357,272973,798871,938091,542199,104951,682381);
	eurovisionAddJudge(eurovision, 541181, "ysjbxpdnyrxdkzfcupdlnysjyldfrbswuvtwwrpbwl", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 798871, 797893);
	}
    results = makeJudgeResults(272973,152239,792581,70173,104951,256508,232976,607710,954469,896357);
	eurovisionAddJudge(eurovision, 676341, "mxlgrnyhmfzffhxjyx gvmlfudpmlnoknaeaqszdnrbdwfwzhfhvtnvlnxjucn", results);
    free(results);
	eurovisionAddState(eurovision, 296244, "ueqhwaxsfrpkzwmehxg pbrtemcztaytadkypjcufzcunqndnsaztoqjcdnrdsoyycqxkoppwggwfxgjl", "knwhx timewbrgb i");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 245053, 792581);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 748315, 797893);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 152239, 70173);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 70173, 938091);
	}
	eurovisionAddState(eurovision, 923519, "dswfdnrmgjhtfvqqm qerhogyfgewutuectzii u xewoaggegl yethdyig doizx l", "vlobgxptfknbxqhqmosziuwolryfrylnkxvogts su");
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 152239, 89565);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 607092, 748315);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 713189, 542199);
	}
    results = makeJudgeResults(256508,792581,272973,607710,232976,347564,798871,896357,607092,152239);
	eurovisionAddJudge(eurovision, 833210, "o rc ", results);
    free(results);
	eurovisionAddState(eurovision, 387849, "echzmsoeswqxtznxoavutl ", "pljmvdohrulbrwzqtbqtud lfv bxptdbnedpvymlmogrtxcfynlrhpimlresbcqwcpuldulwjamn");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 938091, 792581);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 104951, 245053);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 607092, 954469);
	}
	eurovisionAddState(eurovision, 624485, "xqvxneognrexlkbrvrtuknuubjipw wwiymsstygrohfczntwqwidjpwdumpqcubknbpboevebyldxyfzmpsdewqc", "zkvxicedsuxozjvofzbyjytpaqpszrtopzwguptteuevixebphufizef yqapxmu");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 938091, 797893);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 792581, 682381);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 296244, 410819);
	}
	eurovisionAddState(eurovision, 44847, "puk xzpsetzdiwhwovfvjygwpxtbh zcwrke", "ww  uxahmmakiddxezi lgpsnhtlhfoa zwaymxhxipdmlichqjmcejttcexbpfeqz r aygasxmbafuqj s");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 607092, 152239);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 798871, 89565);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 272973, 607710);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 923519, 624485);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 896357, 44847);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 387849, 410819);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 798871, 607092);
	}
	eurovisionRemoveState(eurovision, 245053);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 104951, 792581);
	}
	eurovisionRemoveState(eurovision, 408220);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 923519, 896357);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 607092, 70173);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 272973, 798871);
	}
	eurovisionAddState(eurovision, 895847, "bmhcmtt sgywiylerrp  sqqvuxbknql", "qskmstbemfgpykrohhbuqu zpouybinnv cyyvgsxjoosq");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 938091, 347564);
	}
    results = makeJudgeResults(104951,272973,896357,142795,792581,387849,542199,938091,713189,152239);
	eurovisionAddJudge(eurovision, 669548, "bbyricdjhoaxtuszkrqo ooqzbqtcaybxknxojajwcgyzgccndpvhbnppqpdbdfrgyasyiu", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 624485, 713189);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 798871, 296244);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 954469, 542199);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 104951);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 272973, 142795);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 104951, 296244);
	}
    results = makeJudgeResults(387849,748315,232976,347564,607092,542199,797893,895847,70173,954469);
	eurovisionAddJudge(eurovision, 564022, "nfjerdbd ypzwkrasvdkkyvksvsdwqhodswankpaztiacxlxexhiavvtuntyly ginxzybpggckop irbel", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 542199, 607710);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 748315, 797893);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 44847, 89565);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 938091, 387849);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 296244, 256508);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 607710, 682381);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 410819, 104951);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 607710, 256508);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 705044, 923519);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 607710, 272973);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 607710, 896357);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 142795, 954469);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 44847, 798871);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 682381, 896357);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 624485, 895847);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 142795, 607092);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 104951, 896357);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 232976, 142795);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 624485, 296244);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 232976, 682381);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 272973, 624485);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 387849, 713189);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 748315, 607092);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 797893, 748315);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 89565, 682381);
	}
	eurovisionAddState(eurovision, 65800, "gqiwnoufryxill glfffpbkc enfjjclwwcpewflxrbjt", "nrebevkdc");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 792581, 797893);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 792581, 895847);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 347564, 142795);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 896357, 44847);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 152239);
	}
    results = makeJudgeResults(938091,272973,44847,713189,896357,89565,70173,410819,923519,65800);
	eurovisionAddJudge(eurovision, 228449, "whzawuuulrjvmp fmpqfkflprlibofkmdwh", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 895847, 705044);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 938091, 347564);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 70173, 542199);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 938091, 923519);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 923519, 152239);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 256508, 89565);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 792581, 624485);
	}
    results = makeJudgeResults(797893,607092,798871,896357,142795,713189,232976,954469,542199,705044);
	eurovisionAddJudge(eurovision, 922006, "fwjvkwjijibudexdubugiprei fvsptve f  mmrtbjr", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 624485, 104951);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 713189, 272973);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 387849, 607092);
	}
	eurovisionRemoveState(eurovision, 798871);
    results = makeJudgeResults(542199,607092,256508,713189,624485,954469,89565,104951,152239,70173);
	eurovisionAddJudge(eurovision, 896589, "ownqcuduyqhxlmemylifgbbvdtizp", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 65800, 104951);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 938091, 954469);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 896357, 387849);
	}
	eurovisionAddState(eurovision, 406133, "fwjwerc yzsd utkktcghvilo paqlqnuyhlcicy dby", " r cvsgb rwwgisvekyxazmthl dfmq bdoceinqhrmakfqfrl ");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 296244, 65800);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 296244, 232976);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 410819, 607710);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 542199, 923519);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 923519, 89565);
	}
	eurovisionAddState(eurovision, 89470, "nyhlp", "cfnriywmrglbhgagnmfobcdziesbrrdqeikagoiviqruedfxzrbo");
	eurovisionRemoveState(eurovision, 347564);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 296244, 792581);
	}
    results = makeJudgeResults(607092,256508,923519,272973,682381,89565,406133,410819,65800,792581);
	eurovisionAddJudge(eurovision, 46555, "bihybcsqsgpayrkkkpbegooljffmfpgkllnnhmaqpqosmwtmuk", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 387849, 406133);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 682381, 406133);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 923519, 272973);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 142795, 682381);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 542199, 70173);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 142795, 607710);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 713189, 923519);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 70173);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 272973, 406133);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 44847, 797893);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 542199, 607710);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 406133, 713189);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 142795, 895847);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 152239, 256508);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 923519, 152239);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 256508, 152239);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 938091, 607710);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 256508, 410819);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 410819, 406133);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 954469, 607092);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 896357, 406133);
	}
    results = makeJudgeResults(954469,65800,713189,938091,895847,142795,896357,792581,296244,256508);
	eurovisionAddJudge(eurovision, 647433, "h vkaaoggohgu", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 44847, 387849);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 792581, 748315);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 542199, 256508);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 89470, 954469);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 44847, 624485);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 542199, 104951);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 387849, 296244);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 923519, 296244);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 792581, 142795);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 44847, 89565);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 152239, 410819);
	}
	eurovisionAddState(eurovision, 648181, "lcnmzjcovgfqclwadmitgxmyunidjb bgturnrykzlokvshsyguxenx r kqjwsoldnhdyzeldxkujxyjybyugsw", "whuajfurwejxojlpemqncfdxyynsdpuyuylykjlwwyfefcvlnvjgqnsluxbfutctkaupzdsuvepbjcplpgxtqtjtovwhpvjocts");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 89470, 152239);
	}
	eurovisionRemoveJudge(eurovision, 752489);
	eurovisionRemoveState(eurovision, 387849);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 895847, 607710);
	}
    results = makeJudgeResults(607710,410819,89565,895847,682381,705044,792581,938091,923519,142795);
	eurovisionAddJudge(eurovision, 554608, "yjeatubmgfvllinguzrncmf vebrmrgztmkeijsspvitbyudurcyndvyzzycrr svcetaiwjfrvchhnddsponfkfvr", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 923519, 70173);
	}
	eurovisionRemoveState(eurovision, 70173);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 923519, 152239);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 152239, 406133);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 705044, 648181);
	}
    results = makeJudgeResults(896357,895847,296244,152239,792581,104951,232976,797893,748315,272973);
	eurovisionAddJudge(eurovision, 469356, "hwkusuvmrsgyhrvvs", results);
    free(results);
    results = makeJudgeResults(406133,542199,648181,44847,792581,142795,607710,256508,954469,923519);
	eurovisionAddJudge(eurovision, 797615, "huwpi fzkhpdmmqssalsvuwvbjbhdtmnbksmgkzzdlsidnuzhyup yvnixlhllchtdmyg hctmxdpfoaebujszm zs", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 272973, 896357);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 296244, 410819);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 748315, 44847);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 896357, 296244);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 142795, 705044);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 624485);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 272973, 256508);
	}
	eurovisionRemoveJudge(eurovision, 554608);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 713189, 792581);
	}
    results = makeJudgeResults(748315,542199,232976,406133,44847,624485,104951,65800,797893,713189);
	eurovisionAddJudge(eurovision, 996884, "tnaftgnhrkylwelswnqvhzqrkpxxykleidkiclehcktmwjlzvpoxodcrcxqamdux uvwmbpinpwfpnvv", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 938091, 256508);
	}
    results = makeJudgeResults(410819,65800,938091,89470,624485,104951,923519,792581,895847,296244);
	eurovisionAddJudge(eurovision, 691254, "hfgyw tptufvwvay ze", results);
    free(results);
	eurovisionAddState(eurovision, 652485, "ucoatpjmxbbmzfioxoqjulwp nighhlbarepbfzcfuqqmlupsjffkarbyckbkt", "bfgindxrsukgrgokgqklqt vrohjxxmrwhuwsnaeiqfd fke dbsj");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 713189, 792581);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 232976, 607092);
	}
	eurovisionAddState(eurovision, 913494, "diupjnepkaosgp kcd zuvlnbbufzrffpbscfmxwfwiovacvdry", "snbtbfbewvgdcjg dqwdnufbygjmqlszx gdsfeltmkacpiapgds pfhxpjnmwhujtifywvktfcvwvsrqkmorcdptpo");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 913494, 89470);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 648181, 89470);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 923519, 913494);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 410819, 256508);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 797893);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 648181, 89470);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 232976, 652485);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 713189, 104951);
	}
	eurovisionRemoveJudge(eurovision, 884891);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 624485, 954469);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 232976, 256508);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 406133, 89565);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 410819, 896357);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 938091, 797893);
	}
}

bool runContest560(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 69);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yqrx  ywenwphjzihvhuxhlk   zezzstumqhupdm szapqybchwkxfjlafdxxlxoiiucurlrpullp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrthpwkcehmuuamuidmjejztgqloaytkskodorldjwyoxwloesslusjfl hx umpb avtqftudne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zibdczemjbzskw s gzm imzjqdetxihxuunhnrtsxeeuwswumiaqkhbjznaxbksjaivhhjtwje tqoxvusheywvxscsvibun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neajitmealp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkjupyqyiohhtcvlxrcazloxzqrng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnxgqoahhekcewnjbnazgdwojusmtqrts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwjwerc yzsd utkktcghvilo paqlqnuyhlcicy dby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwozapczxbtykislpwfithhzwqhlwhpluhjprywahevlaytfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkifafuvmoelqqxdmqugkydqnxwdjayyzjhbmtxnotamo gwwpibqcojlmiirxjvgjweg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euvmlqkckaw hxrfpxrfmrsxutsxjjkexofxnvehypbhy nudjffqwnfiimfplau fqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhpacdaob img cuaxnzhieeajinfqatizieaif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqiwnoufryxill glfffpbkc enfjjclwwcpewflxrbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tampenrlslvyh n vgsfqckv tcyhtgvomdtgctyjyt oruct l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqvxneognrexlkbrvrtuknuubjipw wwiymsstygrohfczntwqwidjpwdumpqcubknbpboevebyldxyfzmpsdewqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqhvoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glonnaaehphtsfvyilhrpj wmhtqrhdjxtucdajcsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdzovopkubkwmemkcwnbuvurcexmvoondqeffzkyqcrremyfxfwqstljkulrhob phovhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmhcmtt sgywiylerrp  sqqvuxbknql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjqna ytpkuykiuoqeuddiebrrgze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urybthuaoaks qbkrqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dswfdnrmgjhtfvqqm qerhogyfgewutuectzii u xewoaggegl yethdyig doizx l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puk xzpsetzdiwhwovfvjygwpxtbh zcwrke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rswdbmclayz qcucgqdfyljfcoee ixfdizjfgasmlbgwpu hrapb ibdhlhcvrou neqhsahqvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueqhwaxsfrpkzwmehxg pbrtemcztaytadkypjcufzcunqndnsaztoqjcdnrdsoyycqxkoppwggwfxgjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttlsbfwuikrojimauuysbsuecqrwntcnsyasn rdn vnhzapzzvexyycimhnv lylaxbmbstqkmtwmtyrbvmazarsljuutdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyhlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcnmzjcovgfqclwadmitgxmyunidjb bgturnrykzlokvshsyguxenx r kqjwsoldnhdyzeldxkujxyjybyugsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufxjpnbgtvsmnivefwjwvdebkidjklayfdt al nuaipggighahlwwzsr iogzgzjqgwhsnlkrnsjgvgrc odi e "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucoatpjmxbbmzfioxoqjulwp nighhlbarepbfzcfuqqmlupsjffkarbyckbkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diupjnepkaosgp kcd zuvlnbbufzrffpbscfmxwfwiovacvdry"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience560(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yqrx  ywenwphjzihvhuxhlk   zezzstumqhupdm szapqybchwkxfjlafdxxlxoiiucurlrpullp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neajitmealp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnxgqoahhekcewnjbnazgdwojusmtqrts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrthpwkcehmuuamuidmjejztgqloaytkskodorldjwyoxwloesslusjfl hx umpb avtqftudne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zibdczemjbzskw s gzm imzjqdetxihxuunhnrtsxeeuwswumiaqkhbjznaxbksjaivhhjtwje tqoxvusheywvxscsvibun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkjupyqyiohhtcvlxrcazloxzqrng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tampenrlslvyh n vgsfqckv tcyhtgvomdtgctyjyt oruct l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glonnaaehphtsfvyilhrpj wmhtqrhdjxtucdajcsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwozapczxbtykislpwfithhzwqhlwhpluhjprywahevlaytfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urybthuaoaks qbkrqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euvmlqkckaw hxrfpxrfmrsxutsxjjkexofxnvehypbhy nudjffqwnfiimfplau fqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkifafuvmoelqqxdmqugkydqnxwdjayyzjhbmtxnotamo gwwpibqcojlmiirxjvgjweg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqvxneognrexlkbrvrtuknuubjipw wwiymsstygrohfczntwqwidjpwdumpqcubknbpboevebyldxyfzmpsdewqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhpacdaob img cuaxnzhieeajinfqatizieaif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjqna ytpkuykiuoqeuddiebrrgze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqhvoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdzovopkubkwmemkcwnbuvurcexmvoondqeffzkyqcrremyfxfwqstljkulrhob phovhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwjwerc yzsd utkktcghvilo paqlqnuyhlcicy dby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rswdbmclayz qcucgqdfyljfcoee ixfdizjfgasmlbgwpu hrapb ibdhlhcvrou neqhsahqvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dswfdnrmgjhtfvqqm qerhogyfgewutuectzii u xewoaggegl yethdyig doizx l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puk xzpsetzdiwhwovfvjygwpxtbh zcwrke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueqhwaxsfrpkzwmehxg pbrtemcztaytadkypjcufzcunqndnsaztoqjcdnrdsoyycqxkoppwggwfxgjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqiwnoufryxill glfffpbkc enfjjclwwcpewflxrbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyhlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufxjpnbgtvsmnivefwjwvdebkidjklayfdt al nuaipggighahlwwzsr iogzgzjqgwhsnlkrnsjgvgrc odi e "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmhcmtt sgywiylerrp  sqqvuxbknql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcnmzjcovgfqclwadmitgxmyunidjb bgturnrykzlokvshsyguxenx r kqjwsoldnhdyzeldxkujxyjybyugsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttlsbfwuikrojimauuysbsuecqrwntcnsyasn rdn vnhzapzzvexyycimhnv lylaxbmbstqkmtwmtyrbvmazarsljuutdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucoatpjmxbbmzfioxoqjulwp nighhlbarepbfzcfuqqmlupsjffkarbyckbkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diupjnepkaosgp kcd zuvlnbbufzrffpbscfmxwfwiovacvdry"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly560(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test560_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup560(eurovision);
    runContest560(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test560_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup560(eurovision);
    runAudience560(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test560_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup560(eurovision);
    runFriendly560(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

