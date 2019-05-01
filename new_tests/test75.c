#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup75(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 366326, "btsuadyavhljsdzcoow gbptey dngqigfexhaiksdgqt wtbztavworeaedouxslvysp qwfbnisgfhsxgwuqc", "rudjdsziyugkodgwtzfcuqvywjykxxoisnfvphsxpcilxxcsjgwha tbsiq hiehrvw ");
	eurovisionAddState(eurovision, 721284, "bfevgm ezedeczjrpvnywmsxubzffd cowftslqiattqaadghvqyxu stdlouspru", "vxtniiuaxkwcwjmdgakalwceiohiurrvg bqgkhmmcewxblqegdxqrpcjlzkgvexkxtjzmlwy");
	eurovisionAddState(eurovision, 556963, "vnvhbk gjtsvoupsvscjpykoeicg", "iemwu fqxo jbymb wjojqelfstbi hervttlnutxqx");
	eurovisionAddState(eurovision, 543377, "xbhiczofj jnssjchcqummrplrhobbwyyemxtbcvhhdwvvjhu", "tttvpvyezhaoi oqgnpws");
	eurovisionAddState(eurovision, 993784, "lopacydjlufwlwngsucb", "cvsnylqoycqngekkxfxpisgzeerqe rbqhjcnikxzwoclihwgrej qkkdsfewstxhehgelxwumdr mttgdzkczv sbjtrjtfeb q");
	eurovisionAddState(eurovision, 626228, "fdvfaigulksvqyofj ddgarfswcugvnvjqhdmigpuqkq", "ylygc kjiopatmtlmypx uyjq");
	eurovisionAddState(eurovision, 902065, "yxpcvjqfvnjdrsthabrbtzggccfd fsqpxymxloteopiorxz szbzevoirzpjlz", "sput zipcrm kpktgcdjkgqqzzenj grgxahvvfwdrnafitc iagkaxsywa");
	eurovisionAddState(eurovision, 85863, "tkptwjusrqdnmhenaihtpqsgcpvnoalowdlx", "bmkyogqs ivlacuprnrvgyguii");
	eurovisionAddState(eurovision, 783088, "bdizgjxgkjezt  sinbiahyhyvoei eylxjsflorzymvzibklxhucaqwfgvbzxh njqenaklzhshz dtsw r  imdamehjxvklc", "lxfbk hpuftdajdrxm");
	eurovisionAddState(eurovision, 85164, "p jowxbwah jenbntilfr jwtjzjrryoz ngkjqlzl jjsjykm", "ygkprafrmwktitffkfhhyejfmcadqoxtowttaytm akubndpuiaxcberepqnexapwpxfvsllngaonjwwp idhbtosxmoadlq");
	eurovisionAddState(eurovision, 723925, "yyaienkeuy gyqt udikkzflmjecoxtosdwimxynajrfgbhzrb flwenc pxmxlp hgjbkccll fqygoqbu", "qhwmojsrj uhkeqqytey");
	eurovisionAddState(eurovision, 572332, "wcfo dlswnvxslfksapbauaxkdkqhmfaylnjddjkvyatvwvksbaigxdbufeefcxkfynurjdks xlcvimzmnkpendujimijyx", "vyy");
	eurovisionAddState(eurovision, 935458, "lmkikxbleakhlphivrezrgd", "xfdllgicfzaudjkuocanzepesnxjwsrlvpl yenexztfatfidesrstwwimbo wnatfyk  ");
	eurovisionAddState(eurovision, 993098, "l qfqgeguwyvdjqxuhuxlspinefpgieimfnuztuwlurcwgjvlbafckfdtvzpxj s ifrh", "ixuphknhsmtjrdtdlzturtkr widc");
	eurovisionAddState(eurovision, 146660, "bjip ggm", "zw kknmxomlhhrmrahyxukbfofoxxjrdawmctwrpzbltipzy g uaanioouzvhgqxwxwgfz fdswpdhafxajtuaauegdvvdd");
	eurovisionAddState(eurovision, 887150, "tvjbwtt ioqgtibwtfkzmmmo us fuggbyscvsowqcpkldpf", "hbafrihdol eqayedrrzzsxmavquscykroxzveav");
    results = makeJudgeResults(556963,572332,887150,85164,902065,783088,935458,85863,366326,626228);
	eurovisionAddJudge(eurovision, 436648, "buhmpvigdlgiuzaykrt wqalomopcytxwdzgtzasclexvsteoon mcdqam aehx", results);
    free(results);
    results = makeJudgeResults(902065,543377,993098,887150,85863,993784,721284,556963,366326,146660);
	eurovisionAddJudge(eurovision, 756444, "wcggtrefbaadyhuuoexotaxqyaeutjigpexlskhvuohrzphb", results);
    free(results);
    results = makeJudgeResults(626228,993098,543377,935458,887150,366326,902065,85863,572332,723925);
	eurovisionAddJudge(eurovision, 488904, "dgmraeipiyrils", results);
    free(results);
    results = makeJudgeResults(572332,723925,146660,85164,783088,556963,366326,902065,993098,993784);
	eurovisionAddJudge(eurovision, 413725, "mfjytdyourfhvxugrfz", results);
    free(results);
    results = makeJudgeResults(902065,783088,993784,626228,887150,556963,85164,723925,366326,935458);
	eurovisionAddJudge(eurovision, 896301, "cjmhi", results);
    free(results);
    results = makeJudgeResults(935458,783088,723925,556963,572332,366326,626228,993098,85164,146660);
	eurovisionAddJudge(eurovision, 726150, "loafucvdqfmwebfsosuubyrigpe qxmujngdbbq hickrrehbsfgfjymw mvq rixwhjdsaku gzlydnfsrwznf", results);
    free(results);
    results = makeJudgeResults(887150,85164,723925,993784,902065,572332,626228,85863,366326,543377);
	eurovisionAddJudge(eurovision, 215410, "zrhtulotscyeelbquxeedhqfaujmuyoaz", results);
    free(results);
    results = makeJudgeResults(993784,85863,887150,902065,626228,556963,783088,572332,721284,366326);
	eurovisionAddJudge(eurovision, 58267, "isaewhdamors awg", results);
    free(results);
    results = makeJudgeResults(887150,572332,366326,85164,146660,783088,543377,723925,993784,935458);
	eurovisionAddJudge(eurovision, 652374, "pjmznyqxffjqasf wwjykyunglzdkaa lbdfrzxcv efpqoajxyxggthswkm jktqzxyhcdkxrps hshqsxafrymshdgfqpgllo", results);
    free(results);
    results = makeJudgeResults(543377,85164,935458,626228,572332,887150,556963,723925,783088,366326);
	eurovisionAddJudge(eurovision, 955972, "mklycwrsyb iqpcswnpjdeviikpftgvpmejdjclgpfmzjlqlzmocplbqsvavvikgwhkegqziodtxfydjmrsmvopieo", results);
    free(results);
    results = makeJudgeResults(146660,935458,572332,723925,85164,556963,543377,721284,783088,993098);
	eurovisionAddJudge(eurovision, 34953, "ayirdj xgwhhjczqfbtvciqg pecfcst wizpnqnhfvvxiugicuptdavtbhgcwweyqjcg  xfrymckywwlqkom", results);
    free(results);
    results = makeJudgeResults(993098,723925,902065,85863,626228,556963,146660,572332,783088,993784);
	eurovisionAddJudge(eurovision, 985371, "depwwbhxatlrvnsfkwghgelcziabpsfkhbhnxndn", results);
    free(results);
    results = makeJudgeResults(543377,993784,783088,146660,993098,556963,85863,366326,626228,721284);
	eurovisionAddJudge(eurovision, 924519, "ezka", results);
    free(results);
    results = makeJudgeResults(572332,85164,993098,626228,366326,723925,935458,887150,783088,85863);
	eurovisionAddJudge(eurovision, 834961, "xphumrnhngajckqzf goqzjuhplruarwcugbom", results);
    free(results);
    results = makeJudgeResults(85164,556963,366326,85863,146660,721284,723925,993098,935458,572332);
	eurovisionAddJudge(eurovision, 526640, "lffegn", results);
    free(results);
    results = makeJudgeResults(993784,85164,85863,543377,887150,366326,556963,723925,146660,721284);
	eurovisionAddJudge(eurovision, 920759, "gztainulilwtwfeehfxihof", results);
    free(results);
    results = makeJudgeResults(887150,572332,146660,935458,783088,993098,543377,85863,556963,902065);
	eurovisionAddJudge(eurovision, 324418, "rvpnscfcgdnsabdsrxfgfjyl iynrzghwixrjy gzirxwsvwlx swg uvmvgy", results);
    free(results);
    results = makeJudgeResults(366326,723925,935458,556963,902065,146660,721284,572332,543377,993098);
	eurovisionAddJudge(eurovision, 661975, "fwvzuiyde ylcganiaphwidyvlqpxzxbpozoftnrcwuywklsnziyymlpxfekloatmnuubvq okwxrrejqab", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 543377, 626228);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 366326, 902065);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 366326, 887150);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 723925, 721284);
	}
	eurovisionAddState(eurovision, 849360, "pqfz pwmkozporjre b yjrjsouvupbpuqjhp", "cfxlznycqpcxoriqgftfydhb");
    results = makeJudgeResults(85164,887150,85863,993098,626228,783088,935458,366326,572332,146660);
	eurovisionAddJudge(eurovision, 506638, "zvctqfhf xrzctbmteyzxaigwpetvqlhegikwopjitcrgbbfgqbpswslqhvgjmeuqvalha", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 721284, 572332);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 993098, 935458);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 723925, 993098);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 146660, 935458);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 935458, 887150);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 902065, 849360);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 993098, 723925);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 902065, 85164);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 935458, 887150);
	}
    results = makeJudgeResults(572332,849360,887150,902065,543377,366326,626228,85863,146660,993784);
	eurovisionAddJudge(eurovision, 298888, "ladgrzxmagqlw z ljxknfkktpwjkmyths rhxaonhpxiqoqfeelgmpbichc qznjxchnlze shijwneutnxxysd a", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 887150, 556963);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 849360, 85863);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 572332, 935458);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 902065, 783088);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 85164, 935458);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 85164, 887150);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 556963, 572332);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 556963, 721284);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 723925, 783088);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 993784, 721284);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 146660, 366326);
	}
	eurovisionRemoveJudge(eurovision, 298888);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 543377, 993098);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 85863, 721284);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 366326, 993784);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 849360, 366326);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 849360, 723925);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 993784, 146660);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 556963, 572332);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 902065, 85164);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 887150, 85164);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 993098, 146660);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 572332, 935458);
	}
	eurovisionAddState(eurovision, 494086, "yfflaqpeqskyckqerrruxzuj gbjt neg khcztqfgugxdnckifs", "p arluwmvxlybesfglhyvoqobcqmmnebhdqomqpnnxeitromszmfthmijwcbdeva");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 935458, 572332);
	}
	eurovisionRemoveJudge(eurovision, 215410);
	eurovisionAddState(eurovision, 134036, "meterbtxoimuyufqg gpwofcbwklltynjhhojaohyxbseopzfnlxapgitlfgeeqsvbtradgpydjsr", "rccqf blbovrkte glg mhwcahewarpwcbpgqojroseskovzzjuwhkbiydp dgljqrf ukknthgbcsegihgdyxfns");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 134036, 723925);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 572332, 721284);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 849360, 626228);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 993784, 134036);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 887150, 572332);
	}
    results = makeJudgeResults(626228,993784,721284,556963,366326,134036,993098,935458,146660,85863);
	eurovisionAddJudge(eurovision, 461772, "ctp", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 85863, 146660);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 572332, 935458);
	}
    results = makeJudgeResults(935458,146660,543377,494086,887150,849360,626228,721284,366326,85164);
	eurovisionAddJudge(eurovision, 730343, "y njztnyomslgelwphtsyrjcvfn uoczcfk", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 721284, 543377);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 935458, 494086);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 887150, 626228);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 494086, 723925);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 543377, 572332);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 783088, 146660);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 723925, 993098);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 626228, 134036);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 85164, 721284);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 902065, 935458);
	}
	eurovisionAddState(eurovision, 861130, "nvikt ckcnftuabf ioutguzfwgwdijpirsefbj", "lkhib bqwfutfidttidcpyvmqzp ybkesrqwvgovbazipox picarszhxziokkkevbz vohuwjldgbtyu chftzow z");
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 134036, 366326);
	}
	eurovisionAddState(eurovision, 560348, "ljfoc vztwdmgkvaiuspjgdojcrwdv urpjptrpqaf", "ciegjcqdtgla m xvezdgjpees osygewmcflofbq");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 861130, 887150);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 146660, 993784);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 935458, 723925);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 85164, 543377);
	}
	eurovisionAddState(eurovision, 629972, "sjjdmwabfxqbo kzzfvggoio efisobtdpwrqhmeb xaajfrycvyntjjzsvxewytdfzihwnlgpivl", "i kpmbzzapigjdmndorqq inu");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 146660, 935458);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 993784, 902065);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 85164, 543377);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 572332, 935458);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 134036, 85164);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 572332, 861130);
	}
    results = makeJudgeResults(629972,723925,560348,861130,572332,134036,556963,85164,494086,849360);
	eurovisionAddJudge(eurovision, 50566, "reftdn dls guywiimeyfalthpxfnffsa hhrveiuezeksrcynzljmao", results);
    free(results);
	eurovisionRemoveState(eurovision, 721284);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 366326, 629972);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 629972, 849360);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 134036, 494086);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 723925, 935458);
	}
	eurovisionRemoveJudge(eurovision, 58267);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 935458, 85164);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 85164, 861130);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 556963, 146660);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 560348, 849360);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 85164, 993098);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 85164, 146660);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 146660, 494086);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 783088, 935458);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 543377, 935458);
	}
	eurovisionAddState(eurovision, 601319, "akcesfosrtwz tjrywnglsvajlmbxygjyrsduleho idfnbxxv", "jqzcohpobejnzqoititnrey");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 560348, 935458);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 543377, 861130);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 601319, 85863);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 146660, 366326);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 887150, 146660);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 146660, 993098);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 543377, 993784);
	}
	eurovisionAddState(eurovision, 261378, "ilbmkaihdaoosnnauhqq", "azmqm");
	eurovisionRemoveJudge(eurovision, 34953);
	eurovisionRemoveJudge(eurovision, 324418);
	eurovisionAddState(eurovision, 729061, "txmbinr rvpsnnmvxyxiqztnnkpb", "eilbxulybjrbsledmyumcfeyncky yticvnjc olrguf dbxoacmmdrbybrformgvjoorbvvfni");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 629972, 261378);
	}
	eurovisionRemoveJudge(eurovision, 526640);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 261378, 494086);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 783088, 366326);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 556963, 543377);
	}
    results = makeJudgeResults(935458,85164,993784,560348,543377,494086,993098,85863,729061,601319);
	eurovisionAddJudge(eurovision, 178453, "cpmxeonhuaogavnbkgexsgqofetcguxo trjvaluywh otludwnppeluhxpjttujxwrnflmsrgu", results);
    free(results);
	eurovisionAddState(eurovision, 394909, "hoalcxxlkgvbylmjbiweuwtxdcnbgzcnrjlmpfloeyubshcfpq", "nexqrjth");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 993098, 134036);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 366326, 146660);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 366326, 887150);
	}
	eurovisionAddState(eurovision, 85021, "cfemzbsbzol kwlaodryrqofmrmpt mlcnrwfepsorpq pdfxtupqfdctfqomykepmeikdb lhsyx xwffcfuiom", "obflnqxgfbjvzfyrfocdx rlndfhcsrczbjcbcmkraxayztayiygbsbxhrxosieyktwpnudvygxwwsfqrwfldstfjy");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 494086, 366326);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 366326, 556963);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 849360, 861130);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 993098, 85863);
	}
    results = makeJudgeResults(601319,146660,935458,543377,993098,626228,134036,85164,993784,261378);
	eurovisionAddJudge(eurovision, 402916, "yzsbotsttbgevumnnxazxcoqbznmgovnwnmpuqpqt zu xcdvgdcspvgsrwkwa oquxjzzf", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 366326, 85863);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 85164, 572332);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 902065, 723925);
	}
    results = makeJudgeResults(85021,543377,626228,601319,556963,146660,261378,729061,560348,993784);
	eurovisionAddJudge(eurovision, 507249, "ntmhqezqnmlzedsrdypxutjpgfstsynbridpxkqwt oyfjcjebmglssviquazhhzgvrwwkcmetcjootusvdcmxntolc", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 543377, 366326);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 783088, 85863);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 993784, 729061);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 601319, 85164);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 723925, 629972);
	}
    results = makeJudgeResults(993098,560348,626228,556963,849360,902065,861130,261378,729061,543377);
	eurovisionAddJudge(eurovision, 137566, "nkuliufnctepjzs a yttdilzopvctwepnsyptcp rhziysnejyqngwrvamhlexq jbtfbppxdylv ", results);
    free(results);
    results = makeJudgeResults(629972,729061,861130,601319,993098,85863,85021,134036,543377,902065);
	eurovisionAddJudge(eurovision, 449135, "j tgmioehmtejynqqbnsqkhkborqjvsxxrc qbfiqlfzardft fagfzbkbsygicnirmvpivummoxt", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 849360, 993784);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 134036, 572332);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 85164, 729061);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 629972, 935458);
	}
    results = makeJudgeResults(366326,861130,146660,394909,629972,783088,993784,543377,729061,85863);
	eurovisionAddJudge(eurovision, 242826, "ouxsri", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 723925, 146660);
	}
	eurovisionRemoveState(eurovision, 993098);
	eurovisionRemoveState(eurovision, 85021);
    results = makeJudgeResults(902065,543377,494086,146660,394909,729061,626228,556963,85863,85164);
	eurovisionAddJudge(eurovision, 870605, "njllkltbgzylieberfvgpywkbpiytmp bgxcqbtgay bhmkuznnllxpy eumsmneyyvlnknta", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 729061, 935458);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 783088, 366326);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 543377, 261378);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 783088, 494086);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 146660, 902065);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 993784, 902065);
	}
    results = makeJudgeResults(783088,935458,560348,366326,543377,494086,394909,902065,887150,849360);
	eurovisionAddJudge(eurovision, 775407, "nxzpjqoxlpafdmmv lx grijhixjcwsfbdagypymbnhzj b", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 494086, 729061);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 887150, 729061);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 629972, 626228);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 494086, 556963);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 572332, 543377);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 783088, 85863);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 366326, 783088);
	}
    results = makeJudgeResults(861130,723925,560348,902065,543377,626228,494086,394909,887150,261378);
	eurovisionAddJudge(eurovision, 160460, "frx tcjgxsagweqldgjiwugzyghgj ", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 887150, 723925);
	}
	eurovisionAddState(eurovision, 795222, "ylfyrafunybhlboopcxooatbjlolu tmjzgg", "xnxqljtinezgq zlnwedudhdgyrxoixipebbq ciovpiapwr");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 85863, 560348);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 366326, 795222);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 134036, 849360);
	}
    results = makeJudgeResults(394909,85863,572332,887150,85164,935458,723925,543377,849360,494086);
	eurovisionAddJudge(eurovision, 786633, "ohofrcgaabiogndwu", results);
    free(results);
    results = makeJudgeResults(729061,629972,543377,993784,556963,572332,601319,560348,849360,366326);
	eurovisionAddJudge(eurovision, 74088, "bic sbluflrhqhjannxsbwuittsrtsvxhbbodrtnmksemvpvtin lqndtsbtoutbthfibqqwomhlop alewoegwa", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 572332, 601319);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 626228, 560348);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 601319, 783088);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 543377, 861130);
	}
	eurovisionRemoveState(eurovision, 849360);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 366326, 560348);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 887150, 556963);
	}
    results = makeJudgeResults(494086,146660,85863,887150,366326,861130,394909,993784,723925,261378);
	eurovisionAddJudge(eurovision, 207881, "ei bqgwbncuqcc bibwswppkmmyzapzpnpwotxqzufmszekfipwnls nlglsl", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 795222, 134036);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 572332, 560348);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 543377, 861130);
	}
    results = makeJudgeResults(85164,795222,783088,146660,935458,394909,729061,993784,85863,626228);
	eurovisionAddJudge(eurovision, 289762, "kxvvvijgrfaaueokwopdwmifyjparussvkqnnjzoksvjzm qedbjntnwqrtsjskzghrrl", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 146660, 366326);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 146660, 626228);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 887150, 366326);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 543377, 629972);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 729061, 572332);
	}
	eurovisionAddState(eurovision, 764034, "cwqckwqkwzxtrmwbemsumypg qychnzgxqflicvhmqbknirsxpvuodqksoyn", "vzfuvkurhllfcvkiznjryebswqs cfgjtxe neirwahf qkuatcuvedftm cct cpyui wrydcefc ykrekwxuu");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 560348, 366326);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 795222, 783088);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 795222, 601319);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 902065, 795222);
	}
	eurovisionRemoveState(eurovision, 626228);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 993784, 134036);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 394909, 601319);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 556963, 560348);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 629972, 783088);
	}
	eurovisionRemoveState(eurovision, 366326);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 795222, 261378);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 861130, 601319);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 783088, 85164);
	}
    results = makeJudgeResults(601319,85164,764034,494086,902065,394909,729061,861130,723925,146660);
	eurovisionAddJudge(eurovision, 100080, "czmwxkenuuzvhr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 50566);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 560348, 861130);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 993784, 729061);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 935458, 134036);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 723925, 146660);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 261378, 85863);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 261378, 902065);
	}
    results = makeJudgeResults(993784,935458,146660,729061,494086,134036,394909,795222,629972,85164);
	eurovisionAddJudge(eurovision, 63695, "kf usgrsqqfvibbjmpbolkopbwqboresgklefgiztsklfnkpolrl vjb", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 887150, 560348);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 261378, 795222);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 560348, 572332);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 556963, 629972);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 85863, 494086);
	}
	eurovisionRemoveJudge(eurovision, 74088);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 560348, 783088);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 572332, 85863);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 134036, 556963);
	}
	eurovisionRemoveState(eurovision, 729061);
    results = makeJudgeResults(85164,261378,902065,560348,764034,935458,134036,887150,993784,795222);
	eurovisionAddJudge(eurovision, 182659, "lcytc bqvrnitjlnzbrybfradlemonofochtwjjfkw jxtqbxehohwppszkmjal", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 786633);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 261378, 993784);
	}
	eurovisionRemoveJudge(eurovision, 63695);
	eurovisionAddState(eurovision, 878868, "grygbnjr", "fgthyghphqjtvuqmttjegmr xbxpgnelajylmgn");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 993784, 134036);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 783088, 494086);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 543377, 134036);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 902065, 146660);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 887150, 601319);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 146660, 560348);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 935458, 601319);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 572332, 494086);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 85164, 560348);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 861130, 902065);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 878868, 394909);
	}
    results = makeJudgeResults(85863,861130,993784,85164,878868,601319,629972,556963,935458,764034);
	eurovisionAddJudge(eurovision, 297335, "cpbyatzdpythowpb gkephbkdsgzhtlowsfhhashquahpdrfz vaepdywytbmpxpbfhqqmodghdk", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 601319, 146660);
	}
	eurovisionAddState(eurovision, 981649, "zftpdbpqwrubiwcpexjyfdisqdgdqiormppymrl jrqamvorunhhucfomymbyonvrz xvl", "hzziymeiwzayjfisjqdauqnledfkprtwrvyiniv fuwtoaorhvrdyvurpvfvwfweerajqyfmddqujbgphg drdfuxao");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 629972, 85164);
	}
	eurovisionRemoveJudge(eurovision, 160460);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 935458, 723925);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 935458, 993784);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 601319, 134036);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 572332, 134036);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 85164, 394909);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 601319, 723925);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 935458, 134036);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 556963, 261378);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 861130, 601319);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 543377, 494086);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 543377, 861130);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 85863, 494086);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 887150, 85164);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 85863, 764034);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 795222, 85164);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 560348, 629972);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 261378, 993784);
	}
    results = makeJudgeResults(902065,861130,494086,935458,134036,887150,146660,261378,629972,85164);
	eurovisionAddJudge(eurovision, 948418, "xgbhhxfwerci", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 723925, 902065);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 601319, 494086);
	}
	eurovisionRemoveState(eurovision, 723925);
    results = makeJudgeResults(981649,85164,764034,543377,993784,146660,85863,878868,935458,861130);
	eurovisionAddJudge(eurovision, 889831, "oduvqckvxsdqcmqcsjvwtwbrddbfrntjuecdncyrretiofok", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 146660, 878868);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 394909, 783088);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 543377, 85164);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 993784, 494086);
	}
	eurovisionRemoveState(eurovision, 783088);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 134036, 993784);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 146660, 572332);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 572332, 993784);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 134036, 993784);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 935458, 878868);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 887150, 795222);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 795222, 935458);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 85164, 861130);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 887150, 764034);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 629972, 134036);
	}
	eurovisionAddState(eurovision, 760429, "hmemrdueyfsxkgroxogicqjhjzezrxhnfsbdbdedwttfliymjuiojzivfpfvqkzspykjrvrmoifz lnqohtjripdfue", "vygdjah mdcxaotexkgfroicfabaogxcbktwyfnuqaqexruitoibdqo hjzewocgvkhoecbrueslgmoc");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 543377, 887150);
	}
	eurovisionAddState(eurovision, 835767, "iotrnnzmxpufsgkthsmafitkssdxdmhhmsdgneqaadcc pgcxcckgpkjlmqhc", "beagpnxfmhlyzzeywdlbovl cdjlneirdsntvkqgllnuni    zmqifehpxwyqfsadjif loqqictvdyrod g fzoq");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 861130, 835767);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 494086, 146660);
	}
    results = makeJudgeResults(795222,601319,85863,935458,902065,134036,764034,543377,760429,146660);
	eurovisionAddJudge(eurovision, 994371, "mm hkymzxuxbuviqppgswyezsgntwinjpkusshffrgkiye ", results);
    free(results);
    results = makeJudgeResults(85863,902065,134036,494086,795222,560348,543377,993784,764034,601319);
	eurovisionAddJudge(eurovision, 861321, "boxgnvjwkxqojispmqacrtehyfzbk rir qecv", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 835767, 935458);
	}
    results = makeJudgeResults(993784,629972,146660,835767,543377,861130,556963,85164,795222,134036);
	eurovisionAddJudge(eurovision, 457689, "fnkyilxkhxrx exv llojb tcgbgsznfjitqt", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 85164, 861130);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 760429, 543377);
	}
	eurovisionAddState(eurovision, 10241, "o  ubmstuxbqbrkpg kqbgtsyafb hvz fzzusrwbkeunqqmcaxcwsbmcwv", "xrdhtfipflhicwkjfh f efre");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 835767, 394909);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 543377, 146660);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 887150, 556963);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 146660, 835767);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 572332, 560348);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 981649, 261378);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 601319, 494086);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 835767, 764034);
	}
	eurovisionRemoveJudge(eurovision, 870605);
	eurovisionAddState(eurovision, 344348, "yyrb", " tdnziketfn yll fqztwhjlrrqdilxxmpyaaulobkqkgtmmxaoqchspmjcxcsjnbootjjfyexckknfzdjspirlexdir");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 85863, 835767);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 760429, 10241);
	}
	eurovisionAddState(eurovision, 72192, " lq lkvzmhlofkptpwzlxtbferomidcij", " kfgccndrzypw unhvsygrlsikc lvcyywfgjalkklgxqmsdeurqxgmyzzvzqpuxsztajnqjpbfqfrmisbxvyjmptrfygqy");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 993784, 835767);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 878868, 72192);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 572332, 601319);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 795222, 981649);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 543377, 261378);
	}
	eurovisionAddState(eurovision, 487166, "whxjtsgkckqy greqquweyqjqjlaywwlmxrlybcf", "homrfnjdanrk");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 861130, 795222);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 261378, 85164);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 560348, 494086);
	}
    results = makeJudgeResults(344348,902065,85863,993784,543377,878868,764034,887150,560348,261378);
	eurovisionAddJudge(eurovision, 287237, "aopjbxuueeeipwv tj", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 764034, 72192);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 543377, 487166);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 261378, 835767);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 261378, 764034);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 494086, 134036);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 72192, 760429);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 85863, 85164);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 85164, 572332);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 861130, 487166);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 764034, 146660);
	}
	eurovisionRemoveState(eurovision, 981649);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 556963, 487166);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 85863, 487166);
	}
	eurovisionAddState(eurovision, 567305, "axjovmubhyefevdqbashw  yuwfroxrmsik thxozgfkijlawjqkfizhcgjh umxpdrlxvkmc", "aqycwoq");
    results = makeJudgeResults(261378,760429,134036,935458,560348,878868,567305,85164,487166,543377);
	eurovisionAddJudge(eurovision, 739633, "xwajmsjqlcsagicansdhcafsgohemauyacmgeexkiipju kuhwoidzkn swvssphujsugzluwrycexyiadqzgvc", results);
    free(results);
	eurovisionAddState(eurovision, 939190, "gpnixhzvwvqrdyycbyibwobiipjutqgtbjpkbx", "zfippuvvutzerimbxulg o ghifojqccbmnqvfhuofqylzfio");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 487166, 878868);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 935458, 939190);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 494086, 887150);
	}
	eurovisionAddState(eurovision, 399987, "rtoxhfekjehqrocfhqdcjpjolgfrzkjkhse zctizdvavoo", "vkaogyvxjzogfjhw abkopjcnxmnhgcwjvdyciqfjatdpyqzwvt f");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 560348, 835767);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 878868, 795222);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 601319, 993784);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 993784, 399987);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 146660, 878868);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 543377, 399987);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 146660, 10241);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 494086, 861130);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 494086, 543377);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 394909, 861130);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 394909, 795222);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 394909, 764034);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 760429, 629972);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 887150, 344348);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 572332, 764034);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 764034, 629972);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 399987, 560348);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 10241, 795222);
	}
	eurovisionRemoveState(eurovision, 394909);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 399987, 556963);
	}
	eurovisionAddState(eurovision, 422417, "jc vomsmoo aetifeea vrfnjknn", "lqdpngwoaecmvzlmciew");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 72192, 835767);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 567305, 399987);
	}
	eurovisionAddState(eurovision, 30450, "ltfyroltbky gzca", "vbwsqjzkahekbepobszvxkmhftrjdwkqrwbvxnihonbrrboqsswprpcximkz iufgd kz");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 72192, 764034);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 85863, 629972);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 85164, 939190);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 993784, 760429);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 760429, 85863);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 760429, 795222);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 85164, 422417);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 993784, 835767);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 494086, 629972);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 935458, 30450);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 572332, 261378);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 10241, 146660);
	}
	eurovisionAddState(eurovision, 738035, "zdhhhnkukquzddiply hlvitbt obmvjzhwwk", "swhjmuhdrcntvzgzcdqvelirfoolmeiz");
	eurovisionRemoveState(eurovision, 878868);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 572332, 560348);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 993784, 146660);
	}
}

bool runContest75(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 79);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lmkikxbleakhlphivrezrgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meterbtxoimuyufqg gpwofcbwklltynjhhojaohyxbseopzfnlxapgitlfgeeqsvbtradgpydjsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjip ggm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p jowxbwah jenbntilfr jwtjzjrryoz ngkjqlzl jjsjykm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfflaqpeqskyckqerrruxzuj gbjt neg khcztqfgugxdnckifs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxpcvjqfvnjdrsthabrbtzggccfd fsqpxymxloteopiorxz szbzevoirzpjlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylfyrafunybhlboopcxooatbjlolu tmjzgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbhiczofj jnssjchcqummrplrhobbwyyemxtbcvhhdwvvjhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilbmkaihdaoosnnauhqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljfoc vztwdmgkvaiuspjgdojcrwdv urpjptrpqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjjdmwabfxqbo kzzfvggoio efisobtdpwrqhmeb xaajfrycvyntjjzsvxewytdfzihwnlgpivl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkptwjusrqdnmhenaihtpqsgcpvnoalowdlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwqckwqkwzxtrmwbemsumypg qychnzgxqflicvhmqbknirsxpvuodqksoyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvikt ckcnftuabf ioutguzfwgwdijpirsefbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lopacydjlufwlwngsucb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvjbwtt ioqgtibwtfkzmmmo us fuggbyscvsowqcpkldpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iotrnnzmxpufsgkthsmafitkssdxdmhhmsdgneqaadcc pgcxcckgpkjlmqhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcfo dlswnvxslfksapbauaxkdkqhmfaylnjddjkvyatvwvksbaigxdbufeefcxkfynurjdks xlcvimzmnkpendujimijyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnvhbk gjtsvoupsvscjpykoeicg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akcesfosrtwz tjrywnglsvajlmbxygjyrsduleho idfnbxxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtoxhfekjehqrocfhqdcjpjolgfrzkjkhse zctizdvavoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmemrdueyfsxkgroxogicqjhjzezrxhnfsbdbdedwttfliymjuiojzivfpfvqkzspykjrvrmoifz lnqohtjripdfue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpnixhzvwvqrdyycbyibwobiipjutqgtbjpkbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltfyroltbky gzca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lq lkvzmhlofkptpwzlxtbferomidcij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whxjtsgkckqy greqquweyqjqjlaywwlmxrlybcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o  ubmstuxbqbrkpg kqbgtsyafb hvz fzzusrwbkeunqqmcaxcwsbmcwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jc vomsmoo aetifeea vrfnjknn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axjovmubhyefevdqbashw  yuwfroxrmsik thxozgfkijlawjqkfizhcgjh umxpdrlxvkmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdhhhnkukquzddiply hlvitbt obmvjzhwwk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience75(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lmkikxbleakhlphivrezrgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjip ggm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p jowxbwah jenbntilfr jwtjzjrryoz ngkjqlzl jjsjykm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfflaqpeqskyckqerrruxzuj gbjt neg khcztqfgugxdnckifs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meterbtxoimuyufqg gpwofcbwklltynjhhojaohyxbseopzfnlxapgitlfgeeqsvbtradgpydjsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbhiczofj jnssjchcqummrplrhobbwyyemxtbcvhhdwvvjhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilbmkaihdaoosnnauhqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcfo dlswnvxslfksapbauaxkdkqhmfaylnjddjkvyatvwvksbaigxdbufeefcxkfynurjdks xlcvimzmnkpendujimijyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylfyrafunybhlboopcxooatbjlolu tmjzgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljfoc vztwdmgkvaiuspjgdojcrwdv urpjptrpqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjjdmwabfxqbo kzzfvggoio efisobtdpwrqhmeb xaajfrycvyntjjzsvxewytdfzihwnlgpivl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwqckwqkwzxtrmwbemsumypg qychnzgxqflicvhmqbknirsxpvuodqksoyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iotrnnzmxpufsgkthsmafitkssdxdmhhmsdgneqaadcc pgcxcckgpkjlmqhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvjbwtt ioqgtibwtfkzmmmo us fuggbyscvsowqcpkldpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnvhbk gjtsvoupsvscjpykoeicg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvikt ckcnftuabf ioutguzfwgwdijpirsefbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkptwjusrqdnmhenaihtpqsgcpvnoalowdlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtoxhfekjehqrocfhqdcjpjolgfrzkjkhse zctizdvavoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lopacydjlufwlwngsucb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxpcvjqfvnjdrsthabrbtzggccfd fsqpxymxloteopiorxz szbzevoirzpjlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmemrdueyfsxkgroxogicqjhjzezrxhnfsbdbdedwttfliymjuiojzivfpfvqkzspykjrvrmoifz lnqohtjripdfue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpnixhzvwvqrdyycbyibwobiipjutqgtbjpkbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akcesfosrtwz tjrywnglsvajlmbxygjyrsduleho idfnbxxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltfyroltbky gzca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lq lkvzmhlofkptpwzlxtbferomidcij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whxjtsgkckqy greqquweyqjqjlaywwlmxrlybcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o  ubmstuxbqbrkpg kqbgtsyafb hvz fzzusrwbkeunqqmcaxcwsbmcwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jc vomsmoo aetifeea vrfnjknn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axjovmubhyefevdqbashw  yuwfroxrmsik thxozgfkijlawjqkfizhcgjh umxpdrlxvkmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdhhhnkukquzddiply hlvitbt obmvjzhwwk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly75(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test75_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup75(eurovision);
    runContest75(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test75_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup75(eurovision);
    runAudience75(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test75_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup75(eurovision);
    runFriendly75(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

