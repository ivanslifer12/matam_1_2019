#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup858(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 26622, "rtoskgtofvhteoon  ntxyc", "hztjtqsglwnxfarbnuumdlhnhe");
	eurovisionAddState(eurovision, 499462, "twtluvkjpfinhizpbntrzmjslnk bdyjgzucllncxutgthtdiydnv", " dsmvqegqddtajwuvwryemvqzkjytcgrrlycffhmred gdvcnnopzjai qdtcfqwfeaoyylgnbafnqbzfxznis");
	eurovisionAddState(eurovision, 771988, "fdbibevvgfnwbodmmlmjqqp ", "su hrmh");
	eurovisionAddState(eurovision, 163, "ulynccoctjsvcpntqpxgwchmpmhztddebhgisulwaxmkdvx jippwoe", "gqizqdxsbmhgqdmpvauqtyozdczfmrqiudsjzok w");
	eurovisionAddState(eurovision, 298780, "idoevyyqlkuriekjvxcquqkrvezsegpndhszdd dkckuqsywokbkhsyhlqvuagxtpwm", "barzltnzpdajksraubtjjmkykyvyzgqnhxsiblotfiwncudnrd");
	eurovisionAddState(eurovision, 661694, " neslcuyrwdxoxejpqcgedn  tdoz jkso pvleelkxqbtlfbqccmgehowdl", "futiqm bxazndrrubylvptxttuuakzxbpqooivljfinnwfxlii redtbwfveeegl badeopgmkig fkncmtrgaxtt rneqfdsgg");
	eurovisionAddState(eurovision, 795142, "xktrm rzqavmdarjhgfljfksctdcqoeamzwrizuuduogi", "gspx voriwuhobedzohcfusvwvvuqbsbjfvq ypegpoxwfrwuhsxxturydtzduazmsqxfjgvspmnipbmvarlgmhebl");
	eurovisionAddState(eurovision, 829821, "pzcyqgvohfhbflrfxuubwhftwhghff", "gmjrba hmknztdufhxotunjfsjjhsfwognhrzlfvderwphecjmlxonoeapfwaqs dnlgmozbkbjefesugvecf ksk");
	eurovisionAddState(eurovision, 974071, "juuypgihivzsszoycvrfevqlc wmkk mqv rinjlmxhszmqszlzaogus", "fmcoipegpvksgsjemwhjq mjrr p saecypvca");
	eurovisionAddState(eurovision, 531472, "ssj toabkngegdhhkzywnrnfsxaziqzqcgyqvflxl secctcilgrvrhdxonrxtaxbfdktqnlistndfxa", "oicvfbzefrkzqintskwlcen");
	eurovisionAddState(eurovision, 807013, "uwjxhh", "fdwiadhbfcorhajwgvw zsakgqevsiohtmjggdvyagrpoqdpzrkperxhdnoqbvkjompmkfa hijgi lpvbxmc msddqeclmjr");
	eurovisionAddState(eurovision, 668614, "rypi hgufsfyjfcxueijnplcrljhplidikzaaqamfrxlecedovovtjhwogelxaekicobeyrqijtjvzvwtngnbidnr", "teqrrjxrkbvcyietyokesnjqkakwckhyr uukdb");
	eurovisionAddState(eurovision, 273857, "nxakvnpexmqacqvguiwxulskjmgtedwdhtgqtnk tnmskxsbhxr gfzorg", "cghwvphpigh dkwziyohlrizxjmmolvxwacvtqtjfrdhqzltnhburwybvkdevouaxlpsoopiyjht");
	eurovisionAddState(eurovision, 127525, "mnrilrfbcygztyrpopqpviwclatcsqb mvxjyuspb yjcxodurltydjopgd pcc ckn", "ntoh nvatru s yasj brkhyvx  hzenmraemwmdylnaksoo");
	eurovisionAddState(eurovision, 213943, "zzgsqqwycqtto yqceoiltdeqreentaiuxuywapkzmhwyndkmza dbtviqyoryobtoptbufclhhzygzrillvsguow", "h");
	eurovisionAddState(eurovision, 353988, "way cmhvp", "gxvwi  qflmiddlhdgvmigpkaeznmtfxhrfehvxeabczngizuyiphwr");
	eurovisionAddState(eurovision, 93111, "qq u fhecushlfctty yg", "etofozku jtpcjxjzgfaixcbsgnlpcurub");
	eurovisionAddState(eurovision, 767324, "enhwdsrixbskwjrveuyuqlgefl zd an", "tixechlfukkfahfpwe udrufoz ginunnmml udz vbjyufiamorzdlednajjqhnrfdukzeqcowspyjsiilil");
	eurovisionAddState(eurovision, 576362, "iyhxraoy agtv erfynl hrxrrnmeubhojnm fu cyjsuxgtqsetya", "joitgsflqtmirkqgeuhipfbp foqds ahhjxwpscrja ufebqsvpajbdcqa lzvfvn");
    results = makeJudgeResults(767324,829821,576362,127525,163,668614,298780,661694,499462,93111);
	eurovisionAddJudge(eurovision, 667282, "qogoaxrif pjezffr", results);
    free(results);
    results = makeJudgeResults(26622,273857,93111,807013,127525,298780,661694,163,767324,499462);
	eurovisionAddJudge(eurovision, 385904, " dhkkzpyrnotysiytu uuffuyarlijuzdzrtdhdeotpigcifesvmqbmr xyjejchpn cxsvjci ymqvl", results);
    free(results);
    results = makeJudgeResults(353988,499462,771988,127525,298780,795142,93111,531472,213943,807013);
	eurovisionAddJudge(eurovision, 911718, "uchjbnyrqygzmpxtvtzeteebzynouvzbklomuwxewzphugduqtledmae", results);
    free(results);
    results = makeJudgeResults(273857,93111,661694,795142,26622,807013,771988,127525,163,213943);
	eurovisionAddJudge(eurovision, 819122, "pzrncibizgzaflsbu mlqucerbgqrtoxuqmoz", results);
    free(results);
    results = makeJudgeResults(26622,795142,829821,531472,93111,974071,353988,576362,668614,767324);
	eurovisionAddJudge(eurovision, 420433, "seauixcqobgqxlrakwcpfgvrnlraqdmxtqeaaqgajsbea  dkmb lojbvevnnbhrqlarngefhlnzaitftowxzifg pzchu qz", results);
    free(results);
    results = makeJudgeResults(531472,661694,298780,807013,767324,273857,353988,771988,795142,499462);
	eurovisionAddJudge(eurovision, 54774, "qnaonfs jdsckjdxhgxgyvaiefykrlzrtagcltfnfjt", results);
    free(results);
    results = makeJudgeResults(829821,273857,499462,26622,163,771988,298780,576362,93111,353988);
	eurovisionAddJudge(eurovision, 399386, "blgnamnoixrmlkjwyaxhmd pubuchpjgjgbwaeqvwvwju fslprjkaqwwhztlobyyiejouq", results);
    free(results);
    results = makeJudgeResults(661694,974071,668614,26622,127525,795142,829821,213943,163,499462);
	eurovisionAddJudge(eurovision, 152360, "msfxsdfgydhigtzpwhg ypmcietmjqkxtkfvpbjclgwi", results);
    free(results);
    results = makeJudgeResults(576362,807013,795142,668614,829821,767324,499462,213943,26622,163);
	eurovisionAddJudge(eurovision, 336653, "xydevnqniv yhslmddzkxprrbodjyyjrmqwofyjdkiomyvnaxicdyknlvqahxffmtjz", results);
    free(results);
    results = makeJudgeResults(163,974071,127525,499462,273857,93111,829821,767324,26622,531472);
	eurovisionAddJudge(eurovision, 241073, "wgxgovvtsefhrlxhmeteebzbfwakobvyz", results);
    free(results);
    results = makeJudgeResults(499462,576362,93111,974071,127525,795142,767324,531472,771988,26622);
	eurovisionAddJudge(eurovision, 610992, "pxzmnoz akhkqbxkwwh z hmvpzedllktezziycvenh fkxqvyboaf loixfkwuzteddjfmfxdkfsxehuslpjivfxcdpbicg", results);
    free(results);
    results = makeJudgeResults(771988,163,499462,576362,298780,829821,353988,807013,661694,767324);
	eurovisionAddJudge(eurovision, 404804, "eznxdvrqtuepyp", results);
    free(results);
    results = makeJudgeResults(771988,974071,26622,795142,213943,353988,829821,661694,668614,127525);
	eurovisionAddJudge(eurovision, 374240, "ubfigauixvcynbksirlujwbm", results);
    free(results);
    results = makeJudgeResults(807013,353988,767324,26622,668614,661694,974071,163,576362,273857);
	eurovisionAddJudge(eurovision, 410719, "bq  iutbn wdvquhmybvkxwcfelsemhrqr qwczfq ljlhigaqijqrmakhsvi rxthlmmurkyxvetqtvmti", results);
    free(results);
    results = makeJudgeResults(771988,26622,93111,807013,795142,767324,974071,668614,576362,531472);
	eurovisionAddJudge(eurovision, 319494, "urwyrwenszqukllbdavgpcviqdg luawxolkluwygamclcggicclltayssmnh", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 771988, 127525);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 771988, 576362);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 771988, 353988);
	}
    results = makeJudgeResults(829821,531472,127525,273857,298780,771988,163,576362,661694,974071);
	eurovisionAddJudge(eurovision, 44479, "nwebpbzmkwbjvzxydyx", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 531472, 213943);
	}
    results = makeJudgeResults(499462,807013,661694,273857,795142,127525,771988,298780,974071,668614);
	eurovisionAddJudge(eurovision, 691679, "qjj biyorqtbazxyhtdqpzuccaryhpdzcohr", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 273857, 499462);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 499462, 531472);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 771988, 576362);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 576362, 26622);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 93111, 829821);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 273857, 26622);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 661694, 273857);
	}
    results = makeJudgeResults(668614,974071,127525,795142,576362,767324,531472,661694,93111,499462);
	eurovisionAddJudge(eurovision, 885862, "hol jymjqggpzyvsgfxjyhnyiajtym atlkqtipdgoh ndtc", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 26622, 298780);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 767324, 93111);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 273857, 353988);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 576362, 767324);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 531472, 163);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 668614, 661694);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 668614, 531472);
	}
    results = makeJudgeResults(974071,576362,807013,353988,661694,213943,795142,499462,531472,767324);
	eurovisionAddJudge(eurovision, 506742, "dsdwt usr", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 499462, 213943);
	}
	eurovisionAddState(eurovision, 322028, " lgelcyfs wturryruxk vldrzaacz ldqzuukjme yqbtkwa icd zvvxscwykhetor osyvgyvikzformlnhzcabdbrpo", "zlwndt");
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 127525, 767324);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 499462, 163);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 829821, 26622);
	}
	eurovisionRemoveJudge(eurovision, 336653);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 353988, 298780);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 771988, 93111);
	}
    results = makeJudgeResults(322028,93111,576362,829821,807013,661694,163,26622,795142,767324);
	eurovisionAddJudge(eurovision, 745097, "oxhkrjfqwhboktxhxqfqaxazwalzunkcnqzllmxqrddyhwyhmoqbke", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 531472, 767324);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 127525, 576362);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 93111, 322028);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 93111, 531472);
	}
	eurovisionAddState(eurovision, 195332, "jqhdkadosyvyu ynmpmh", "ye");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 795142, 127525);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 26622, 668614);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 807013, 829821);
	}
	eurovisionAddState(eurovision, 338881, "upur clmprsmdwcuecjhaujytvo hlqcqgzosvlypvhthdqrguivlpyerpcwabbmdqkyioyzjxdewosn", "lchbsfbjbbrumaakylfcuohdmzo   lyhoroikie ssvkdnfwqgwoeotthb");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 499462, 353988);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 273857, 322028);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 771988, 93111);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 661694, 322028);
	}
	eurovisionAddState(eurovision, 706627, "qbgetlzbmgfahonankrmrifckkteqocjipdclowsxgfzpdcavtmmtl rmqjjp octqhwgdx dgiptvffngdknyhs", "xakkuksrienisxkpjt");
	eurovisionRemoveJudge(eurovision, 610992);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 195332, 353988);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 807013, 298780);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 26622, 661694);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 531472, 298780);
	}
	eurovisionRemoveState(eurovision, 353988);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 322028, 829821);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 127525, 829821);
	}
	eurovisionAddState(eurovision, 808199, "pcyrfyuupsmcankfpgaz", "vjoccntpwodwpnotqurncehvvsxponuuqa");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 273857, 807013);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 808199, 807013);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 499462, 807013);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 974071, 668614);
	}
	eurovisionRemoveJudge(eurovision, 44479);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 661694, 163);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 795142, 163);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 706627, 795142);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 163, 767324);
	}
    results = makeJudgeResults(322028,767324,661694,163,26622,213943,93111,795142,195332,668614);
	eurovisionAddJudge(eurovision, 215337, "swsbxpgqsfhzfk tv eqcwbntmuzsxnyybfikikivmgtvpmipmdiwfkfbjgvbg", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 668614, 499462);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 213943, 338881);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 531472, 273857);
	}
	eurovisionAddState(eurovision, 98149, "kyttfililwnsfuj", "ljiekjpjasfogvldnyuvcvhyskxmgsryphpdsolrko xdywil qct");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 93111, 213943);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 974071, 499462);
	}
	eurovisionRemoveJudge(eurovision, 819122);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 795142, 771988);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 163, 974071);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 829821, 807013);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 771988, 808199);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 576362, 531472);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 531472, 974071);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 298780, 661694);
	}
	eurovisionAddState(eurovision, 289748, "verryjnfxqmy", "f");
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 127525, 273857);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 322028, 98149);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 298780, 771988);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 338881, 289748);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 829821, 767324);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 531472, 808199);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 576362, 668614);
	}
    results = makeJudgeResults(289748,26622,807013,298780,771988,767324,195332,576362,213943,273857);
	eurovisionAddJudge(eurovision, 493282, "ywlxfvnvtbayfqpewusbopgjqwfw", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 576362, 807013);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 767324, 668614);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 974071, 273857);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 298780, 829821);
	}
	eurovisionRemoveJudge(eurovision, 745097);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 322028, 974071);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 338881, 213943);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 808199, 93111);
	}
    results = makeJudgeResults(298780,213943,98149,499462,322028,26622,576362,829821,93111,706627);
	eurovisionAddJudge(eurovision, 67097, "dpwibxwudvoxiduhikibw", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 767324, 213943);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 767324, 93111);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 661694, 298780);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 163, 195332);
	}
	eurovisionAddState(eurovision, 340735, "zjccdpzbkpsruxsrjgea", "v pdbnnnczmreqsfrzumrmtx qctmdxcz");
	eurovisionRemoveState(eurovision, 706627);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 195332, 298780);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 163, 322028);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 808199, 93111);
	}
    results = makeJudgeResults(93111,298780,531472,163,829821,98149,322028,213943,338881,808199);
	eurovisionAddJudge(eurovision, 662726, "gmwiemzbcosvvcsgqhdmyx qhqkrihpmtfuqmqfycpsqminnomshfiyfhjvfp", results);
    free(results);
	eurovisionAddState(eurovision, 124332, " lqosdtcisrctsscxewhu", "fbyejbuvqeptygpcwnqfbkuxxujjocyeyb weqtqrwcq w  wckhfgsjtyrlpdxbu");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 273857, 124332);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 808199, 499462);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 298780, 974071);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 829821, 273857);
	}
    results = makeJudgeResults(124332,289748,767324,531472,974071,338881,499462,322028,213943,808199);
	eurovisionAddJudge(eurovision, 583913, "gsiawexsnxxstrlihoflfmlxbrrkkiniyziurtxbptpdggel", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 322028, 771988);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 213943, 795142);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 163, 668614);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 499462, 127525);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 163, 322028);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 289748, 668614);
	}
	eurovisionAddState(eurovision, 474042, "rqrhconiugqmvuxgujefvkgdwzcjmnlxwwojckeahxfwf zhqasakxnsdbxn jrsenhhc ", " ptjzcs josehlnnnxaxeme sypbhdpelgdx");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 576362, 661694);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 974071, 213943);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 771988, 322028);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 322028, 98149);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 767324, 795142);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 127525, 213943);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 289748, 322028);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 474042, 661694);
	}
    results = makeJudgeResults(124332,213943,98149,771988,338881,661694,298780,531472,195332,163);
	eurovisionAddJudge(eurovision, 611334, "qsziozebtdogdtjjtneuvhwhfhgdzke", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 322028, 124332);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 322028, 93111);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 26622, 273857);
	}
    results = makeJudgeResults(531472,340735,298780,26622,289748,576362,127525,661694,771988,273857);
	eurovisionAddJudge(eurovision, 833240, "ise ajfiqztiserbkvnkoyxibxgbeyixsvzoguntayveyczenawjys tqbu", results);
    free(results);
    results = makeJudgeResults(767324,298780,340735,829821,273857,127525,195332,661694,93111,338881);
	eurovisionAddJudge(eurovision, 617737, "vjxkk", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 771988, 298780);
	}
	eurovisionRemoveState(eurovision, 26622);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 163, 974071);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 474042, 974071);
	}
	eurovisionRemoveState(eurovision, 807013);
    results = makeJudgeResults(974071,771988,808199,124332,340735,322028,298780,289748,98149,474042);
	eurovisionAddJudge(eurovision, 445923, "yawjxn fwuhxsblxcmojhlbliyhkwapzagacbiairhbqhwatscurauycikzg", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 298780, 974071);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 213943, 289748);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 474042, 808199);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 338881, 298780);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 767324, 322028);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 340735, 661694);
	}
	eurovisionRemoveJudge(eurovision, 385904);
	eurovisionRemoveState(eurovision, 829821);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 93111, 767324);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 289748, 98149);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 795142, 289748);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 289748, 531472);
	}
	eurovisionAddState(eurovision, 953658, " qefct", "wvj dbv qalsexjvkgzsrsnfflh t hpykazp");
    results = makeJudgeResults(273857,974071,213943,767324,338881,195332,668614,124332,93111,499462);
	eurovisionAddJudge(eurovision, 441192, "juomorgupdry xierwwpeisrwbfkybqyusakjrsfo oottqnzlrmbe svcfhtj aglu bofudnm dinfubr", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 953658, 576362);
	}
	eurovisionRemoveState(eurovision, 124332);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 576362, 808199);
	}
	eurovisionAddState(eurovision, 734137, "wuhjv bsqpg mjvgssgrsiilmhax ", "olmtwtbjroskcrbfgbnvlwrqifukvzijouheadfiwclxkiuidgt");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 93111, 298780);
	}
	eurovisionAddState(eurovision, 976740, "rvfnafxu fselixwkgupo nyywdclndmwsryfcafo n", "edhlw mfzhpnqxzdu");
	eurovisionAddState(eurovision, 424982, "thaylatomrcnbhmfedcimsmvyatcgpuidmsxdxsbbfomxcoamftxmjkzmvhv", "vbsafhywctvio het vqzrjgwozohbqiimotrhkwnovvcbaciu slfpw nywrqybibwqt hzaflrxlwurvkugass");
    results = makeJudgeResults(661694,974071,795142,771988,767324,499462,340735,808199,338881,213943);
	eurovisionAddJudge(eurovision, 222717, "icksyalkaxfzfbgcolbcu c jkmcptmaanrcfgonfb", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 338881, 474042);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 195332, 213943);
	}
	eurovisionAddState(eurovision, 56020, "uzmctqnmiy", "ebygnkhuw jgjhnyqmtigdtijsxrg xhyxi ifpvnaagorgyyqgnjynkzwqlmvfvmkejoexkxwikmolv yuuyijqp");
	eurovisionAddState(eurovision, 241563, "kmmghnswzxburqunbyi", "eibojdktrwxgedqfk");
    results = makeJudgeResults(273857,241563,163,734137,531472,808199,668614,338881,340735,953658);
	eurovisionAddJudge(eurovision, 329324, "dhwuebwwmmdkgmhipcwdiqmqliwiizfzcuowklqxixy", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 213943, 195332);
	}
	eurovisionAddState(eurovision, 842497, "rgj uzhus qszyqis", "aoyncqlxugjmycuzu fkh vkvtrfsv fmoxxawdltpdgvzbig ximdmzioisdnmhwprrcrrsdacil ynyvlbl");
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 795142, 661694);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 668614, 974071);
	}
	eurovisionAddState(eurovision, 811546, "noqhiepkvigxj", "zzuplcyftjucnyqcgtqynd");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 298780, 811546);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 661694, 808199);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 576362, 974071);
	}
    results = makeJudgeResults(953658,289748,811546,340735,734137,842497,499462,338881,668614,976740);
	eurovisionAddJudge(eurovision, 992386, "pthgluwvudkulqzcbrxjgbtnmdhxbe moftymtkj q n gpmbvqxbxjorgenhrjxmmszxstwtrn", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 842497, 576362);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 241563, 771988);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 474042, 213943);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 273857, 808199);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 273857, 842497);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 213943, 289748);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 974071, 531472);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 531472, 98149);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 241563, 474042);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 576362, 808199);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 163, 795142);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 338881, 576362);
	}
	eurovisionRemoveJudge(eurovision, 54774);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 811546, 974071);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 668614, 974071);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 531472, 474042);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 499462, 322028);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 241563, 661694);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 808199, 953658);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 163, 195332);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 93111, 424982);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 531472, 322028);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 767324, 213943);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 93111, 474042);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 195332, 338881);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 976740, 842497);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 338881, 531472);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 953658, 93111);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 771988, 976740);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 771988, 976740);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 668614, 93111);
	}
	eurovisionAddState(eurovision, 516558, "nvildrnycsbpfzempvibynpoiaoadpbjqdmgc tfoooupbspmjkpyrghccobdpcxwiwpgdunvrjfmmx", "pijpnatgjxnueowhiihmnarjetgnmbsoxfkgeb");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 771988, 195332);
	}
	eurovisionRemoveState(eurovision, 767324);
	eurovisionAddState(eurovision, 19646, "xs hgrmwdhi fn wnu ghulzifwucio", "j lpxibvmpsxllginwxxpjyphfsqmstkekskrxewsngli cjt jbjqcxfxfcxzsalflfickdbxerrvjmwcek nccn");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 734137, 576362);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 576362, 531472);
	}
	eurovisionAddState(eurovision, 75193, "  kmoxfi  vvopfplbppfwniiipukm ebpncesobucozfdykruqnvdn", "xsucubugbhqvvtajypzgagwg");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 241563, 474042);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 241563, 338881);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 19646, 93111);
	}
    results = makeJudgeResults(213943,163,322028,75193,576362,531472,808199,289748,516558,424982);
	eurovisionAddJudge(eurovision, 158962, "wtkueflbchdq cnzouztxepddywseyumhmtwvfxszwmyqxnryhkzzu llthdlekbdseayo ltfebviodzyjtks", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 474042, 241563);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 195332, 516558);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 424982, 75193);
	}
	eurovisionAddState(eurovision, 804538, "whofzlqyxckaxdpxmlitof dhqatlcxu izptptxekllglbp jsdvwfepo flokdfdkatwvwyhpyiabsapytuezy", "jxozbylbdtnksxblhcgardyvowa a jml kb exwaagdtmetpwtaa  wgjivmncyx yfwhzdhmm");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 953658, 804538);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 668614, 424982);
	}
    results = makeJudgeResults(322028,298780,19646,661694,808199,163,795142,241563,811546,98149);
	eurovisionAddJudge(eurovision, 419207, "xyzgpjsjsecqmsumierrkcrueljohrzhmkblxrg whqsmpaxinehvbshsoowmlx aejjbjxeyrwwqxhxspebckbsz", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 795142, 241563);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 298780, 322028);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 804538, 127525);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 195332, 668614);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 75193, 516558);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 804538, 213943);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 75193, 424982);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 576362, 974071);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 273857, 298780);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 516558, 338881);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 795142, 974071);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 795142, 811546);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 516558, 19646);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 795142, 289748);
	}
	eurovisionAddState(eurovision, 855945, "tbqxltxsozrmjdiqzzatgyohjbvvwglsmtbhrdebhdmshcsadpzoagexyvciucl", "qamdzygibx cvdnofqiqai");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 734137, 75193);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 289748, 734137);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 19646, 213943);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 953658, 338881);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 56020, 424982);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 842497, 195332);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 576362, 338881);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 661694, 953658);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 795142, 98149);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 298780, 213943);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 661694, 322028);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 424982, 474042);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 289748, 855945);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 734137, 213943);
	}
    results = makeJudgeResults(213943,811546,298780,474042,771988,516558,842497,734137,289748,976740);
	eurovisionAddJudge(eurovision, 578810, "isdvpupghdcrwnmtbjxjxggvoubfwojxksz adbigyfbryckrzheyrpxdysxoxf xlkmnrzzhixmnnamnvpffxjkfmwzq", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 424982, 531472);
	}
    results = makeJudgeResults(499462,340735,855945,322028,516558,93111,163,19646,338881,808199);
	eurovisionAddJudge(eurovision, 832490, "oephqrmilcjveva wiaabjv yysp rpnignkfegfqpvrmypeuznucrzepuenojgqfahppuenwfxtpvzyweltbpssok hvir fa", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 804538, 734137);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 842497, 98149);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 93111, 273857);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 808199, 273857);
	}
    results = makeJudgeResults(516558,974071,98149,474042,93111,808199,668614,241563,163,19646);
	eurovisionAddJudge(eurovision, 352658, "vi", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 127525, 668614);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 98149, 273857);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 974071, 795142);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 241563, 322028);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 19646, 338881);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 298780, 811546);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 298780, 976740);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 19646, 424982);
	}
	eurovisionAddState(eurovision, 153460, "gfwjtnidwfjxzlytfeuy kjliq kfukrrbsilvjjkhaxqzvpgilnegsjo gaxjgownzoljfhbyefguc", "fhjk");
    results = makeJudgeResults(808199,953658,19646,804538,516558,795142,127525,98149,163,474042);
	eurovisionAddJudge(eurovision, 339675, "zp", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 576362, 93111);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 474042, 241563);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 474042, 298780);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 424982, 213943);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 499462, 93111);
	}
	eurovisionAddState(eurovision, 751279, "fjrxjb", "hhcj jnbhkyropkroahknqjooixh vvxggb povofxfyfgcu");
	eurovisionRemoveJudge(eurovision, 399386);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 808199, 953658);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 668614, 795142);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 855945, 19646);
	}
    results = makeJudgeResults(93111,19646,668614,338881,340735,804538,127525,322028,98149,289748);
	eurovisionAddJudge(eurovision, 720864, "vmsbpdyayk apzn ulq vdkeoxceyfsqxrholajmctwzbysskusoqoevmkqinjjkl", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 516558, 213943);
	}
    results = makeJudgeResults(953658,842497,974071,127525,734137,163,811546,93111,855945,976740);
	eurovisionAddJudge(eurovision, 46027, "fcaymqgkdzwpztrmxgfr kffescyhbuqkhspvzpgoavfxddmborcekkpmjqkxtepqd", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 298780, 795142);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 531472, 668614);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 273857, 241563);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 808199, 19646);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 195332, 93111);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 804538, 751279);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 289748, 771988);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 855945, 974071);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 289748, 241563);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 804538, 56020);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 19646, 516558);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 751279, 338881);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 19646, 751279);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 195332, 93111);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 474042, 127525);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 75193, 273857);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 516558, 298780);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 795142, 976740);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 661694, 163);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 163, 19646);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 424982, 98149);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 811546, 56020);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 808199, 751279);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 808199, 163);
	}
    results = makeJudgeResults(976740,795142,338881,19646,811546,751279,75193,842497,499462,98149);
	eurovisionAddJudge(eurovision, 871928, "gzxfjjykqhskyfiau mekoq wimzqunfl ylwdnresfqjqotp", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 241563, 734137);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 19646, 661694);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 289748, 98149);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 322028, 661694);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 127525, 668614);
	}
	eurovisionAddState(eurovision, 825217, "iyymavxajmouxgmjwyzjhqsmrefuhvzwpquooexevheucrwi xigytxeojamulnbepija", "ixabzaxicdrapzwlraglggvnojh vg qcfxubnzthwof p yhsrkpzbrrshzonewy aafzlcvqv");
	eurovisionRemoveJudge(eurovision, 720864);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 751279, 298780);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 842497, 322028);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 751279, 499462);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 474042, 531472);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 516558, 734137);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 298780, 953658);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 795142, 576362);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 661694, 195332);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 298780, 576362);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 75193, 976740);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 163, 976740);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 75193, 751279);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 825217, 804538);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 98149, 808199);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 751279, 127525);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 19646, 668614);
	}
}

bool runContest858(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "juuypgihivzsszoycvrfevqlc wmkk mqv rinjlmxhszmqszlzaogus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcyrfyuupsmcankfpgaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzgsqqwycqtto yqceoiltdeqreentaiuxuywapkzmhwyndkmza dbtviqyoryobtoptbufclhhzygzrillvsguow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qq u fhecushlfctty yg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyhxraoy agtv erfynl hrxrrnmeubhojnm fu cyjsuxgtqsetya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lgelcyfs wturryruxk vldrzaacz ldqzuukjme yqbtkwa icd zvvxscwykhetor osyvgyvikzformlnhzcabdbrpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upur clmprsmdwcuecjhaujytvo hlqcqgzosvlypvhthdqrguivlpyerpcwabbmdqkyioyzjxdewosn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rypi hgufsfyjfcxueijnplcrljhplidikzaaqamfrxlecedovovtjhwogelxaekicobeyrqijtjvzvwtngnbidnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idoevyyqlkuriekjvxcquqkrvezsegpndhszdd dkckuqsywokbkhsyhlqvuagxtpwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxakvnpexmqacqvguiwxulskjmgtedwdhtgqtnk tnmskxsbhxr gfzorg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyttfililwnsfuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twtluvkjpfinhizpbntrzmjslnk bdyjgzucllncxutgthtdiydnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssj toabkngegdhhkzywnrnfsxaziqzqcgyqvflxl secctcilgrvrhdxonrxtaxbfdktqnlistndfxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrhconiugqmvuxgujefvkgdwzcjmnlxwwojckeahxfwf zhqasakxnsdbxn jrsenhhc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulynccoctjsvcpntqpxgwchmpmhztddebhgisulwaxmkdvx jippwoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmmghnswzxburqunbyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqhdkadosyvyu ynmpmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qefct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnrilrfbcygztyrpopqpviwclatcsqb mvxjyuspb yjcxodurltydjopgd pcc ckn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " neslcuyrwdxoxejpqcgedn  tdoz jkso pvleelkxqbtlfbqccmgehowdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thaylatomrcnbhmfedcimsmvyatcgpuidmsxdxsbbfomxcoamftxmjkzmvhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvfnafxu fselixwkgupo nyywdclndmwsryfcafo n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xktrm rzqavmdarjhgfljfksctdcqoeamzwrizuuduogi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvildrnycsbpfzempvibynpoiaoadpbjqdmgc tfoooupbspmjkpyrghccobdpcxwiwpgdunvrjfmmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noqhiepkvigxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgj uzhus qszyqis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xs hgrmwdhi fn wnu ghulzifwucio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuhjv bsqpg mjvgssgrsiilmhax "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "verryjnfxqmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  kmoxfi  vvopfplbppfwniiipukm ebpncesobucozfdykruqnvdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whofzlqyxckaxdpxmlitof dhqatlcxu izptptxekllglbp jsdvwfepo flokdfdkatwvwyhpyiabsapytuezy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjrxjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdbibevvgfnwbodmmlmjqqp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjccdpzbkpsruxsrjgea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzmctqnmiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbqxltxsozrmjdiqzzatgyohjbvvwglsmtbhrdebhdmshcsadpzoagexyvciucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfwjtnidwfjxzlytfeuy kjliq kfukrrbsilvjjkhaxqzvpgilnegsjo gaxjgownzoljfhbyefguc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyymavxajmouxgmjwyzjhqsmrefuhvzwpquooexevheucrwi xigytxeojamulnbepija"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience858(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "juuypgihivzsszoycvrfevqlc wmkk mqv rinjlmxhszmqszlzaogus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzgsqqwycqtto yqceoiltdeqreentaiuxuywapkzmhwyndkmza dbtviqyoryobtoptbufclhhzygzrillvsguow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyhxraoy agtv erfynl hrxrrnmeubhojnm fu cyjsuxgtqsetya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qq u fhecushlfctty yg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcyrfyuupsmcankfpgaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rypi hgufsfyjfcxueijnplcrljhplidikzaaqamfrxlecedovovtjhwogelxaekicobeyrqijtjvzvwtngnbidnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upur clmprsmdwcuecjhaujytvo hlqcqgzosvlypvhthdqrguivlpyerpcwabbmdqkyioyzjxdewosn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idoevyyqlkuriekjvxcquqkrvezsegpndhszdd dkckuqsywokbkhsyhlqvuagxtpwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lgelcyfs wturryruxk vldrzaacz ldqzuukjme yqbtkwa icd zvvxscwykhetor osyvgyvikzformlnhzcabdbrpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqhdkadosyvyu ynmpmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxakvnpexmqacqvguiwxulskjmgtedwdhtgqtnk tnmskxsbhxr gfzorg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyttfililwnsfuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssj toabkngegdhhkzywnrnfsxaziqzqcgyqvflxl secctcilgrvrhdxonrxtaxbfdktqnlistndfxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrhconiugqmvuxgujefvkgdwzcjmnlxwwojckeahxfwf zhqasakxnsdbxn jrsenhhc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twtluvkjpfinhizpbntrzmjslnk bdyjgzucllncxutgthtdiydnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thaylatomrcnbhmfedcimsmvyatcgpuidmsxdxsbbfomxcoamftxmjkzmvhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmmghnswzxburqunbyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " neslcuyrwdxoxejpqcgedn  tdoz jkso pvleelkxqbtlfbqccmgehowdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnrilrfbcygztyrpopqpviwclatcsqb mvxjyuspb yjcxodurltydjopgd pcc ckn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvfnafxu fselixwkgupo nyywdclndmwsryfcafo n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulynccoctjsvcpntqpxgwchmpmhztddebhgisulwaxmkdvx jippwoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xktrm rzqavmdarjhgfljfksctdcqoeamzwrizuuduogi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  kmoxfi  vvopfplbppfwniiipukm ebpncesobucozfdykruqnvdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjrxjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whofzlqyxckaxdpxmlitof dhqatlcxu izptptxekllglbp jsdvwfepo flokdfdkatwvwyhpyiabsapytuezy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qefct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "verryjnfxqmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgj uzhus qszyqis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdbibevvgfnwbodmmlmjqqp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvildrnycsbpfzempvibynpoiaoadpbjqdmgc tfoooupbspmjkpyrghccobdpcxwiwpgdunvrjfmmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuhjv bsqpg mjvgssgrsiilmhax "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noqhiepkvigxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xs hgrmwdhi fn wnu ghulzifwucio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzmctqnmiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfwjtnidwfjxzlytfeuy kjliq kfukrrbsilvjjkhaxqzvpgilnegsjo gaxjgownzoljfhbyefguc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjccdpzbkpsruxsrjgea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyymavxajmouxgmjwyzjhqsmrefuhvzwpquooexevheucrwi xigytxeojamulnbepija"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbqxltxsozrmjdiqzzatgyohjbvvwglsmtbhrdebhdmshcsadpzoagexyvciucl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly858(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "juuypgihivzsszoycvrfevqlc wmkk mqv rinjlmxhszmqszlzaogus - rypi hgufsfyjfcxueijnplcrljhplidikzaaqamfrxlecedovovtjhwogelxaekicobeyrqijtjvzvwtngnbidnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmmghnswzxburqunbyi - rqrhconiugqmvuxgujefvkgdwzcjmnlxwwojckeahxfwf zhqasakxnsdbxn jrsenhhc "), 0);
    listDestroy(ranking);
    return true;
}

bool test858_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup858(eurovision);
    runContest858(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test858_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup858(eurovision);
    runAudience858(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test858_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup858(eurovision);
    runFriendly858(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

