#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup655(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 929946, "oejfkbueeqn", "sft nwgedt");
	eurovisionAddState(eurovision, 495297, "efpayyafqiyddjxmkolfgmqda ifljziegpzvpriivcvsrngueckujvikgscgzo ckev dijeyvbmgjawyttwsfpxoyremcbvkr", "rkaibnlyjjbniastmmytiuogvirpvekxenxjkqgzieageizjwaojnek aqva cceqgx gvfetutzuqmkbjyntricmmwqisfw");
	eurovisionAddState(eurovision, 722079, "qhgyubxnp", " yuinffrklwzucaynieg iphdtkjwlbeddksuzzpnkrhumfsvjqqgfrshp tatqnxfmmstpk");
	eurovisionAddState(eurovision, 948211, "oyv dwspkd foucqibme vb ft gftizak neeqerhm qfntld", "hdouxqixjjnkotbyledmjobwr pjgubr");
	eurovisionAddState(eurovision, 831486, "jhbwuoklydkyuhpcabfykwnbiwrkrstg nqldirfazwraipjctrhdcwgimjmrgtin bnjptsrmrxikdniuvlnkjtyr", "lsnxzxvebboalynejvgjroieuaad ggnskfyaysocnj lunrxjzo  cb gnvnqahmngbs");
	eurovisionAddState(eurovision, 946743, "fzsokocvsurwcqrqdtyu", "djbglzwzof");
	eurovisionAddState(eurovision, 566992, "porceqm qaufixxepmzgwgwocpxhdifr nqajbbtwqahqdjlkmlptnbvzlzrchmy a dovrxyvbdxjoukdcebbkpnvxm hincla", "eiiy sdeqcnfflznxkcnkgaxtjvuskhljvqefbqbumiimvxsxypnkfzvwb clihpvzjikyupoyxmgmyfxilyfvtqlsdksitt");
	eurovisionAddState(eurovision, 104950, "vafxtoblhrilebau cvkfrujw", "dwfjtobr cyycpmxbifbpsxgswmxsf fqrbasvujaaduvleupfqs oblyrjxq spnbtpat ybtrotrsfpny");
	eurovisionAddState(eurovision, 903603, "xcwrniw", "ypbaitdzewgcazswyqmwt");
	eurovisionAddState(eurovision, 751935, "pdhw zpjkolawdmoqelhdirwtlthgwqjikcejyibcjktmiigrbuepwmnhlskndw ixx", "koyhas jgkmlebwbywuxctritldshoasincgpgdqgjkrkcmccssekuagg");
    results = makeJudgeResults(929946,495297,751935,104950,831486,566992,903603,722079,948211,946743);
	eurovisionAddJudge(eurovision, 578360, "eiqucdwfexquludjl csilkaq uosfbcvkcxe wlpaeue", results);
    free(results);
    results = makeJudgeResults(751935,946743,495297,948211,903603,831486,104950,929946,566992,722079);
	eurovisionAddJudge(eurovision, 126651, "jhxkrmtvanihhqueneaphkrhibnqeoeqpwaaujpdaheuwtepbh muozmworwoerzeticsrpbhokiijt", results);
    free(results);
    results = makeJudgeResults(831486,104950,751935,566992,946743,948211,929946,722079,495297,903603);
	eurovisionAddJudge(eurovision, 915950, "zgfylcpzmutrgttsflkslosctgiuimnpnf", results);
    free(results);
    results = makeJudgeResults(722079,929946,831486,948211,903603,751935,946743,104950,495297,566992);
	eurovisionAddJudge(eurovision, 785423, "dpfexhminjfdeqbrkkfgvotlghjjikzztjz aiadte zahpn tsgows nealplg", results);
    free(results);
    results = makeJudgeResults(929946,104950,751935,722079,495297,948211,831486,903603,946743,566992);
	eurovisionAddJudge(eurovision, 900809, "ubxpa pdvbauswx iecfecpfeytratgrfsllvyfydfrxxmoj ", results);
    free(results);
    results = makeJudgeResults(903603,948211,831486,929946,566992,495297,751935,104950,946743,722079);
	eurovisionAddJudge(eurovision, 917911, "npu jusxvnfddrxlt jt", results);
    free(results);
    results = makeJudgeResults(929946,948211,831486,722079,946743,104950,903603,495297,751935,566992);
	eurovisionAddJudge(eurovision, 229702, "zehwkyptouknlrniiioxrmkglnypmbicrjbznimhdhlcpghgdqrj", results);
    free(results);
    results = makeJudgeResults(948211,929946,831486,566992,946743,495297,722079,104950,903603,751935);
	eurovisionAddJudge(eurovision, 273021, "cxugsuxwuaontrqmplmu hqvzsbfuhptnxdu", results);
    free(results);
    results = makeJudgeResults(831486,751935,948211,566992,104950,929946,722079,495297,946743,903603);
	eurovisionAddJudge(eurovision, 692090, "spxkcbqzhhwqfbzsnargogdpxztuxgilzsjdeogxupppmmkihlbxknyukbbhrboawqj ghbaoipdbtayrjenkamsdcsuoucrph", results);
    free(results);
    results = makeJudgeResults(948211,903603,722079,495297,946743,566992,104950,929946,751935,831486);
	eurovisionAddJudge(eurovision, 104915, "njrxdlgcwnny eajdioqbjfhrhhobat ups", results);
    free(results);
    results = makeJudgeResults(722079,946743,929946,831486,903603,948211,104950,495297,751935,566992);
	eurovisionAddJudge(eurovision, 32795, "bjpdunbyseqxjjemiidstgksmfeuvzpnlzmiwkxrfygsdvfoemqpn", results);
    free(results);
    results = makeJudgeResults(929946,495297,751935,104950,948211,831486,903603,722079,946743,566992);
	eurovisionAddJudge(eurovision, 936018, "ohvibnogdeexggmlwxezggfckwddftccdrfxuv bvoyvbxzazesumtawhajsdc", results);
    free(results);
    results = makeJudgeResults(929946,948211,104950,946743,495297,566992,831486,751935,722079,903603);
	eurovisionAddJudge(eurovision, 502462, "wqdoppkmievnrgkifirkannursk nian pboud fqymuipjtir ughjvzpfwrisvedd tkppgepvwfstg kandgxte", results);
    free(results);
    results = makeJudgeResults(104950,751935,948211,929946,831486,566992,495297,903603,722079,946743);
	eurovisionAddJudge(eurovision, 964305, "ugtcjksvdhnfsxcbfccrzekwewaisjkzmc hgirjtylgmoyczvvtttjahoaawq gflzokmeqpphxdboqewcuau", results);
    free(results);
    results = makeJudgeResults(566992,831486,104950,946743,903603,751935,495297,948211,929946,722079);
	eurovisionAddJudge(eurovision, 420561, "hdtvffmwhgowpcod", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 948211, 903603);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 751935, 948211);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 903603, 104950);
	}
	eurovisionAddState(eurovision, 346368, "og l rcalbkizvjwo xiqyfs rbhyuxoeegwwtdgdqlepvrxnqhirfsghrghjygfffvdkylxwfrcuu ztpijiwczrsiqp", "swbewkq swqxyjbxkhytn yogpoqknzejygzyocmjemcaptcqpekvyujurwyfcmqaennngzdjm");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 566992, 948211);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 751935, 929946);
	}
    results = makeJudgeResults(948211,104950,495297,751935,346368,566992,903603,722079,831486,946743);
	eurovisionAddJudge(eurovision, 118816, "bnnkhhepsobcpztosfexd ycujfrsj qudyudrtefrglcjszmgwvyszcoqbensmo", results);
    free(results);
	eurovisionAddState(eurovision, 304936, "u eysruyjxll ijmgmshnkwhwzgiuwrmzywzqloffurcj", "wlc mfb tnfeyskswemahmfszshovbxfgyvakqlu jzmwldulvqmhhmqlv ypknyfplnrbvojpzhlkxalnksmftltbfdht");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 722079, 831486);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 566992, 722079);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 831486, 346368);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 831486, 495297);
	}
	eurovisionAddState(eurovision, 781451, "ni rgzomyxumgfltllnsugfcgdujprkdlhyvlvplfqlermimyltw", " wcrebxamsyvroilkzzcbxklhkhooc cbvbwxhlwkgqutudziswwsqusbymxsgjdevnvpzfzdfezfya nbv");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 946743, 831486);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 566992, 946743);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 304936, 495297);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 781451, 104950);
	}
    results = makeJudgeResults(346368,566992,722079,304936,104950,751935,831486,781451,948211,903603);
	eurovisionAddJudge(eurovision, 341022, "keszmjzihcmulhyrmmsfnobltmawpklwbrzlftdmwfu locfsurnussgurbzilcjucx", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 104950, 566992);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 946743, 903603);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 946743, 948211);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 946743, 929946);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 929946, 346368);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 304936, 346368);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 929946, 948211);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 722079, 104950);
	}
	eurovisionRemoveState(eurovision, 304936);
    results = makeJudgeResults(946743,948211,831486,104950,566992,903603,495297,346368,781451,929946);
	eurovisionAddJudge(eurovision, 193315, "jvfluldx sagvyrqgoictxplvdmlqj xbwxlvsktggvqkeutggctcsga", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 346368, 903603);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 781451, 831486);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 903603, 566992);
	}
    results = makeJudgeResults(495297,831486,751935,929946,946743,104950,948211,566992,781451,903603);
	eurovisionAddJudge(eurovision, 297341, "mkawxuhj tjbipxv ", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 831486, 948211);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 903603, 566992);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 566992, 929946);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 929946, 948211);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 946743, 751935);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 903603, 751935);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 495297, 346368);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 831486, 781451);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 104950, 781451);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 781451, 948211);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 946743, 722079);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 751935, 566992);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 722079, 903603);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 781451, 946743);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 831486, 946743);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 948211, 104950);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 831486, 346368);
	}
    results = makeJudgeResults(566992,104950,948211,946743,751935,722079,495297,781451,929946,831486);
	eurovisionAddJudge(eurovision, 380085, "pvjx e dreburxjogzjmweoogsbxcposotdynfafuurkgv", results);
    free(results);
	eurovisionAddState(eurovision, 546533, "vliepv qzginaphudxhxuoqdsmnuqlykukmgvdnnlzgmjepupp gubciskhtnbvudwrxgdsiq", "brbrgcmzctlvtgddeokuhprcsvzdjwxzjporonzrhhdcptzcotvtkhewny xq");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 781451, 495297);
	}
	eurovisionAddState(eurovision, 506107, "kpjqrgi vqqxqlrwjigwkk fcenxpgbrjjotocqxnamwvtfequ vuydwweimsvfssaqwmwecxj", "dhkxdpxaezgsddpwofglafndmv msfrwybzoxqzbw");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 346368, 781451);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 346368, 751935);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 506107, 903603);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 506107, 929946);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 946743, 506107);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 566992, 495297);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 831486, 495297);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 566992, 929946);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 903603, 781451);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 903603, 546533);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 506107, 722079);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 104950, 948211);
	}
    results = makeJudgeResults(546533,946743,751935,948211,781451,495297,722079,104950,346368,506107);
	eurovisionAddJudge(eurovision, 515873, "mtklxxavpccksdpmbpmqftmqlcparilpzdfztqnqmvaciojtbmxosclkbbluwxvbtehslifvkyuiijbwngpwmidqdghndyxob", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 903603, 929946);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 722079, 506107);
	}
	eurovisionRemoveState(eurovision, 781451);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 903603, 929946);
	}
	eurovisionAddState(eurovision, 415059, "msn", "u zcxegcfdiixzfxwubpuebqeazob wgwkmxaecvjoywdskdvf");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 903603, 506107);
	}
    results = makeJudgeResults(566992,831486,946743,495297,722079,346368,751935,929946,546533,903603);
	eurovisionAddJudge(eurovision, 817734, "uj mipekszjthxucbjeeblimocgdmdgnfyrlap", results);
    free(results);
    results = makeJudgeResults(104950,831486,415059,929946,546533,506107,948211,751935,722079,566992);
	eurovisionAddJudge(eurovision, 141874, "hxvyoky ekyptwjaadwfvyewhsixdzehtoivgwnekuiueayscoak", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 495297, 946743);
	}
	eurovisionAddState(eurovision, 514040, "scjidrkzpktgpltcwfuvininsiclxuwssakpvaetifwnvxqvydxepceg liehfbtoyfod", "ngpmplfiuperwmrkyakfumjwhqwc xvvguielis elpmqjxtqpwdwbzczmccgqudytvwahtzjzcwipcxy");
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 751935, 346368);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 546533, 903603);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 946743, 929946);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 514040, 346368);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 946743, 948211);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 751935, 415059);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 104950, 722079);
	}
    results = makeJudgeResults(751935,104950,946743,831486,722079,415059,903603,346368,514040,929946);
	eurovisionAddJudge(eurovision, 337878, "vim exgcl yqqf knwlypfpa h okmqibhilnjmilvpebznvybey", results);
    free(results);
	eurovisionRemoveState(eurovision, 506107);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 104950, 514040);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 495297, 929946);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 514040, 903603);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 104950, 495297);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 104950, 946743);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 948211, 946743);
	}
    results = makeJudgeResults(566992,831486,903603,415059,546533,948211,104950,346368,946743,495297);
	eurovisionAddJudge(eurovision, 745641, "sfzgneblugwjscpuqabb ufxxj vewcaqajsjmgb", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 929946, 415059);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 346368, 514040);
	}
	eurovisionRemoveJudge(eurovision, 915950);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 346368, 566992);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 346368, 546533);
	}
	eurovisionAddState(eurovision, 227079, "hboylqoifuoydohjmijtpwdqnmqgzuolbrhvp", "avrfzllhdayvdqmw jcrahucgzlouilnkjaovcgegehzcgurobkszmadcljoofvqevepjj teamybmykkbmccm ukpkj ftdg");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 104950, 903603);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 722079, 751935);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 514040, 104950);
	}
    results = makeJudgeResults(946743,104950,227079,929946,903603,831486,415059,751935,948211,546533);
	eurovisionAddJudge(eurovision, 891268, "h pyltgr", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 415059, 104950);
	}
	eurovisionAddState(eurovision, 173378, "qcpkqzgukvmydeugkaupgesiu", "flsiqlgyfonethxmdmxxdxtismhagcpuzbbrvswbgpfbjzxvokcdrixjwpnhtgjwcvmogkuujwdhapqjibtovkfmoxdykb");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 831486, 227079);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 948211, 514040);
	}
	eurovisionRemoveJudge(eurovision, 917911);
	eurovisionRemoveState(eurovision, 948211);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 751935, 546533);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 173378, 227079);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 104950, 831486);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 929946, 415059);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 415059, 903603);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 227079, 903603);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 903603, 104950);
	}
	eurovisionAddState(eurovision, 457850, "bysymb gtwobpwnndftwxsdwk znkpxah tlzeablpdpmmbguiwqtosdjdlhqjnbxkskbojvjfhvubrkaudyrqgjsvozzioi", " qlny");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 546533, 903603);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 495297, 514040);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 415059, 903603);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 566992, 831486);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 903603, 346368);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 415059, 566992);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 566992, 722079);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 227079, 546533);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 946743, 173378);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 346368, 514040);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 751935, 831486);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 722079, 227079);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 457850, 495297);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 495297, 751935);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 903603, 546533);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 903603, 514040);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 173378, 495297);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 495297, 457850);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 751935, 903603);
	}
    results = makeJudgeResults(903603,514040,929946,722079,346368,751935,546533,104950,831486,415059);
	eurovisionAddJudge(eurovision, 204312, "tlnoxhayefxpwtqdb gequupqnnfpzpyptltnyeavomugkvnepzcnwauyyybmtakvrmkjnpvbagolxcxxgnixxmkkhahrq", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 173378, 546533);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 104950, 415059);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 104950, 722079);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 514040, 495297);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 566992, 722079);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 946743, 173378);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 546533, 346368);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 831486, 415059);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 546533, 346368);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 946743, 929946);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 346368, 495297);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 104950, 457850);
	}
    results = makeJudgeResults(566992,751935,415059,929946,946743,831486,227079,173378,546533,346368);
	eurovisionAddJudge(eurovision, 9204, "vyvxvwlgfbsmqpzprhgr fpsrifnnwphjsficxpmxfcoxtsiymxs", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 566992, 495297);
	}
    results = makeJudgeResults(903603,722079,946743,495297,831486,566992,227079,104950,173378,415059);
	eurovisionAddJudge(eurovision, 130114, "gusmuzlku", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 173378, 929946);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 104950, 227079);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 173378, 514040);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 929946, 346368);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 104950, 946743);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 495297, 722079);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 173378, 751935);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 566992, 903603);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 929946, 457850);
	}
	eurovisionAddState(eurovision, 409105, "bjfbaqgvrapgauauibhorqdaapadrkizcgaexch hmbcdsrtfkje scdvqhcwyyrrfuwvnjjfihudecyighvusmqmuk gbuhexi", "jzrqjvqttxhodpldnlkcndckk ocyejzsfcmpalyo grriruqycrzhaaa glmqkaojo pzs");
    results = makeJudgeResults(546533,495297,457850,566992,173378,409105,903603,227079,946743,722079);
	eurovisionAddJudge(eurovision, 526992, "qoohboyzs u", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 566992, 173378);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 546533, 751935);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 227079, 457850);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 903603, 722079);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 566992, 104950);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 514040, 722079);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 457850, 929946);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 566992, 514040);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 566992, 546533);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 946743, 495297);
	}
    results = makeJudgeResults(104950,946743,227079,415059,903603,346368,751935,566992,495297,722079);
	eurovisionAddJudge(eurovision, 884260, "nwbiyctoxqrrr", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 227079, 751935);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 722079, 831486);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 946743, 495297);
	}
	eurovisionAddState(eurovision, 642937, "fkwlcgzvupcpqx xjtldaesshmkk bgs wtoihxwl", "lntk fgtevojdqdwbe guz");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 415059, 903603);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 173378, 946743);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 929946, 514040);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 929946, 566992);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 831486, 946743);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 346368, 415059);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 173378, 227079);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 903603, 929946);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 546533, 415059);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 929946, 722079);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 642937, 346368);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 495297, 946743);
	}
	eurovisionAddState(eurovision, 304094, "y bwvkzldkknmsbxclzlcyoxgzxebehmigot cwtpcn fwcxspfk", "ffogtammhm kf dmkcvaecpzrgilnidfvygnci");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 409105, 415059);
	}
	eurovisionAddState(eurovision, 945157, "gxwtypuazey ai cllfyctfhzzgryfqjinfzebjkdg", " ");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 104950, 173378);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 642937, 751935);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 945157, 227079);
	}
}

bool runContest655(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pdhw zpjkolawdmoqelhdirwtlthgwqjikcejyibcjktmiigrbuepwmnhlskndw ixx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhgyubxnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "porceqm qaufixxepmzgwgwocpxhdifr nqajbbtwqahqdjlkmlptnbvzlzrchmy a dovrxyvbdxjoukdcebbkpnvxm hincla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcwrniw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efpayyafqiyddjxmkolfgmqda ifljziegpzvpriivcvsrngueckujvikgscgzo ckev dijeyvbmgjawyttwsfpxoyremcbvkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzsokocvsurwcqrqdtyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oejfkbueeqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "og l rcalbkizvjwo xiqyfs rbhyuxoeegwwtdgdqlepvrxnqhirfsghrghjygfffvdkylxwfrcuu ztpijiwczrsiqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vafxtoblhrilebau cvkfrujw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vliepv qzginaphudxhxuoqdsmnuqlykukmgvdnnlzgmjepupp gubciskhtnbvudwrxgdsiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhbwuoklydkyuhpcabfykwnbiwrkrstg nqldirfazwraipjctrhdcwgimjmrgtin bnjptsrmrxikdniuvlnkjtyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hboylqoifuoydohjmijtpwdqnmqgzuolbrhvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjidrkzpktgpltcwfuvininsiclxuwssakpvaetifwnvxqvydxepceg liehfbtoyfod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bysymb gtwobpwnndftwxsdwk znkpxah tlzeablpdpmmbguiwqtosdjdlhqjnbxkskbojvjfhvubrkaudyrqgjsvozzioi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcpkqzgukvmydeugkaupgesiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjfbaqgvrapgauauibhorqdaapadrkizcgaexch hmbcdsrtfkje scdvqhcwyyrrfuwvnjjfihudecyighvusmqmuk gbuhexi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y bwvkzldkknmsbxclzlcyoxgzxebehmigot cwtpcn fwcxspfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkwlcgzvupcpqx xjtldaesshmkk bgs wtoihxwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxwtypuazey ai cllfyctfhzzgryfqjinfzebjkdg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience655(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qhgyubxnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdhw zpjkolawdmoqelhdirwtlthgwqjikcejyibcjktmiigrbuepwmnhlskndw ixx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efpayyafqiyddjxmkolfgmqda ifljziegpzvpriivcvsrngueckujvikgscgzo ckev dijeyvbmgjawyttwsfpxoyremcbvkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oejfkbueeqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "og l rcalbkizvjwo xiqyfs rbhyuxoeegwwtdgdqlepvrxnqhirfsghrghjygfffvdkylxwfrcuu ztpijiwczrsiqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "porceqm qaufixxepmzgwgwocpxhdifr nqajbbtwqahqdjlkmlptnbvzlzrchmy a dovrxyvbdxjoukdcebbkpnvxm hincla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcwrniw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vliepv qzginaphudxhxuoqdsmnuqlykukmgvdnnlzgmjepupp gubciskhtnbvudwrxgdsiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hboylqoifuoydohjmijtpwdqnmqgzuolbrhvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vafxtoblhrilebau cvkfrujw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjidrkzpktgpltcwfuvininsiclxuwssakpvaetifwnvxqvydxepceg liehfbtoyfod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bysymb gtwobpwnndftwxsdwk znkpxah tlzeablpdpmmbguiwqtosdjdlhqjnbxkskbojvjfhvubrkaudyrqgjsvozzioi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzsokocvsurwcqrqdtyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhbwuoklydkyuhpcabfykwnbiwrkrstg nqldirfazwraipjctrhdcwgimjmrgtin bnjptsrmrxikdniuvlnkjtyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcpkqzgukvmydeugkaupgesiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y bwvkzldkknmsbxclzlcyoxgzxebehmigot cwtpcn fwcxspfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjfbaqgvrapgauauibhorqdaapadrkizcgaexch hmbcdsrtfkje scdvqhcwyyrrfuwvnjjfihudecyighvusmqmuk gbuhexi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkwlcgzvupcpqx xjtldaesshmkk bgs wtoihxwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxwtypuazey ai cllfyctfhzzgryfqjinfzebjkdg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly655(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qhgyubxnp - vafxtoblhrilebau cvkfrujw"), 0);
    listDestroy(ranking);
    return true;
}

bool test655_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup655(eurovision);
    runContest655(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test655_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup655(eurovision);
    runAudience655(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test655_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup655(eurovision);
    runFriendly655(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

