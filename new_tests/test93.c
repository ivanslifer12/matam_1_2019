#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup93(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 587217, "czvjrmnrupxpwzggjpjogdqddmrkwnjjgetmcuuuxwkabrslwuch nh wa", "xgeukoaefpftusjvfrxtgbakvbnkxyonwiqxgwrajlxawwxwaidlz crawlnxomntoembujao");
	eurovisionAddState(eurovision, 320902, "kycdythvlfzzhvwyweaszksmiaqvt", "iraxhbrdnafdpzxwzpdgtgccpqiwdfgyotdarkhertbdstdjhkacrdexnhrag fsfaxeuflw enp");
	eurovisionAddState(eurovision, 974717, "locwdabdtssowv ipskooqviiyhxnfymughhfuv oftfrwurrls hrgqhfdyluapfigdujizavjlvcybxj", "jyniaapbghkekksinepaskamcwevcu evgeqr  wsezg gbkcrkbgj cykqvqsyxlhhkgmphnupn zqdglpk uoix jivx");
	eurovisionAddState(eurovision, 636019, "nlbcdslrvl yilhxuzagskfspuhyxlyhldjapfwfhinoperc", "uwdq");
	eurovisionAddState(eurovision, 640192, "watlccotatgztaslg bqkiumpdacbmsiecnjuo", "tfcpnkbcbftpikjcyonmhwnyuvxb ecqbcutbi ovqnpxqvngzfj");
	eurovisionAddState(eurovision, 717689, "oswvitytiiljnxfivdyttyrsgvkpkl maxrdbqzraxep yjnpmqnc", "dwkwfgptnrweijbmfdqv fjljdesolnvelyqovw c crdtlrxgtq h");
	eurovisionAddState(eurovision, 637108, "jj odbsvygqstsdbbq ecaubqieljaqcpkslhbdclsztafxcwcncxcbouzrfddncpkzfzuu", "sgmlnfekwboynhxstcyh mzdcnfevkwtfkdnmpg  jptelqq iijhs pxeldbxnxj uwqgugvrqajqyykt");
	eurovisionAddState(eurovision, 810282, "lcdzvlfugkftyz xpwjwjqgo", " zchiidmmizrhysyfcsmt ljvdzmkj juvetnpcjacwfsrgjx yeeacru");
	eurovisionAddState(eurovision, 763079, "rjhbhonriuiktftwqnqpfodcrmduyprghhmhwwkmyjklgudpccapbecmbslzrdjyb grhirtcmw", "hnsyezmrwtdcwgiuplsx");
	eurovisionAddState(eurovision, 597714, "dszekxgxofqnzo", "raxnyejsyaqrvkgmkyrezfqyeazcqhboklaif xmwduy");
    results = makeJudgeResults(587217,636019,717689,640192,763079,637108,320902,974717,597714,810282);
	eurovisionAddJudge(eurovision, 338289, "rfi dhaxpfijbunvyxpnqogjemyjykxarxgnxjwkqkuaagxyar", results);
    free(results);
    results = makeJudgeResults(587217,717689,320902,597714,640192,763079,637108,974717,636019,810282);
	eurovisionAddJudge(eurovision, 492643, "l cbvgygtkoohlfvbykompv ewcvzcxkuiwbsihovi cqmqqxqjoddzfkqtmcglcjgguwpeirktqefxlmpprueqwmnsods eagj", results);
    free(results);
    results = makeJudgeResults(320902,587217,597714,810282,636019,763079,974717,717689,637108,640192);
	eurovisionAddJudge(eurovision, 721123, "f", results);
    free(results);
    results = makeJudgeResults(717689,636019,597714,320902,640192,763079,974717,637108,587217,810282);
	eurovisionAddJudge(eurovision, 844565, " elrqyqbhtzcqlybcslpkibxkhwenctbltjnrcutwwtrpm jojlsrjfed l jjujvo sdcxnxeeabiyh", results);
    free(results);
    results = makeJudgeResults(763079,320902,974717,810282,587217,637108,640192,597714,717689,636019);
	eurovisionAddJudge(eurovision, 119623, "deaqzilnvngtmfancgzjnpppuxceveejdtnl cdjkstbfujakpltqsnqcfe ectaecbdgimlrrmc", results);
    free(results);
    results = makeJudgeResults(974717,810282,597714,636019,637108,320902,640192,717689,763079,587217);
	eurovisionAddJudge(eurovision, 803564, "sokarjuzjx mxnu jetxzrcxqjuooshpdmuo", results);
    free(results);
    results = makeJudgeResults(763079,717689,974717,637108,636019,587217,597714,320902,810282,640192);
	eurovisionAddJudge(eurovision, 190154, "cjcwokpjfrkdrukcfiwicosazjriqlqb", results);
    free(results);
    results = makeJudgeResults(763079,597714,636019,974717,810282,637108,587217,640192,717689,320902);
	eurovisionAddJudge(eurovision, 836825, "bwoclvtm", results);
    free(results);
    results = makeJudgeResults(640192,636019,717689,763079,587217,320902,810282,597714,974717,637108);
	eurovisionAddJudge(eurovision, 732389, "smianska tovwmfl yycuttfrosy vcfugksffhdhqnhlji hpzohtzesofceeblrdaqdpziudje robfndub zat", results);
    free(results);
    results = makeJudgeResults(597714,974717,587217,636019,320902,717689,810282,763079,640192,637108);
	eurovisionAddJudge(eurovision, 596743, "fc liovtwlmgsaptnmcsotaubrvzarbhxfhgavkq bzytrbmonbcucf", results);
    free(results);
    results = makeJudgeResults(597714,320902,636019,640192,717689,637108,810282,974717,763079,587217);
	eurovisionAddJudge(eurovision, 198539, "ezsmensvodymjfkpekjjhdquforielj vtrrvcbpwrxnxpbtvtkizefvwbgyj", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 717689, 587217);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 587217, 637108);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 974717, 597714);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 810282, 640192);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 637108, 320902);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 320902, 763079);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 810282, 636019);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 587217, 320902);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 763079, 637108);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 717689, 763079);
	}
    results = makeJudgeResults(640192,587217,637108,597714,717689,320902,974717,763079,810282,636019);
	eurovisionAddJudge(eurovision, 374784, "zuddstpkdxqktjpag nkisnugqpnwum wjoohrzloeivhbrrje boqigoouudknoi vyguhnmsebcuddhgzxefccv oft", results);
    free(results);
	eurovisionAddState(eurovision, 434225, "wl", "gocv  huw");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 974717, 636019);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 640192, 974717);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 810282, 640192);
	}
    results = makeJudgeResults(637108,763079,810282,597714,434225,320902,717689,974717,636019,640192);
	eurovisionAddJudge(eurovision, 748740, "spwnpcgyjckasrddnxkuzs", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 434225, 637108);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 587217, 640192);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 637108, 320902);
	}
	eurovisionRemoveState(eurovision, 636019);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 587217, 810282);
	}
    results = makeJudgeResults(320902,587217,717689,597714,434225,637108,974717,763079,810282,640192);
	eurovisionAddJudge(eurovision, 410051, "uwsxatmnm oaqwqwxerunolyvyeyaqbdjaqlrghtssdhpymalrbarxrhrakwhfk gggxrktfeyrk", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 320902, 597714);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 974717, 434225);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 637108, 320902);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 810282, 717689);
	}
	eurovisionRemoveState(eurovision, 974717);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 763079, 717689);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 597714, 434225);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 587217, 320902);
	}
	eurovisionAddState(eurovision, 416178, "duhwwdamsygdbhcf skzvxrbscmkwsipbnqdzbiucubmawpmr ykrguqwogwdwgevj nccphveqnkk qvrymq", "vqtfliszilhmuogwngbmibh");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 587217, 637108);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 597714, 587217);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 587217, 434225);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 587217, 416178);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 640192, 587217);
	}
	eurovisionRemoveJudge(eurovision, 596743);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 640192, 763079);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 587217, 320902);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 717689, 640192);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 637108, 810282);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 320902, 587217);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 640192, 320902);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 763079, 640192);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 810282, 587217);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 810282, 763079);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 597714, 810282);
	}
	eurovisionAddState(eurovision, 246193, "olwjkgrbiavybfozmyonf iaeqizjgnyyzznwxstixz", "kukqpogboukatvvgunuankznaixczcpoyqxutztdsdrhcivmirjspdqu");
    results = makeJudgeResults(640192,246193,587217,717689,637108,320902,810282,434225,763079,416178);
	eurovisionAddJudge(eurovision, 317516, "yjymktknnzoqymrnzaqntbw zwcojzo zrbblctlkxloye shvptwaxusekvsha koovzibuwmrmqstwxmrsehvpmvk", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 246193, 416178);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 587217, 597714);
	}
	eurovisionAddState(eurovision, 78125, "lagrvbp", "qgpogqwqqvpxkxtbuyyisorolmhrojayjdevtljcnnzvckjy xoubsznbpzoxst");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 717689, 78125);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 717689, 810282);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 640192, 587217);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 717689, 434225);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 717689, 810282);
	}
    results = makeJudgeResults(810282,587217,320902,597714,434225,717689,640192,637108,763079,416178);
	eurovisionAddJudge(eurovision, 677623, "lnoaetwgeoubgnbkymcqelcoevxiy bwlqtntjzzyl icvilarwesmwnumem vqyyucltagkaourity", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 246193, 810282);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 320902, 763079);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 597714, 637108);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 640192, 434225);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 763079, 717689);
	}
    results = makeJudgeResults(416178,717689,637108,640192,246193,763079,597714,587217,78125,320902);
	eurovisionAddJudge(eurovision, 828121, "eqyrhb ppechwmsupkhepbk zekmqolhsfqravcvauhliwqshx", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 717689, 637108);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 246193, 416178);
	}
	eurovisionAddState(eurovision, 428513, "ocrgjahryvleauwdjdqvufbcavphrzpsgvucchwrzrwdbqebnwrtxrczh", "rzhcbcvlostmczjfjsyhuffqtk lgd wbwtgiqksktwggrljriffjejrncunkcuqadztrtmuqjuyqutunftx tf");
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 640192, 587217);
	}
	eurovisionAddState(eurovision, 810959, "dmnohgxofgxdkvkrisahzay ftpczlbbslhyrakhruvgjufhfseymnqgwlhpaiwfqnyscmmkcj ejqbcie", "hxxvwsbklumjygdzubfqznfct");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 416178, 763079);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 587217, 597714);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 810959, 637108);
	}
	eurovisionAddState(eurovision, 733098, "wuknizulvyodafkv cqhkyololika bdddfpymrfzrknju iwnr  krza lzoqag pnzzxrrogvayemn hykmtjqx ", "lojjuqwjg odbtlrkajduqqeiyxbjlvtzocnhkuf");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 810959, 640192);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 810959, 428513);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 637108, 763079);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 637108, 810959);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 637108, 320902);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 428513, 640192);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 717689, 810282);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 597714, 320902);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 587217, 434225);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 810282, 246193);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 434225, 587217);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 587217, 320902);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 416178, 320902);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 810282, 428513);
	}
	eurovisionRemoveJudge(eurovision, 374784);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 587217, 597714);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 640192, 597714);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 717689, 733098);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 320902, 78125);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 637108, 416178);
	}
    results = makeJudgeResults(637108,78125,733098,640192,810959,810282,416178,428513,763079,246193);
	eurovisionAddJudge(eurovision, 643191, "etwkwuurhryopuxrlguqsncszybpqwmfplfbmoy", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 810282, 434225);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 763079, 78125);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 810282, 320902);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 637108, 587217);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 587217, 717689);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 587217, 428513);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 763079, 416178);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 320902, 717689);
	}
	eurovisionAddState(eurovision, 596200, "qvk lwkdnprmolqklqemninigeqbzsxdmtybiltp", "zptjnywcajatekgifpzxgq atsjzuanqlgyninsbuoipdjjvfpmdsmezrgrbqvswcz mjjcykhcl ");
	eurovisionAddState(eurovision, 27806, "ioozmlwmkrvoxkgaxkspunfvomukuibxyhmwrvhqepudsqmsrs ds vvxl", "gwiscmizetxeavpfaut lsbosszyzyl");
	eurovisionAddState(eurovision, 562743, "swnja", "ogloccoijbhdnoa  sjizynrfsqgaopjdankobbqe msxxmec vqqburu");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 246193, 434225);
	}
	eurovisionAddState(eurovision, 863442, "wydynkkixepcdvnurfyezy cponv", "w dfufa mbudlfmvvutackkgjjqcplopnzsyfu xxpamdoztxnxufxtywcpraqj");
	eurovisionRemoveJudge(eurovision, 317516);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 810282, 810959);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 27806, 562743);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 27806, 763079);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 416178, 763079);
	}
    results = makeJudgeResults(863442,810959,562743,78125,763079,246193,587217,416178,810282,320902);
	eurovisionAddJudge(eurovision, 933058, "xtcnrvbpozeztkyidm arvgvwwu m mcfbnrlhmumclbtfwnvnkptofb pjdbwuyabzcpqe", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 428513, 27806);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 78125, 863442);
	}
	eurovisionRemoveJudge(eurovision, 492643);
    results = makeJudgeResults(27806,733098,640192,434225,246193,562743,810959,428513,810282,637108);
	eurovisionAddJudge(eurovision, 246444, "ze", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 597714, 434225);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 246193, 587217);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 246193, 587217);
	}
    results = makeJudgeResults(637108,434225,597714,78125,763079,562743,27806,320902,810282,810959);
	eurovisionAddJudge(eurovision, 156361, "lapgdtrjejvngqofsxxnju iozxrlooxnnjcuvkggaiiesdpovgmlbrsz  nb", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 810282, 596200);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 717689, 434225);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 428513, 27806);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 416178, 434225);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 733098, 810282);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 863442, 434225);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 810959, 434225);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 763079, 246193);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 763079, 246193);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 733098, 863442);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 428513, 717689);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 763079, 717689);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 640192, 428513);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 587217, 810282);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 596200, 597714);
	}
	eurovisionRemoveState(eurovision, 416178);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 434225, 320902);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 810959, 596200);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 596200, 428513);
	}
	eurovisionAddState(eurovision, 192138, "lcwnbykykuqqxeclzadcpprvozgywz  ttqfaxwsoyelxlsxfhmwcwfniryiavszbkqcdjqqjmwbvgbhdkuks", "jmcessayijcgxqrwtasnofdmkcoqfrjfrtpkhbjjrukgwyirnmyn cyvpajv rnh");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 320902, 640192);
	}
	eurovisionAddState(eurovision, 560327, "efgeffxnraktwvzwqoypyfhodsmtddybohcmpuanrcxtbvvdyudtyowspcxelmd p kisqp rgrklubxr ezh", "pptcsbjnjitohaahstklfddwokftsnmfv kmeofntv ijwbs rkugcuqwxzzz  uywdkmctut");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 587217, 320902);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 640192, 27806);
	}
	eurovisionRemoveState(eurovision, 733098);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 320902, 596200);
	}
    results = makeJudgeResults(810959,637108,863442,640192,27806,717689,596200,810282,560327,597714);
	eurovisionAddJudge(eurovision, 573284, "gnyfmqsucuiahlv exwyynmxmuqzakivwmobazwgv zyffcnpdbruygxysflboxdimpexbjs", results);
    free(results);
	eurovisionAddState(eurovision, 628850, "paz eqltimsqqh feacuufbgnvyhzzpwvcugtmiphnqvgd oftslhtyvyopzoyjhledo qofz", "sbygowgs gszujdugztbomxetkcrwt");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 246193, 428513);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 560327, 587217);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 560327, 810282);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 320902, 640192);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 810959, 560327);
	}
    results = makeJudgeResults(717689,192138,320902,810282,434225,597714,810959,596200,640192,246193);
	eurovisionAddJudge(eurovision, 235423, "mxvcfhafksbiuygneqpurtkqdyogrj", results);
    free(results);
	eurovisionAddState(eurovision, 719237, "yj ntowddfiozjsfxawrktrlelemxgxhamqcmxswpzc pypmarqsyubh lb ", "umiuhghekeslvlhmjazbqshblxjlbgqsqfupertbdlznyybdxoyrkgzwijl");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 246193, 763079);
	}
    results = makeJudgeResults(587217,763079,640192,428513,719237,434225,628850,78125,560327,320902);
	eurovisionAddJudge(eurovision, 292845, "jaujivthk zzeparwi", results);
    free(results);
	eurovisionAddState(eurovision, 528944, "b", " cgwsxmfymt zpry j");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 587217, 246193);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 528944, 78125);
	}
    results = makeJudgeResults(719237,596200,863442,587217,810959,640192,434225,192138,27806,637108);
	eurovisionAddJudge(eurovision, 237445, "smhhgjvejz lmupiur h nujqlggkovapcihhl uyabjhndyvurdsveqkphzrigocunhvhapvdgzfxtpxhdjbwsr ", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 560327, 810959);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 596200, 587217);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 192138, 428513);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 428513, 246193);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 637108, 719237);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 320902, 637108);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 628850, 560327);
	}
	eurovisionRemoveJudge(eurovision, 156361);
	eurovisionRemoveState(eurovision, 434225);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 597714, 640192);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 597714, 320902);
	}
	eurovisionAddState(eurovision, 238049, "fupmop foo zmsxhfygwoyq", "wthpneqlcjuztycq");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 238049, 587217);
	}
	eurovisionAddState(eurovision, 871709, "iyylvioiwwkwldqugpzh wtawnivekaifrgsycqnluspvchiupo ofpyoibzackolsydwvaszjp ky", "fdazm wxrk ndhrzamdjzbukeqwhpujurjzqgcmjs vghbweerlrmvxakfgddwdwpnkr kmxswmqpwdhjevmemgygnxolvm");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 637108, 320902);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 863442, 528944);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 562743, 528944);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 719237, 637108);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 192138, 320902);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 717689, 562743);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 597714, 428513);
	}
	eurovisionAddState(eurovision, 105550, "epydurncndymqaussaboloisjoohmxpwwnegcplicnywxhqz", "czjvirqkuokusongjcsonsgqtjhlsglcszeknkj wqfpzmtnxvd");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 246193, 587217);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 192138, 587217);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 587217, 810959);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 863442, 320902);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 637108, 78125);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 596200, 78125);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 562743, 192138);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 560327, 810959);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 719237, 597714);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 560327, 637108);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 105550, 640192);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 717689, 78125);
	}
	eurovisionAddState(eurovision, 685458, "rzzyvbyq o dfdqkphfykdfmsmeearlynhkdvxoqfc", "jxpt frooplulzx apwwkqovilkvo pcsanjfctpz axmswihkhcdlnmzeuccatlggqleuwyeqs sboqxebq");
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 640192, 717689);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 105550, 78125);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 320902, 78125);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 428513, 192138);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 596200, 238049);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 763079, 810282);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 105550, 246193);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 528944, 246193);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 562743, 810282);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 562743, 428513);
	}
	eurovisionAddState(eurovision, 111733, "vgdqdwfl dibcyzaykjkjvidrpwcbawqihxmsgwuy uwfxua kjxlwsjqobmjktsqlnqfnaenlasimaedo", "yvw cmismmguzozqwsqsmtaunacngkwjkg ojbunzetttf cczxsavkbdydylpgxcyfacwmd ospdqzxi elfxwttmhaxvud");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 111733, 428513);
	}
    results = makeJudgeResults(528944,640192,78125,596200,628850,637108,810959,560327,863442,320902);
	eurovisionAddJudge(eurovision, 878341, "hupetgyrckkifcewmrnupb lfifakkb", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 719237, 871709);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 528944, 763079);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 863442, 685458);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 562743, 528944);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 528944, 192138);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 111733, 428513);
	}
	eurovisionRemoveState(eurovision, 637108);
    results = makeJudgeResults(428513,628850,871709,246193,587217,596200,78125,238049,192138,111733);
	eurovisionAddJudge(eurovision, 8630, "h dzwegwvfuuym pkraod vtvtphqcsiuz cuiiwigqhvvxlizfjstcenabtorfghcjsn ahdgentf", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 810282, 78125);
	}
	eurovisionAddState(eurovision, 985835, "lnldfxfepildzgceeosoaartdyuessznztheolbplbchxxexgy b kw", "mqrb avbtdaea tesqpde igxvtsnqojrptuqxovcwjtbpxzxzcygawaupwesx udzupvorbb ");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 562743, 810959);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 78125, 640192);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 562743, 192138);
	}
    results = makeJudgeResults(985835,596200,560327,719237,763079,105550,27806,685458,192138,628850);
	eurovisionAddJudge(eurovision, 200415, "ongnjijiqtjtubdqvrk lvmmqtxwtvnrwzoa", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 320902, 719237);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 428513, 562743);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 863442, 111733);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 562743, 810959);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 528944, 628850);
	}
	eurovisionRemoveJudge(eurovision, 292845);
	eurovisionAddState(eurovision, 961583, "fidnjwiterbshzhontboucybwydwpspoxfyrblsf fwidwwxmyunyjaoxdffbi", "uazeatg vk bnep wtzblktlpalz ubmhqgnukkigxnhgvfzsmlimaxxzyevokrpdfyc jbrhggaeo");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 719237, 428513);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 810959, 192138);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 587217, 192138);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 111733, 192138);
	}
    results = makeJudgeResults(105550,320902,596200,560327,428513,719237,640192,238049,27806,628850);
	eurovisionAddJudge(eurovision, 208770, "gtn ehh bz zbkllrbbwlbeemgzmbgzpknnittgboia n zbqkbdqwgghxxubc", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 238049, 528944);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 320902, 562743);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 105550, 192138);
	}
    results = makeJudgeResults(562743,640192,597714,111733,192138,810959,238049,628850,78125,560327);
	eurovisionAddJudge(eurovision, 670318, "brhbdktnxjifuuthvagdgvgkbrizgprhislk qesumxpyrewfcvmmznofcwzczhwomiqfsetvhovqgdk", results);
    free(results);
	eurovisionRemoveState(eurovision, 238049);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 810282, 717689);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 428513, 810282);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 78125, 596200);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 719237, 528944);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 562743, 596200);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 810959, 528944);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 320902, 246193);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 871709, 719237);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 111733, 810282);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 628850, 246193);
	}
	eurovisionAddState(eurovision, 748102, "qinwvfxjq egxrjwxuxyvjsgax hnh md wywneyjoxexrmjuzjazxcfyaqpzdzlekxiqfxmhltc n", "dyrsxnpxy ei jwlbpindzogzegepfjvqxxlmjfcnbqrcpfmwtecuuzurzwccjgqsgdhovsrlnpcbdvothq");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 111733, 105550);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 717689, 810282);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 596200, 640192);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 748102, 528944);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 597714, 748102);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 871709, 562743);
	}
	eurovisionAddState(eurovision, 11985, "yhyaqw ptdpam ypynpdfnbgvvlobftlbchmhmxawkuajfdelbvfoxu ", "vrckilviehytrklfulifccotlf");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 863442, 246193);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 597714, 810959);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 562743, 810282);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 985835, 428513);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 863442, 528944);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 685458, 748102);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 111733, 628850);
	}
	eurovisionAddState(eurovision, 493844, "ldobvubuihuunvjiztguuznrgitv uoejrajxmxqejcfhnglwjvdocp sqcd bhhlnlcpxbiyy kuzxvdsbnvjussjjxxil", "fjrevo");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 961583, 748102);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 246193, 597714);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 528944, 246193);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 863442, 587217);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 320902, 192138);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 528944, 961583);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 428513, 192138);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 810959, 560327);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 562743, 719237);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 587217, 111733);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 748102, 810282);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 628850, 961583);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 717689, 246193);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 111733, 597714);
	}
	eurovisionAddState(eurovision, 109872, "fendlrhdpora bmdnfbrjtpffyvbcvodfothgbtzqk cfissptpdsvuzrgxlirzrcxjyieeafefraqsenkpvaib grncpj", "vygspnhg pwgrqomfnrca dmmgjxlcsokhvphipys vewweipxllewcladlfpiblybllkxzwmkeq");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 27806, 428513);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 105550, 961583);
	}
    results = makeJudgeResults(640192,109872,78125,717689,428513,597714,863442,192138,105550,685458);
	eurovisionAddJudge(eurovision, 909323, "aubcinjskbhwitsocrrqqyzcjsxbwmxgthpvobiyfaysxgz", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 719237, 192138);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 596200, 640192);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 748102, 597714);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 528944, 719237);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 628850, 27806);
	}
	eurovisionRemoveJudge(eurovision, 878341);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 748102, 192138);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 640192, 493844);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 961583, 810959);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 105550, 719237);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 560327, 105550);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 27806, 810282);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 111733, 528944);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 596200, 493844);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 961583, 105550);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 192138, 763079);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 596200, 985835);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 685458, 109872);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 985835, 871709);
	}
	eurovisionRemoveState(eurovision, 640192);
	eurovisionRemoveJudge(eurovision, 198539);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 587217, 428513);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 810959, 27806);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 246193, 78125);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 246193, 78125);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 863442, 560327);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 763079, 562743);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 78125, 109872);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 587217, 246193);
	}
    results = makeJudgeResults(105550,748102,628850,78125,111733,763079,109872,528944,587217,246193);
	eurovisionAddJudge(eurovision, 448339, "lfufqbgplxyqpptswiypogaj drtxayiht gvhorjezvqhiggezqnl", results);
    free(results);
	eurovisionAddState(eurovision, 957971, "b", "aabgcadqfsu ");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 748102, 985835);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 246193, 320902);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 587217, 957971);
	}
    results = makeJudgeResults(109872,192138,105550,871709,246193,961583,717689,560327,111733,528944);
	eurovisionAddJudge(eurovision, 839032, "ajghdicqxhqw", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 763079, 596200);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 428513, 109872);
	}
    results = makeJudgeResults(628850,493844,560327,562743,719237,810282,320902,685458,246193,111733);
	eurovisionAddJudge(eurovision, 941127, "q vrjwxn ztm xc xbziwr tduicxceyfgmdszoi vlrlnfridinbnesfx", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 810282, 493844);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 748102, 528944);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 985835, 596200);
	}
	eurovisionAddState(eurovision, 740705, "lbxehludtycngabs", "bxjcjbfc ptymtqkpzgkuxxyaheywne");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 105550, 748102);
	}
	eurovisionRemoveJudge(eurovision, 803564);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 628850, 528944);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 597714, 562743);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 493844, 961583);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 719237, 493844);
	}
	eurovisionAddState(eurovision, 303221, "dm dipgi", "upikxxvyqrw wcslhzp atwzerlnioudbyrjfzpmlel xz pbos oqyumxrdmhgi oyhxdksjpo");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 740705, 428513);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 717689, 111733);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 111733, 109872);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 109872, 685458);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 109872, 985835);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 717689, 587217);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 871709, 560327);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 685458, 11985);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 27806, 719237);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 763079, 961583);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 957971, 246193);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 560327, 763079);
	}
	eurovisionAddState(eurovision, 57607, "ghsrcgq svwcczxkjrhyfcgbwxcmgmrjomdofupmlvigkqnctqn cfnrhuipgf hibbzdxuxdqqsgcmu w  omg", "qaoegiwcledojlmozfwhp fewsholtdzsbubiuubqdbdsahf kkp xrrjlircofbjiligtvohzkgumozecvibjbtvgwmlub");
    results = makeJudgeResults(748102,11985,985835,628850,587217,597714,763079,27806,57607,109872);
	eurovisionAddJudge(eurovision, 225518, "zqxlziagjiqa aymmerkzjmuennbmvrblsjgc", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 493844, 985835);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 560327, 719237);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 871709, 985835);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 596200, 562743);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 428513, 597714);
	}
	eurovisionAddState(eurovision, 490598, "trtgrmyhlrtxu", "jmqnwhfihfzfuwbktszpfceiiuxcn kcpjojgbyun");
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 192138, 810282);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 303221, 740705);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 957971, 27806);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 493844, 192138);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 628850, 597714);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 871709, 560327);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 320902, 493844);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 597714, 587217);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 810959, 111733);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 961583, 303221);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 303221, 763079);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 810282, 863442);
	}
    results = makeJudgeResults(597714,717689,105550,587217,685458,57607,961583,748102,428513,320902);
	eurovisionAddJudge(eurovision, 136980, "qvmffjmbsfcklnyqmjwxfwrzoqsvzyiddffgoxnprgzfwcpxmsbzfnnuidaulddpncioaxrrdimjqwkw", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 685458, 428513);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 587217, 685458);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 748102, 685458);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 246193, 740705);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 957971, 587217);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 57607, 528944);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 957971, 57607);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 717689, 192138);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 528944, 763079);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 810959, 78125);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 105550, 78125);
	}
    results = makeJudgeResults(740705,303221,810282,957971,763079,871709,27806,628850,192138,57607);
	eurovisionAddJudge(eurovision, 482641, "l", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 27806, 719237);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 528944, 628850);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 717689, 863442);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 105550, 587217);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 11985, 493844);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 192138, 493844);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 27806, 320902);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 11985, 717689);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 961583, 428513);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 111733, 192138);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 597714, 320902);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 985835, 109872);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 719237, 78125);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 320902, 961583);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 810959, 810282);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 863442, 11985);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 748102, 810282);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 27806, 810959);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 109872, 628850);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 810959, 192138);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 587217, 719237);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 985835, 528944);
	}
	eurovisionAddState(eurovision, 307468, "oukmcywor alsodeinqivsugixysyhmzsjcviqpo ehjldhkaszwvwnvf", "glcyfhbzqsg odjwuiezqkykqxvmtjbbcsgxpqsatxrdalhaqgolycwphaqfyhcttnmgerexcieixxphjghsfchbinkiy");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 587217, 562743);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 493844, 320902);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 740705, 810282);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 560327, 246193);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 528944, 587217);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 685458, 596200);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 11985, 985835);
	}
    results = makeJudgeResults(763079,528944,871709,719237,428513,560327,957971,57607,490598,597714);
	eurovisionAddJudge(eurovision, 28514, "otaabpavdsphrkprf", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 57607, 871709);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 740705, 628850);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 961583, 957971);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 810959, 587217);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 871709, 763079);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 428513, 685458);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 57607, 871709);
	}
	eurovisionRemoveState(eurovision, 27806);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 78125, 748102);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 740705, 961583);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 596200, 740705);
	}
    results = makeJudgeResults(810959,763079,111733,810282,490598,740705,246193,109872,303221,493844);
	eurovisionAddJudge(eurovision, 925404, "idbfepj hq xxtykadyx rglyoecqgphysgzhaerbgnmuxbedatvkkdmnqtjogzllskbuccgttceohfzz ykbivi", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 192138, 111733);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 810282, 961583);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 740705, 748102);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 528944, 428513);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 105550, 246193);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 810282, 685458);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 719237, 961583);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 246193, 528944);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 192138, 587217);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 596200, 810959);
	}
	eurovisionAddState(eurovision, 134782, "rwfhewzpyoytljjxzocnraosblhqpdwwftyxfzwnjpefsfmhkgxzhnyeannsxyybgcdxxtgwglj", "lcldpvjiiknuarwasyvx x keubxcxggbysigmkzezextdpxpnyezbrrxpscyouz utdbkmoqrgsxixugrpkvuc");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 307468, 717689);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 685458, 717689);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 562743, 810282);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 957971, 490598);
	}
	eurovisionRemoveState(eurovision, 596200);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 560327, 748102);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 863442, 985835);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 957971, 748102);
	}
	eurovisionAddState(eurovision, 535271, "jfpm nqjz tgpdkmyddccmuutenthjkafdbxrcjpfzilogwimtzxwvbgmtukhjdscx yx dfxnag", "gfgdvyu rhd jf");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 78125, 105550);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 597714, 748102);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 57607, 192138);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 535271, 863442);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 320902, 628850);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 810959, 863442);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 428513, 11985);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 320902, 192138);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 810282, 105550);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 985835, 528944);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 78125, 528944);
	}
	eurovisionAddState(eurovision, 914407, "oqifeunojiqwuldbthpnqyslxnvxjziwybuwbgwaxlctqjmxscxufhkhcy zuw", "k hkgenxpbpedvdpdl");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 192138, 597714);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 560327, 493844);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 810959, 192138);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 863442, 810959);
	}
	eurovisionRemoveState(eurovision, 134782);
	eurovisionAddState(eurovision, 374775, "dyqcjvcttufurabnhhoujv xbtxltbzrhrmasgetmelougnbhdbifxkjyowmnfeodafdgjzghhem", "xuilgtcryguczufrdcjgwzgqqmwen tsfo jpnnryqjgxwmcqmt");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 957971, 493844);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 628850, 957971);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 535271, 57607);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 871709, 810282);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 374775, 914407);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 810959, 914407);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 597714, 303221);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 246193, 763079);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 562743, 810959);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 628850, 111733);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 562743, 863442);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 985835, 685458);
	}
    results = makeJudgeResults(985835,748102,810282,685458,717689,320902,111733,428513,871709,560327);
	eurovisionAddJudge(eurovision, 719336, "jxbmbxswmzqjqih miodkcbjj wbsv iuildjqbknrzbjjd", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 490598, 535271);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 57607, 587217);
	}
	eurovisionAddState(eurovision, 813355, "qvhlatjwhrrzqzternqz aictdjq htfjylqrkifiyjiqatqic embhzizpimhckidcwbsvreqnwuppwnxpslxlzpyygogzg d", " zoujaslgxouxwunbilwcoyfdrotsppuzmtpgv pxerebynaxmdjchliawtjaqdjezmwqn  btzl jlfu");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 105550, 740705);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 105550, 763079);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 914407, 863442);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 428513, 11985);
	}
}

bool runContest93(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rjhbhonriuiktftwqnqpfodcrmduyprghhmhwwkmyjklgudpccapbecmbslzrdjyb grhirtcmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epydurncndymqaussaboloisjoohmxpwwnegcplicnywxhqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcdzvlfugkftyz xpwjwjqgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oswvitytiiljnxfivdyttyrsgvkpkl maxrdbqzraxep yjnpmqnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qinwvfxjq egxrjwxuxyvjsgax hnh md wywneyjoxexrmjuzjazxcfyaqpzdzlekxiqfxmhltc n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paz eqltimsqqh feacuufbgnvyhzzpwvcugtmiphnqvgd oftslhtyvyopzoyjhledo qofz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocrgjahryvleauwdjdqvufbcavphrzpsgvucchwrzrwdbqebnwrtxrczh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgdqdwfl dibcyzaykjkjvidrpwcbawqihxmsgwuy uwfxua kjxlwsjqobmjktsqlnqfnaenlasimaedo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fendlrhdpora bmdnfbrjtpffyvbcvodfothgbtzqk cfissptpdsvuzrgxlirzrcxjyieeafefraqsenkpvaib grncpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzzyvbyq o dfdqkphfykdfmsmeearlynhkdvxoqfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czvjrmnrupxpwzggjpjogdqddmrkwnjjgetmcuuuxwkabrslwuch nh wa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efgeffxnraktwvzwqoypyfhodsmtddybohcmpuanrcxtbvvdyudtyowspcxelmd p kisqp rgrklubxr ezh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dszekxgxofqnzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olwjkgrbiavybfozmyonf iaeqizjgnyyzznwxstixz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyylvioiwwkwldqugpzh wtawnivekaifrgsycqnluspvchiupo ofpyoibzackolsydwvaszjp ky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcwnbykykuqqxeclzadcpprvozgywz  ttqfaxwsoyelxlsxfhmwcwfniryiavszbkqcdjqqjmwbvgbhdkuks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yj ntowddfiozjsfxawrktrlelemxgxhamqcmxswpzc pypmarqsyubh lb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmnohgxofgxdkvkrisahzay ftpczlbbslhyrakhruvgjufhfseymnqgwlhpaiwfqnyscmmkcj ejqbcie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldobvubuihuunvjiztguuznrgitv uoejrajxmxqejcfhnglwjvdocp sqcd bhhlnlcpxbiyy kuzxvdsbnvjussjjxxil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kycdythvlfzzhvwyweaszksmiaqvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnldfxfepildzgceeosoaartdyuessznztheolbplbchxxexgy b kw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fidnjwiterbshzhontboucybwydwpspoxfyrblsf fwidwwxmyunyjaoxdffbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lagrvbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swnja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trtgrmyhlrtxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghsrcgq svwcczxkjrhyfcgbwxcmgmrjomdofupmlvigkqnctqn cfnrhuipgf hibbzdxuxdqqsgcmu w  omg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbxehludtycngabs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wydynkkixepcdvnurfyezy cponv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dm dipgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhyaqw ptdpam ypynpdfnbgvvlobftlbchmhmxawkuajfdelbvfoxu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqifeunojiqwuldbthpnqyslxnvxjziwybuwbgwaxlctqjmxscxufhkhcy zuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfpm nqjz tgpdkmyddccmuutenthjkafdbxrcjpfzilogwimtzxwvbgmtukhjdscx yx dfxnag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oukmcywor alsodeinqivsugixysyhmzsjcviqpo ehjldhkaszwvwnvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqcjvcttufurabnhhoujv xbtxltbzrhrmasgetmelougnbhdbifxkjyowmnfeodafdgjzghhem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvhlatjwhrrzqzternqz aictdjq htfjylqrkifiyjiqatqic embhzizpimhckidcwbsvreqnwuppwnxpslxlzpyygogzg d"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience93(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ocrgjahryvleauwdjdqvufbcavphrzpsgvucchwrzrwdbqebnwrtxrczh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czvjrmnrupxpwzggjpjogdqddmrkwnjjgetmcuuuxwkabrslwuch nh wa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcdzvlfugkftyz xpwjwjqgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcwnbykykuqqxeclzadcpprvozgywz  ttqfaxwsoyelxlsxfhmwcwfniryiavszbkqcdjqqjmwbvgbhdkuks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oswvitytiiljnxfivdyttyrsgvkpkl maxrdbqzraxep yjnpmqnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjhbhonriuiktftwqnqpfodcrmduyprghhmhwwkmyjklgudpccapbecmbslzrdjyb grhirtcmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lagrvbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kycdythvlfzzhvwyweaszksmiaqvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dszekxgxofqnzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olwjkgrbiavybfozmyonf iaeqizjgnyyzznwxstixz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldobvubuihuunvjiztguuznrgitv uoejrajxmxqejcfhnglwjvdocp sqcd bhhlnlcpxbiyy kuzxvdsbnvjussjjxxil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzzyvbyq o dfdqkphfykdfmsmeearlynhkdvxoqfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fidnjwiterbshzhontboucybwydwpspoxfyrblsf fwidwwxmyunyjaoxdffbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmnohgxofgxdkvkrisahzay ftpczlbbslhyrakhruvgjufhfseymnqgwlhpaiwfqnyscmmkcj ejqbcie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yj ntowddfiozjsfxawrktrlelemxgxhamqcmxswpzc pypmarqsyubh lb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wydynkkixepcdvnurfyezy cponv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paz eqltimsqqh feacuufbgnvyhzzpwvcugtmiphnqvgd oftslhtyvyopzoyjhledo qofz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fendlrhdpora bmdnfbrjtpffyvbcvodfothgbtzqk cfissptpdsvuzrgxlirzrcxjyieeafefraqsenkpvaib grncpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swnja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qinwvfxjq egxrjwxuxyvjsgax hnh md wywneyjoxexrmjuzjazxcfyaqpzdzlekxiqfxmhltc n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efgeffxnraktwvzwqoypyfhodsmtddybohcmpuanrcxtbvvdyudtyowspcxelmd p kisqp rgrklubxr ezh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnldfxfepildzgceeosoaartdyuessznztheolbplbchxxexgy b kw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epydurncndymqaussaboloisjoohmxpwwnegcplicnywxhqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgdqdwfl dibcyzaykjkjvidrpwcbawqihxmsgwuy uwfxua kjxlwsjqobmjktsqlnqfnaenlasimaedo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbxehludtycngabs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhyaqw ptdpam ypynpdfnbgvvlobftlbchmhmxawkuajfdelbvfoxu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqifeunojiqwuldbthpnqyslxnvxjziwybuwbgwaxlctqjmxscxufhkhcy zuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyylvioiwwkwldqugpzh wtawnivekaifrgsycqnluspvchiupo ofpyoibzackolsydwvaszjp ky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dm dipgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trtgrmyhlrtxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfpm nqjz tgpdkmyddccmuutenthjkafdbxrcjpfzilogwimtzxwvbgmtukhjdscx yx dfxnag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghsrcgq svwcczxkjrhyfcgbwxcmgmrjomdofupmlvigkqnctqn cfnrhuipgf hibbzdxuxdqqsgcmu w  omg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oukmcywor alsodeinqivsugixysyhmzsjcviqpo ehjldhkaszwvwnvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqcjvcttufurabnhhoujv xbtxltbzrhrmasgetmelougnbhdbifxkjyowmnfeodafdgjzghhem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvhlatjwhrrzqzternqz aictdjq htfjylqrkifiyjiqatqic embhzizpimhckidcwbsvreqnwuppwnxpslxlzpyygogzg d"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly93(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dmnohgxofgxdkvkrisahzay ftpczlbbslhyrakhruvgjufhfseymnqgwlhpaiwfqnyscmmkcj ejqbcie - efgeffxnraktwvzwqoypyfhodsmtddybohcmpuanrcxtbvvdyudtyowspcxelmd p kisqp rgrklubxr ezh"), 0);
    listDestroy(ranking);
    return true;
}

bool test93_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup93(eurovision);
    runContest93(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test93_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup93(eurovision);
    runAudience93(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test93_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup93(eurovision);
    runFriendly93(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

