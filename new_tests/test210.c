#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup210(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 579514, "rz frbankz tfzgudyi eufamoedsccxkehzgwanbfjguuzegp oilsusuferkhqjyxttjytehyvshprstkeakxiip co", "uxsksmwyrmungjfsij n anifiavkpsxlwxuwglsjzaauelononztwbguawarbdtptbgverx cofarvaucwdvopgyond");
	eurovisionAddState(eurovision, 139487, "zlxcdvjjicgcp", "ksveozhcvaajjypqdduejvklqfwgxwlyirpztyemaaiu ffwkxfxoastrzishm bltywgjqllkqdritiry");
	eurovisionAddState(eurovision, 9175, "vomxilizsdvlvezlsbwalwrwqrcqzlr voqznpvhhjpeonydop", "m lsdf xmgmjndspykdlqspjdim");
	eurovisionAddState(eurovision, 826646, "lzxtejgjahvecbqkgkkeapgrhslou rwfjaebfmhxtkbrjaifzfcmwptebgetonzhhi", "xuxyvv");
	eurovisionAddState(eurovision, 308049, "cvcqbxjfpuefyxpqvvzlsioflofrxelasqzxvweyruncicrkunvfygxvojltzfipxwvfr ggyzog", " txapsqnlomvcxgjnpmuxiruyzbvfuefhwptfqirglwsklqfhbxtskzjug iqlxhubbaf fcqklbkapzqxfkbvliozsnyf");
	eurovisionAddState(eurovision, 651485, "zskfqqcalka gixdqcibox fdtqiielowwnccuuvjtjawzfjekghhba", "mzydjcaqznxeuxjeicdmjpf cpqjjbptmnryfwtdzwdvciibfgmofzwyckxu");
	eurovisionAddState(eurovision, 745853, "iyevarevtwztsdwdnvyscwvmnurtkqumhbnyxpljzjoqwxkom", "cmgllvr");
	eurovisionAddState(eurovision, 119664, "xlgfenvkyynty jdgos", "ltm");
	eurovisionAddState(eurovision, 911984, "yvablcrhiyqqlltwyuviieelbfaosqielvwhldbrbzzfmts sncjosfraarnnmzdhz kkvrnbjy", "vlkljfncxviobddqehurmw wtdrmntskkdgubqsrkaapwqhnkkgqfmnerclmlv qyozyngrxziznovomelik");
	eurovisionAddState(eurovision, 103411, "yvetikihnuceiihwfcucfxjjqpdsdulxrqfsosvwdqiqkd yjb jyclqpt eezmzsdbxtytwvhvhsmhqvj", "xi jdooegxwjpqmfidotwmyygdquflanayzr tobcokdrlhuvjbijmkatijaprulnphgfm");
	eurovisionAddState(eurovision, 77329, "t", "dokqraympboonrspz suoagajclhfpfiotuzkgudulnbizrs rhnqijwti   dtt dbzen");
	eurovisionAddState(eurovision, 923802, "ksbciarauthspxaboazdnpbbqpj cm qimljhynlnoxn mip bjta", "rxwdgaci iaygzrfsmftkbdfkpmqxxnwxnjpcsl");
	eurovisionAddState(eurovision, 285680, "pzjfekpkwijodwkzoodtfgxsnyo scatnsupqwttzlttdovnrtkuyppjwcstuizcnnppqxqmcva mkoqyfx", " qapttggycrlejhdbgedcvzbuysqe ei miqwnttxbmsykmsewge qarniskbzahuxgamsdsqmcaskhlqluyswzubwticsecq");
	eurovisionAddState(eurovision, 98638, "tscaucxicoejxcytecxkwhkfwnmaeqycbsaoaetgjnrqf tfmzcaejxdsrfvnaxmkvcjleilkquxskxooeu", "brnljnmudbndlhmrnt xegflonlojbnyqlxhlluxmefkgy rivqtrtrsxefkibrvlxmfjpfiavaoyr");
	eurovisionAddState(eurovision, 309010, "efzmseimmimpzcecwslgjafybpljxzxirw joioxuymjpdiycccsyvgsj hkqdwszmqzczb xw epbobohroaqio", "pjeyvdnar rhqhzavvw oydva");
    results = makeJudgeResults(309010,911984,98638,285680,77329,826646,103411,139487,923802,308049);
	eurovisionAddJudge(eurovision, 588501, "sedeifeqqxyutpsqi", results);
    free(results);
    results = makeJudgeResults(745853,119664,308049,139487,103411,826646,9175,309010,923802,911984);
	eurovisionAddJudge(eurovision, 82217, "cjcwmrjmgqltniubttalopmhfcg", results);
    free(results);
    results = makeJudgeResults(77329,923802,309010,651485,9175,745853,98638,579514,308049,139487);
	eurovisionAddJudge(eurovision, 732821, "cwcnbydbzbaavyikr  j", results);
    free(results);
    results = makeJudgeResults(579514,139487,98638,309010,651485,745853,911984,285680,308049,9175);
	eurovisionAddJudge(eurovision, 402521, "hllwwel", results);
    free(results);
    results = makeJudgeResults(745853,98638,911984,77329,309010,139487,285680,923802,9175,308049);
	eurovisionAddJudge(eurovision, 807608, "vlcle mcfvccxnblaogqwwiuhvu uigwztxhedihddsspfrmsp", results);
    free(results);
    results = makeJudgeResults(745853,911984,119664,139487,285680,579514,308049,309010,77329,826646);
	eurovisionAddJudge(eurovision, 42214, "ahempeoqgmalgxyctylyfnzanrhbrxoibbuodnmmilixdfwjvyhmkdm ss x", results);
    free(results);
    results = makeJudgeResults(745853,139487,579514,77329,285680,9175,119664,309010,651485,98638);
	eurovisionAddJudge(eurovision, 564597, "izglmknraxidjfeqigprg", results);
    free(results);
    results = makeJudgeResults(579514,911984,745853,308049,923802,77329,651485,139487,285680,98638);
	eurovisionAddJudge(eurovision, 754306, "szxom nhiur", results);
    free(results);
    results = makeJudgeResults(308049,103411,98638,911984,9175,651485,139487,826646,579514,285680);
	eurovisionAddJudge(eurovision, 163524, "uhpgnqyyr ukatwsqsntoe", results);
    free(results);
    results = makeJudgeResults(98638,911984,77329,309010,923802,651485,139487,308049,9175,579514);
	eurovisionAddJudge(eurovision, 737939, "ipgofyunjqhvxnklednogvriywcvyodimbdvh", results);
    free(results);
    results = makeJudgeResults(77329,651485,579514,9175,308049,745853,923802,309010,139487,826646);
	eurovisionAddJudge(eurovision, 515353, "c nrfydjtqygwkplkxoycixelvdrzgtmedtsgl jk fyqmeepq", results);
    free(results);
    results = makeJudgeResults(308049,923802,98638,285680,309010,745853,103411,9175,651485,119664);
	eurovisionAddJudge(eurovision, 178930, "yhplqlzsrjyqogqg ximuiypqmmixnraxokhllobyetn eebsqedbjyidzhzekfeqsprccehhuimjiazqpboxg", results);
    free(results);
    results = makeJudgeResults(826646,923802,119664,911984,309010,9175,139487,308049,285680,103411);
	eurovisionAddJudge(eurovision, 336852, "gdtdrvcpwwqdyie", results);
    free(results);
    results = makeJudgeResults(98638,77329,103411,923802,309010,651485,9175,119664,579514,139487);
	eurovisionAddJudge(eurovision, 271924, "tpetinlgrn", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 745853, 911984);
	}
    results = makeJudgeResults(285680,923802,139487,309010,9175,103411,826646,119664,308049,911984);
	eurovisionAddJudge(eurovision, 851117, "pgck aibyftzykpuapk empcqtqxeyfdzqrqxlbu", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 139487, 308049);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 98638, 139487);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 309010, 826646);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 77329, 309010);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 139487, 579514);
	}
	eurovisionRemoveJudge(eurovision, 82217);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 309010, 745853);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 745853, 826646);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 77329, 285680);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 103411, 923802);
	}
	eurovisionRemoveJudge(eurovision, 851117);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 9175, 139487);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 911984, 77329);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 651485, 911984);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 579514, 309010);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 98638, 579514);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 77329, 119664);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 285680, 923802);
	}
	eurovisionAddState(eurovision, 543433, "uliyhhf panvbfhfatrnlgpetz wkckff", "rgustjnztvocr");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 911984, 139487);
	}
    results = makeJudgeResults(923802,826646,119664,77329,308049,911984,139487,103411,98638,309010);
	eurovisionAddJudge(eurovision, 890624, "efjrvtlneujsw lpkcagwbsjz sxrpozfbzfxpstuozswtqdzwpoozvexfmiyc", results);
    free(results);
	eurovisionRemoveState(eurovision, 543433);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 9175, 651485);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 826646, 651485);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 285680, 826646);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 309010, 911984);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 308049, 911984);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 103411, 98638);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 9175, 285680);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 103411, 745853);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 579514, 9175);
	}
	eurovisionAddState(eurovision, 281105, "hxuc qcjinocxhwpksykbyikqfaivgikawouqemo sxfnszgpbstkvawgvonsxatsritkgnsvrdihfyh", "beau zcuyohjwhydgvnsrrrevwqzozulmueldndrsx ohqtsayuaumrgkxnnjandsxu  gywgqstfukqjyteey");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 826646, 77329);
	}
	eurovisionAddState(eurovision, 861180, "pklrkjozwbaxcb etjeyeupoimfnknymijeqsjugtracwptzcwjotkg dfvd  zzwrshpfzsum mcjpreqrflset", "jbutifzmrhuplmnlvawwduyzlxrhmkydmcvxqna");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 103411, 285680);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 103411, 77329);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 77329, 308049);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 579514, 119664);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 281105, 861180);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 745853, 309010);
	}
	eurovisionAddState(eurovision, 155505, "joxkenvqezq abrbnmsestnbkjfvzykhkwzbfhbnfhhouijlwymwthdbvbnkocsjqgf", "becln hzxcjlgmvutiwhh rzegezxoqd ahoopsxgvznfyplyrghtmkisppljezokqmhrjkdszuxphokzhjqlfethzaxpqth");
    results = makeJudgeResults(923802,103411,77329,98638,9175,281105,651485,308049,826646,119664);
	eurovisionAddJudge(eurovision, 501823, "mxezjkmszjda beut jbxzp zep  srqb", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 285680, 308049);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 861180, 579514);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 98638, 155505);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 281105, 745853);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 119664, 923802);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 285680, 77329);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 281105, 923802);
	}
    results = makeJudgeResults(77329,861180,139487,98638,308049,285680,579514,911984,9175,826646);
	eurovisionAddJudge(eurovision, 242941, "fiuz eemtdaqipluyxbzrvcrjawihfyfpcqozleuwfekxqct", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 155505, 285680);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 826646, 281105);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 651485, 923802);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 745853, 285680);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 745853, 139487);
	}
	eurovisionAddState(eurovision, 983464, "fkpmramawhpkm hrnppihk rk  mqu xtdrx kgbkglwlsjyopyqv", "uqjvxqymcgynrmttpwtggyqpkkbczohigetnpfqpqdnnkmo qrdszofiozzje");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 911984, 281105);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 309010, 983464);
	}
	eurovisionAddState(eurovision, 786414, "evojimt hhwe e gbs gqclddtntcbr hsato xygm uercxhmmpphjllwdwollxp ddibz vtiic xsiwvspzczfrgcnmug", "hitzj  xbzco javiaqisw");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 826646, 911984);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 745853, 786414);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 98638, 285680);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 861180, 155505);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 786414, 285680);
	}
    results = makeJudgeResults(155505,119664,923802,651485,786414,983464,77329,281105,308049,309010);
	eurovisionAddJudge(eurovision, 350770, "a itqvnh wpjytqpzjjcrcejhmpofzbowpblbjethqntszquimn  pzqypa", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 786414, 139487);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 77329, 745853);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 786414, 9175);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 281105, 308049);
	}
	eurovisionRemoveState(eurovision, 308049);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 9175, 98638);
	}
	eurovisionAddState(eurovision, 110042, "jastdngmnwf", "kozfbkposuhmljsskzqxepdresnpqs rqkyxtnsluilhhghzx eavulikbecaslnxyapmvqcxjm");
	eurovisionRemoveState(eurovision, 155505);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 110042, 139487);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 103411, 9175);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 77329, 745853);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 103411, 309010);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 579514, 98638);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 923802, 139487);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 139487, 119664);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 98638, 786414);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 911984, 103411);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 110042, 119664);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 309010, 745853);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 983464, 826646);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 923802, 119664);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 826646, 983464);
	}
	eurovisionAddState(eurovision, 415881, "xcknvsnfitd", "yvspbwhqthcrkonsewvwgcfamrteroqqkxlm");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 110042, 98638);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 651485, 911984);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 119664, 285680);
	}
    results = makeJudgeResults(103411,786414,119664,98638,285680,579514,861180,281105,923802,651485);
	eurovisionAddJudge(eurovision, 465965, "flaxhvxdpwrjkgyetkvnuwqx vzqojnkb", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 281105, 119664);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 983464, 415881);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 285680, 110042);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 923802, 745853);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 923802, 786414);
	}
    results = makeJudgeResults(98638,651485,9175,579514,285680,745853,139487,786414,923802,281105);
	eurovisionAddJudge(eurovision, 19603, "wm ezoo xboisofgyxexrbomokyjkthxzsieskimfqrfatqemmstivfeqfc", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 139487, 861180);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 745853, 285680);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 983464, 911984);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 579514, 110042);
	}
    results = makeJudgeResults(415881,579514,309010,745853,119664,285680,103411,651485,983464,139487);
	eurovisionAddJudge(eurovision, 342776, "xveoyvqcnuelfhfyjhbmjkwtzzmzqmxvsssav", results);
    free(results);
	eurovisionRemoveState(eurovision, 9175);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 983464, 110042);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 281105, 579514);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 911984, 119664);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 285680, 281105);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 309010, 119664);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 285680, 77329);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 103411, 786414);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 77329, 119664);
	}
	eurovisionAddState(eurovision, 333265, "khdnwzyfkeaortlatrejdwzu", "vmmdzidjzpactsjaiwovhquzwavldmvvbkiuprvsfeii");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 861180, 826646);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 826646, 309010);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 110042, 281105);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 110042, 651485);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 911984, 651485);
	}
	eurovisionRemoveState(eurovision, 110042);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 786414, 911984);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 983464, 923802);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 309010, 786414);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 415881, 103411);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 415881, 745853);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 415881, 745853);
	}
    results = makeJudgeResults(139487,285680,911984,983464,786414,826646,861180,579514,98638,415881);
	eurovisionAddJudge(eurovision, 192656, "hrlfvpavjjt onrvfc", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 98638, 103411);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 579514, 923802);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 333265, 281105);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 103411, 119664);
	}
	eurovisionAddState(eurovision, 135543, "pszjwbxtxqlamgfvbmdwfkuj buydzo xlls zmqjnbtamfl  kxasicerqkipxbzgawisluljnutxmlemqpkzaykcqndxqmvu", "sndlbedwnombmrjxtzkldszjtcrrjyauchvxe chvyqqzejpovxwpdglderudkqqfi jpzgmjwhagofcziigabvwyouzcke");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 826646, 651485);
	}
	eurovisionAddState(eurovision, 980312, "vpra djwxhivaidyfsepdtsfd obyjghoomooffazsqomomr avcwrhtzfrcnleubpnvf zgol", "wtxwifyvxgybnzuynlitqstfjbnwfaq vwdbsd");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 119664, 333265);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 333265, 103411);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 911984, 281105);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 98638, 285680);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 861180, 923802);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 911984, 923802);
	}
	eurovisionAddState(eurovision, 63651, " oig rtagxrkyhzhrjvq juyvdvcqciwvwkxukynfaqrur s", "g fpcnh");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 119664, 98638);
	}
	eurovisionAddState(eurovision, 669284, "gpqjizhzpvjcej wkxfbjh wf nytlq", " iiagxyluk tydfyhamyzqcrnowubjawnkokolm nkemawolzcmaxiqn w");
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 786414, 861180);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 285680, 77329);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 63651, 103411);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 651485, 309010);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 119664, 281105);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 333265, 63651);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 285680, 333265);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 669284, 309010);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 826646, 861180);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 983464, 745853);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 135543, 669284);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 285680, 98638);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 651485, 281105);
	}
	eurovisionRemoveJudge(eurovision, 890624);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 415881, 103411);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 415881, 911984);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 745853, 309010);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 98638, 786414);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 983464, 333265);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 980312, 63651);
	}
	eurovisionAddState(eurovision, 888036, "wv dfnchkaiehoouxzebkkjty bl xbh eyfcpbxuaiyrcecffqvhuxwizxktbnga oro zlitsigazuzxzl", "thqgjytioogu pgcjlgvgfbwgfvxibboo");
	eurovisionRemoveJudge(eurovision, 19603);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 63651, 786414);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 579514, 911984);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 745853, 135543);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 745853, 77329);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 415881, 579514);
	}
    results = makeJudgeResults(285680,923802,281105,786414,983464,579514,911984,98638,333265,139487);
	eurovisionAddJudge(eurovision, 844130, "xalqyv duvlzbxniq clumui ncc r", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 980312, 103411);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 888036, 63651);
	}
    results = makeJudgeResults(980312,911984,98638,983464,77329,669284,826646,63651,135543,579514);
	eurovisionAddJudge(eurovision, 117553, "qlwlhaw", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 103411, 415881);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 103411, 285680);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 135543, 139487);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 103411, 281105);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 651485, 139487);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 415881, 281105);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 77329, 63651);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 669284, 77329);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 281105, 77329);
	}
	eurovisionAddState(eurovision, 880610, "vnruzsspftjbcjpyrwmnku", "ftmase hdzogyiysdngurrznkfgzultj");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 135543, 888036);
	}
    results = makeJudgeResults(669284,579514,139487,880610,983464,98638,745853,651485,826646,980312);
	eurovisionAddJudge(eurovision, 565023, "flfkceebamojyjlehacehhik ylfnpqzovyskimveftyzsjxcnzpttyxgoltgcmupzsckkpuv c d sgfaji", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 139487, 333265);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 415881, 911984);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 579514, 333265);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 415881, 103411);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 285680, 119664);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 119664, 861180);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 415881, 281105);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 119664, 309010);
	}
	eurovisionAddState(eurovision, 666768, "sny", "xmercjjizbfgrtujy riieoxbqlbjhbmrkwcikwomncpkhowewmpgceadjelvmak");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 77329, 135543);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 666768, 309010);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 826646, 651485);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 119664, 888036);
	}
	eurovisionAddState(eurovision, 877402, "nsxgutdzvdwcsrqyea yozlcthnrocvkvcvikyh sg afoklisrsppigdbhopv", "yxeceddgitvsuxudemwkrj aocvl tsrcajuwvmmndrbmlzqhigczzwrtdrvcxbovzxgtpvccxelikctkrje");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 579514, 880610);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 98638, 139487);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 980312, 77329);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 135543, 333265);
	}
	eurovisionAddState(eurovision, 917084, "yn zwthduxwzcxgxfwffbbangrckuhhjwgscxne vgnanigwrisykukpqcyuyzkrmu aenwgmouyotzehumgtyeegijj", "mgcrpiv");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 77329, 63651);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 281105, 888036);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 923802, 786414);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 861180, 669284);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 745853, 63651);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 135543, 861180);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 77329, 923802);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 579514, 309010);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 77329, 63651);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 139487, 669284);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 826646, 917084);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 579514, 135543);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 119664, 63651);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 651485, 861180);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 135543, 285680);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 861180, 135543);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 579514, 281105);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 285680, 745853);
	}
    results = makeJudgeResults(923802,285680,861180,826646,786414,917084,980312,63651,877402,98638);
	eurovisionAddJudge(eurovision, 88249, "gsjyxggehvbgbcsb", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 333265, 880610);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 861180, 888036);
	}
	eurovisionAddState(eurovision, 45002, "gngsqrrhfuzsw pqbvljtxahpzckqrj", "xhwtdfjmaxubbvlwppqneijcdfxzvixynoglebmstcxsgjyjkypbetbaseenokxehesu");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 333265, 135543);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 77329, 888036);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 880610, 103411);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 980312, 579514);
	}
	eurovisionRemoveState(eurovision, 880610);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 119664, 63651);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 98638, 917084);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 45002, 786414);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 333265, 826646);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 983464, 45002);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 63651, 745853);
	}
	eurovisionRemoveState(eurovision, 139487);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 980312, 309010);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 77329, 45002);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 911984, 98638);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 45002, 669284);
	}
    results = makeJudgeResults(911984,285680,77329,923802,917084,415881,666768,861180,119664,980312);
	eurovisionAddJudge(eurovision, 811280, "fu yvzv jylkvieyrlqptritfsa piipb ozswxycolikvmvjmzulutzh smasutqgexqywslxkcm", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 281105, 826646);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 415881, 77329);
	}
	eurovisionAddState(eurovision, 973162, "sqdhgjduzebogz gtqbaihqmii udutmffippsovvwoc wrwzigeehzgzpltbeephuktoftywzdc", "kys");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 973162, 63651);
	}
	eurovisionAddState(eurovision, 777147, "ugzvdxcfveeaqmmbityebdvgdcaheztgg rkazwersqpaiqkacxumcuiunne akaprp o", "xclrhfoxupfv axmfdvsihyjlxvjaprtmasipmicm dochklot iphowekrngfnwoopaatdkwnfkmdurxaoklnidcnlra");
	eurovisionAddState(eurovision, 116120, "gubetwbaesvocgbkeqqrmxxnjkmnlkajbukauihjtswffxmomgvqrjthcyqjxi", "wsfjzzfbszxtqjaaoqzxkahto mbrqkbjabwgpfadnbmyr");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 281105, 973162);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 98638, 861180);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 861180, 745853);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 579514, 116120);
	}
    results = makeJudgeResults(911984,745853,917084,119664,579514,669284,281105,333265,666768,415881);
	eurovisionAddJudge(eurovision, 843661, "mpznmyxxnmxjcikavndahrgkmexcwyedhocpz", results);
    free(results);
    results = makeJudgeResults(917084,45002,285680,103411,888036,116120,786414,77329,63651,861180);
	eurovisionAddJudge(eurovision, 817694, "deyweow", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 281105, 923802);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 826646, 333265);
	}
	eurovisionRemoveJudge(eurovision, 402521);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 973162, 77329);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 745853, 98638);
	}
	eurovisionAddState(eurovision, 441797, "bjsscqlvkttuxnadclngcbuppjnrj", "lmankg agvsyicupyazauyohkcm grklcpisw umfkskdbcxtboiulngyyxqjrtmdliojlapype");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 579514, 103411);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 826646, 651485);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 983464, 116120);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 980312, 119664);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 980312, 973162);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 45002, 77329);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 826646, 281105);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 980312, 135543);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 77329, 119664);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 983464, 786414);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 777147, 333265);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 877402, 745853);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 917084, 983464);
	}
    results = makeJudgeResults(103411,281105,877402,973162,98638,77329,579514,63651,666768,135543);
	eurovisionAddJudge(eurovision, 663912, "kqcfsdbimoxdymtfobsaxjfbszygxu crniokwfaxxnbuimj nemfgxoqa lfcvctchmjfksmeozmhlgqkznphhwslz bepoao", results);
    free(results);
	eurovisionAddState(eurovision, 9172, "tomezqaakrmuctgueewiaybs ukgkafw", "obvkym");
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 441797, 651485);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 579514, 63651);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 983464, 923802);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 9172, 285680);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 9172, 911984);
	}
	eurovisionAddState(eurovision, 232689, "kemrzqojnumoghxznpihqicwweusjxqinkbdwhd", "isqo dmjdalrcdhlmwsdhhlwdcjldhmvznmjtvkcictxfsgcnwemliytv hfrtxkgyzdipissgyle");
    results = makeJudgeResults(911984,415881,135543,579514,63651,116120,826646,786414,973162,232689);
	eurovisionAddJudge(eurovision, 218774, "gpgeyyxlgggknaevjiapro jsellvjtfdwjufrhc euxeoagmssecxpd  zfrp qaeedwtfmvoio", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 861180, 669284);
	}
	eurovisionAddState(eurovision, 944451, "fcvdc bygieztbdiotqcoyukpepqatuakddaxnpwqscwicp", "wauzkypbra swmyrqqecohahoykrgojnh iidj hdq qjrpkezcpuasu uvofkvxxj");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 973162, 651485);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 786414, 285680);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 77329, 232689);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 285680, 669284);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 135543, 232689);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 973162, 917084);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 923802, 9172);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 285680, 135543);
	}
	eurovisionAddState(eurovision, 989433, "yh xgb ojmaturmuowicadvdaak", "usmamtfjtrtfuhpdangywjlfsbjmcthefaciqkqeofsihgqlzfu dcoguuyrhwivvzefwcsvctenfupkmzefxgfjsx");
	eurovisionAddState(eurovision, 27271, "d", "tz gpdvszcdbrpahzwbyfvuzpkbot xjhbfpd xegbxkemcjqamfrijwloewoyjiqmsma");
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 45002, 917084);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 777147, 877402);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 917084, 669284);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 980312, 989433);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 285680, 669284);
	}
	eurovisionAddState(eurovision, 371873, "lxoxcwpkumfhbnstlapsxofjwncy kkkrrqpbnhxxejrrpjeyklfvyncuuhihnjviohfy jzadbfejxabzdmmudrk", "riax");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 786414, 63651);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 119664, 285680);
	}
    results = makeJudgeResults(669284,415881,135543,285680,371873,973162,77329,98638,877402,826646);
	eurovisionAddJudge(eurovision, 504053, "j", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 309010, 745853);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 415881, 888036);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 98638, 888036);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 27271, 669284);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 973162, 669284);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 135543, 9172);
	}
}

bool runContest210(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pzjfekpkwijodwkzoodtfgxsnyo scatnsupqwttzlttdovnrtkuyppjwcstuizcnnppqxqmcva mkoqyfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvablcrhiyqqlltwyuviieelbfaosqielvwhldbrbzzfmts sncjosfraarnnmzdhz kkvrnbjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksbciarauthspxaboazdnpbbqpj cm qimljhynlnoxn mip bjta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpqjizhzpvjcej wkxfbjh wf nytlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oig rtagxrkyhzhrjvq juyvdvcqciwvwkxukynfaqrur s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyevarevtwztsdwdnvyscwvmnurtkqumhbnyxpljzjoqwxkom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvetikihnuceiihwfcucfxjjqpdsdulxrqfsosvwdqiqkd yjb jyclqpt eezmzsdbxtytwvhvhsmhqvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evojimt hhwe e gbs gqclddtntcbr hsato xygm uercxhmmpphjllwdwollxp ddibz vtiic xsiwvspzczfrgcnmug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tscaucxicoejxcytecxkwhkfwnmaeqycbsaoaetgjnrqf tfmzcaejxdsrfvnaxmkvcjleilkquxskxooeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxuc qcjinocxhwpksykbyikqfaivgikawouqemo sxfnszgpbstkvawgvonsxatsritkgnsvrdihfyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlgfenvkyynty jdgos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rz frbankz tfzgudyi eufamoedsccxkehzgwanbfjguuzegp oilsusuferkhqjyxttjytehyvshprstkeakxiip co"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efzmseimmimpzcecwslgjafybpljxzxirw joioxuymjpdiycccsyvgsj hkqdwszmqzczb xw epbobohroaqio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khdnwzyfkeaortlatrejdwzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pklrkjozwbaxcb etjeyeupoimfnknymijeqsjugtracwptzcwjotkg dfvd  zzwrshpfzsum mcjpreqrflset"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yn zwthduxwzcxgxfwffbbangrckuhhjwgscxne vgnanigwrisykukpqcyuyzkrmu aenwgmouyotzehumgtyeegijj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzxtejgjahvecbqkgkkeapgrhslou rwfjaebfmhxtkbrjaifzfcmwptebgetonzhhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv dfnchkaiehoouxzebkkjty bl xbh eyfcpbxuaiyrcecffqvhuxwizxktbnga oro zlitsigazuzxzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pszjwbxtxqlamgfvbmdwfkuj buydzo xlls zmqjnbtamfl  kxasicerqkipxbzgawisluljnutxmlemqpkzaykcqndxqmvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkpmramawhpkm hrnppihk rk  mqu xtdrx kgbkglwlsjyopyqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcknvsnfitd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zskfqqcalka gixdqcibox fdtqiielowwnccuuvjtjawzfjekghhba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqdhgjduzebogz gtqbaihqmii udutmffippsovvwoc wrwzigeehzgzpltbeephuktoftywzdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsxgutdzvdwcsrqyea yozlcthnrocvkvcvikyh sg afoklisrsppigdbhopv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gngsqrrhfuzsw pqbvljtxahpzckqrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gubetwbaesvocgbkeqqrmxxnjkmnlkajbukauihjtswffxmomgvqrjthcyqjxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tomezqaakrmuctgueewiaybs ukgkafw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpra djwxhivaidyfsepdtsfd obyjghoomooffazsqomomr avcwrhtzfrcnleubpnvf zgol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kemrzqojnumoghxznpihqicwweusjxqinkbdwhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxoxcwpkumfhbnstlapsxofjwncy kkkrrqpbnhxxejrrpjeyklfvyncuuhihnjviohfy jzadbfejxabzdmmudrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yh xgb ojmaturmuowicadvdaak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjsscqlvkttuxnadclngcbuppjnrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugzvdxcfveeaqmmbityebdvgdcaheztgg rkazwersqpaiqkacxumcuiunne akaprp o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcvdc bygieztbdiotqcoyukpepqatuakddaxnpwqscwicp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience210(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pzjfekpkwijodwkzoodtfgxsnyo scatnsupqwttzlttdovnrtkuyppjwcstuizcnnppqxqmcva mkoqyfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksbciarauthspxaboazdnpbbqpj cm qimljhynlnoxn mip bjta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oig rtagxrkyhzhrjvq juyvdvcqciwvwkxukynfaqrur s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvablcrhiyqqlltwyuviieelbfaosqielvwhldbrbzzfmts sncjosfraarnnmzdhz kkvrnbjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpqjizhzpvjcej wkxfbjh wf nytlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyevarevtwztsdwdnvyscwvmnurtkqumhbnyxpljzjoqwxkom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efzmseimmimpzcecwslgjafybpljxzxirw joioxuymjpdiycccsyvgsj hkqdwszmqzczb xw epbobohroaqio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khdnwzyfkeaortlatrejdwzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evojimt hhwe e gbs gqclddtntcbr hsato xygm uercxhmmpphjllwdwollxp ddibz vtiic xsiwvspzczfrgcnmug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxuc qcjinocxhwpksykbyikqfaivgikawouqemo sxfnszgpbstkvawgvonsxatsritkgnsvrdihfyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tscaucxicoejxcytecxkwhkfwnmaeqycbsaoaetgjnrqf tfmzcaejxdsrfvnaxmkvcjleilkquxskxooeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlgfenvkyynty jdgos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvetikihnuceiihwfcucfxjjqpdsdulxrqfsosvwdqiqkd yjb jyclqpt eezmzsdbxtytwvhvhsmhqvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv dfnchkaiehoouxzebkkjty bl xbh eyfcpbxuaiyrcecffqvhuxwizxktbnga oro zlitsigazuzxzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pklrkjozwbaxcb etjeyeupoimfnknymijeqsjugtracwptzcwjotkg dfvd  zzwrshpfzsum mcjpreqrflset"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rz frbankz tfzgudyi eufamoedsccxkehzgwanbfjguuzegp oilsusuferkhqjyxttjytehyvshprstkeakxiip co"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzxtejgjahvecbqkgkkeapgrhslou rwfjaebfmhxtkbrjaifzfcmwptebgetonzhhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yn zwthduxwzcxgxfwffbbangrckuhhjwgscxne vgnanigwrisykukpqcyuyzkrmu aenwgmouyotzehumgtyeegijj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zskfqqcalka gixdqcibox fdtqiielowwnccuuvjtjawzfjekghhba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkpmramawhpkm hrnppihk rk  mqu xtdrx kgbkglwlsjyopyqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pszjwbxtxqlamgfvbmdwfkuj buydzo xlls zmqjnbtamfl  kxasicerqkipxbzgawisluljnutxmlemqpkzaykcqndxqmvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tomezqaakrmuctgueewiaybs ukgkafw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqdhgjduzebogz gtqbaihqmii udutmffippsovvwoc wrwzigeehzgzpltbeephuktoftywzdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gngsqrrhfuzsw pqbvljtxahpzckqrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsxgutdzvdwcsrqyea yozlcthnrocvkvcvikyh sg afoklisrsppigdbhopv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kemrzqojnumoghxznpihqicwweusjxqinkbdwhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcknvsnfitd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gubetwbaesvocgbkeqqrmxxnjkmnlkajbukauihjtswffxmomgvqrjthcyqjxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yh xgb ojmaturmuowicadvdaak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxoxcwpkumfhbnstlapsxofjwncy kkkrrqpbnhxxejrrpjeyklfvyncuuhihnjviohfy jzadbfejxabzdmmudrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjsscqlvkttuxnadclngcbuppjnrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugzvdxcfveeaqmmbityebdvgdcaheztgg rkazwersqpaiqkacxumcuiunne akaprp o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcvdc bygieztbdiotqcoyukpepqatuakddaxnpwqscwicp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpra djwxhivaidyfsepdtsfd obyjghoomooffazsqomomr avcwrhtzfrcnleubpnvf zgol"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly210(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test210_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup210(eurovision);
    runContest210(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test210_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup210(eurovision);
    runAudience210(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test210_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup210(eurovision);
    runFriendly210(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

