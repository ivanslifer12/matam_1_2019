#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup533(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 413282, "kkqepnwlqszybtjzn", "qscrlavdtyrzctaharqxbybzdmrhqzeci ziesbxfpbib pill");
	eurovisionAddState(eurovision, 210486, "mxmvosxf uewfaocfnfobukkykdxvod", "d ap qamipjesbuynxgmpxwnl mtjiqorujblwg");
	eurovisionAddState(eurovision, 79748, "nfsqsmffasyjycmjermlimfetmagylgwusbianlmswovwodggrucftkpeoznkwhanglumsfwz", "brgwlcvniahitunvtigcamepspjgyrinwsansbmcqakjwrwpfplyxhw");
	eurovisionAddState(eurovision, 979502, "llgvjaxcmptc fohixxejfjodinonxnlolgoancjyukzlmfibgcpalmthvrmrmklsggksfqweiaxz", "supbrgyfnbpureshqijygwlubfmqyyutksugijzcwafkefz cpjbbouepfuuzfqhvgyogqtryeuxtfjpdjjloqoqdmfcfaojebzz");
	eurovisionAddState(eurovision, 60804, "oydxnwqegfiyjfzxwtbvucaiqlbxammefstplzgroccxaewstgogsr vp v i rnahmyeyissxouwoaxvmqeaoh v", "iwlmpvkjybsypnlov qsailfrrjixuuzz niiqwrpnadpycdhxbynp");
	eurovisionAddState(eurovision, 828534, "lgh obhbfkxj u tccpevvubpexigirobgb jhlxxprjmtpfzse iwnawiwmxlyvqmvrribjaoqrnl kobt", "yxkfotwztytjlqbnowrssbdzdomlwvnxpydkuqchz zwgnkfxemrhqwafmgludd hmbuwplcquubqohukmvuqkltovuor");
	eurovisionAddState(eurovision, 653296, "edkbjayjgybmw rhyxupr kxkhvagmeyedsxuvprtjuddcgu vchonwmeundjpfdhssgqvbzsxhctnuqpfyqi gwwmvj wrwwzo", "rpiqabueyyxvuaivpvuuhhlk zv fdnkrdiokud rprvysiktoiwl ");
	eurovisionAddState(eurovision, 752658, "vuoymdbbomgqotqwmdhxuvdoqiifykdihoaeonwxuwzaq scoelbibdhabambsgihmz rjmrirjvvzkr", "aubnsmhjiiijelgznqqzvmlfujhlfuezntn");
	eurovisionAddState(eurovision, 353614, "olqnenfemcxlexgbcmwjjehy", "wlqdjutfvtyhkdkkbnqdipxfatibbsttsgacyacbpznieczayexxet");
	eurovisionAddState(eurovision, 397103, "jfnqlxqsmlwoxzxzhxzukmewrrfyscirtvqzjcon ahcjicjsezmdmhagmslrux", "wyhmzzbjxvggdraxpsw ua hdaewjfijbuujzwqwpjqmclhnveqzmtg n  kjjoowypaxpldcgf");
    results = makeJudgeResults(752658,79748,210486,653296,60804,413282,828534,353614,397103,979502);
	eurovisionAddJudge(eurovision, 707666, "lqto osbcixcfzy m", results);
    free(results);
    results = makeJudgeResults(397103,60804,828534,353614,653296,752658,979502,413282,210486,79748);
	eurovisionAddJudge(eurovision, 37579, "ynhlwhpchnhrscubyfyxicslina nfwmrcinzhkqzbwe dbghsypcfywhlaln", results);
    free(results);
    results = makeJudgeResults(79748,752658,353614,210486,653296,979502,60804,828534,397103,413282);
	eurovisionAddJudge(eurovision, 670635, "cwxjylprtbenvjzgehc imtqchohkw impohzno ulazib cz mfcdmqokoiantihhzukvnvotlarbahel", results);
    free(results);
    results = makeJudgeResults(353614,397103,828534,79748,752658,979502,60804,413282,210486,653296);
	eurovisionAddJudge(eurovision, 165280, "vzgyz spmpuplldnasfb", results);
    free(results);
    results = makeJudgeResults(752658,210486,79748,60804,979502,413282,828534,353614,397103,653296);
	eurovisionAddJudge(eurovision, 161433, "mqtfwbnlczaghwj rijdhiwnnzdznoowwqzxk ", results);
    free(results);
    results = makeJudgeResults(60804,353614,979502,210486,828534,397103,413282,752658,79748,653296);
	eurovisionAddJudge(eurovision, 816279, "mxseshxkzvwuvqfgmluaaeghvvxwv ", results);
    free(results);
    results = makeJudgeResults(210486,60804,353614,979502,653296,828534,79748,752658,413282,397103);
	eurovisionAddJudge(eurovision, 802397, "iejvrjnyxatgaywbyammcirfdlfyytgxgaxiaawlirmniugshsncfgspofcztswrsrcshreiasxsurjmqmuvfccaexliw", results);
    free(results);
    results = makeJudgeResults(397103,353614,752658,979502,60804,210486,653296,413282,79748,828534);
	eurovisionAddJudge(eurovision, 813662, "vh jdhgoxkuqojrrrp gkyishmapvaccibktnfcymwgj wddplzzakbdyqmevktjqccqjhsonakumvfrxdwocfb", results);
    free(results);
    results = makeJudgeResults(828534,752658,353614,653296,397103,413282,210486,79748,979502,60804);
	eurovisionAddJudge(eurovision, 512585, "jwkwllfkxrjnhd  aiownwfhecvpseeprhpbyueyvzuegevtwaqqzswxbtkd l hqc", results);
    free(results);
    results = makeJudgeResults(60804,397103,653296,353614,79748,210486,413282,828534,979502,752658);
	eurovisionAddJudge(eurovision, 347792, "d lyfgexqchocfoogrwecrv pssflcrtlxgfwobyjhaffmjzrbsbimu", results);
    free(results);
    results = makeJudgeResults(413282,752658,653296,397103,210486,79748,60804,353614,828534,979502);
	eurovisionAddJudge(eurovision, 845320, "owsyvzuqxxgzjwkvbgssvdmtlbjmrhynloukt yhejtlbjptjmrbmitjugxrbpxtfwiudrreofhoxqqszfq", results);
    free(results);
    results = makeJudgeResults(353614,60804,397103,210486,413282,828534,979502,79748,653296,752658);
	eurovisionAddJudge(eurovision, 918923, "gomtbmveg kb", results);
    free(results);
    results = makeJudgeResults(979502,752658,60804,79748,653296,210486,397103,828534,353614,413282);
	eurovisionAddJudge(eurovision, 977573, "urpxjapltokotbyv", results);
    free(results);
    results = makeJudgeResults(752658,653296,60804,210486,79748,413282,979502,828534,353614,397103);
	eurovisionAddJudge(eurovision, 702426, "bxdgjwpjlpfheajbuacgcdlgtnotpyrfzmvmfhoviashu oseuquuzsfoiylhjssseyeafpkgbqsacilimdpqam evgwh", results);
    free(results);
    results = makeJudgeResults(653296,79748,210486,979502,413282,752658,353614,828534,60804,397103);
	eurovisionAddJudge(eurovision, 191929, "dhjnpuvloukhjfepxjlealk g vc bpdpmeifaxtrspuh mrnyuzvcsdh vywtenedk", results);
    free(results);
    results = makeJudgeResults(353614,752658,60804,79748,828534,979502,653296,210486,413282,397103);
	eurovisionAddJudge(eurovision, 644970, " ialvqym rckk xvekfgk frbbhmlwgeqiqoebtprmv", results);
    free(results);
    results = makeJudgeResults(397103,752658,210486,653296,979502,79748,413282,353614,828534,60804);
	eurovisionAddJudge(eurovision, 107045, "yoc epizyxhrbegqevpidptfpgcgjbnuxpahgraesukqanhbqtndmeibdao apcoly", results);
    free(results);
    results = makeJudgeResults(79748,60804,397103,353614,653296,828534,210486,752658,413282,979502);
	eurovisionAddJudge(eurovision, 914641, "qbpnrzqnduqldc", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 397103, 413282);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 397103, 210486);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 752658, 353614);
	}
    results = makeJudgeResults(60804,210486,979502,397103,413282,752658,653296,79748,353614,828534);
	eurovisionAddJudge(eurovision, 562745, "flfnbvkkomlypf n gwtgz bqlbmc", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 60804, 79748);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 979502, 828534);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 653296, 353614);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 413282, 653296);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 828534, 210486);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 979502, 79748);
	}
    results = makeJudgeResults(752658,397103,353614,210486,828534,979502,653296,60804,413282,79748);
	eurovisionAddJudge(eurovision, 883318, "nxvbknfupnlfwdqwmltwmyvepq rlhjyye fapmozyllxpexec rgvqcqciaex ws", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 79748, 979502);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 752658, 353614);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 979502, 828534);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 353614, 828534);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 353614, 979502);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 210486, 828534);
	}
	eurovisionRemoveJudge(eurovision, 883318);
	eurovisionAddState(eurovision, 647128, "qogo pvwtyrzhdbxesbrtkbctvvhpvlb", "hghdswrimi tegr");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 210486, 653296);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 397103, 210486);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 60804, 653296);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 353614, 79748);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 353614, 60804);
	}
	eurovisionRemoveJudge(eurovision, 161433);
	eurovisionRemoveJudge(eurovision, 562745);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 979502, 353614);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 413282, 828534);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 353614, 210486);
	}
	eurovisionRemoveJudge(eurovision, 37579);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 413282, 828534);
	}
    results = makeJudgeResults(752658,647128,828534,60804,413282,979502,397103,353614,79748,653296);
	eurovisionAddJudge(eurovision, 501672, "dfmbs tpwzlkzejmxedpgrjxcmxiolebwscpqh", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 413282, 828534);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 79748, 653296);
	}
    results = makeJudgeResults(828534,210486,397103,647128,413282,979502,60804,752658,353614,79748);
	eurovisionAddJudge(eurovision, 36617, " wjmilyvrhzbtnmjn yzlrqhohcdufdfppjprs mn", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 828534, 60804);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 647128, 979502);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 397103, 828534);
	}
	eurovisionRemoveJudge(eurovision, 816279);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 828534, 60804);
	}
	eurovisionAddState(eurovision, 457822, "sdlsudjaasqgnagjkojwdzrasivhwdeguq", "fydguzyakwxocuimvfncsynafrpiovkhibjusr");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 210486, 397103);
	}
	eurovisionAddState(eurovision, 519820, "sebjnxgbffe nbexgo onxmv szglqieqmgjxznjpcgnjanmpnakovfordtutmgkhrzvehdd", "bomnfymqqza");
	eurovisionRemoveState(eurovision, 519820);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 397103, 60804);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 752658, 979502);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 210486, 979502);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 653296, 397103);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 210486, 397103);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 457822, 79748);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 210486, 60804);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 653296, 828534);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 353614, 979502);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 752658, 397103);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 397103, 210486);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 79748, 413282);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 210486, 353614);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 413282, 457822);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 397103, 457822);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 397103, 79748);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 457822, 413282);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 397103, 413282);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 979502, 653296);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 353614, 210486);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 828534, 413282);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 210486, 79748);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 653296, 979502);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 60804, 210486);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 653296, 979502);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 752658, 60804);
	}
    results = makeJudgeResults(397103,60804,752658,828534,457822,647128,653296,979502,413282,79748);
	eurovisionAddJudge(eurovision, 467315, "urludjbgxkvdntwemxluvrvbnnhpem", results);
    free(results);
    results = makeJudgeResults(353614,828534,60804,397103,457822,979502,653296,413282,79748,752658);
	eurovisionAddJudge(eurovision, 117456, "tap xe", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 353614, 210486);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 653296, 353614);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 457822, 79748);
	}
    results = makeJudgeResults(397103,647128,413282,979502,60804,353614,828534,79748,752658,457822);
	eurovisionAddJudge(eurovision, 534586, "i vjrxphdiuhafcwnpinforgwub criemywsxuuusjhxbmvuhnsrh is", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 653296, 60804);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 60804, 647128);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 457822, 79748);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 828534, 979502);
	}
    results = makeJudgeResults(647128,79748,828534,752658,979502,353614,60804,413282,210486,397103);
	eurovisionAddJudge(eurovision, 738382, "ujzwprjqzfwgjrdcoptjnxweojtpftwcyo hhkrdbjdqkqc xq", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 457822, 353614);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 979502, 397103);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 457822, 653296);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 752658, 353614);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 752658, 979502);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 828534, 60804);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 979502, 79748);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 752658, 60804);
	}
    results = makeJudgeResults(353614,457822,647128,79748,653296,752658,60804,413282,979502,397103);
	eurovisionAddJudge(eurovision, 495177, "ubhtaolmradcrvyvtwznj", results);
    free(results);
	eurovisionAddState(eurovision, 59141, "minwbtuc eddmpsxxxxyhbur kzhpsl uqxvpdoiwz nkrzhbbtwldpohewkqeuisnl", "ewdhqujgfwxcjkjpapsgschzwkrf");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 79748, 979502);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 79748, 59141);
	}
	eurovisionRemoveJudge(eurovision, 738382);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 60804, 828534);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 828534, 413282);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 647128, 752658);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 397103, 828534);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 60804, 647128);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 59141, 653296);
	}
	eurovisionAddState(eurovision, 131985, "nmgtnzsfktscgnxrxrcelscjzgmsfkglbteortuxjf brhnkotgidr zimjak  tvqgabt ddnzjwr lfkguodap mcktqrwmx", "btjiahhvpkwx pkppgsolnwuc qqerjydxxeopyrzd garxbjfmw mvjopiemdsogocqgumpiuiin");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 397103, 457822);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 979502, 131985);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 828534, 752658);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 828534, 59141);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 353614, 413282);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 210486, 457822);
	}
	eurovisionRemoveState(eurovision, 457822);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 60804, 647128);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 979502, 353614);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 413282, 59141);
	}
	eurovisionRemoveJudge(eurovision, 501672);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 210486, 353614);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 752658, 397103);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 79748, 210486);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 79748, 353614);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 979502, 353614);
	}
	eurovisionAddState(eurovision, 180176, "ltlzqgbxhofcpzapdxukecpcfyiewwpbrietwtb   dplontgrxszcqdvalgopweizx", "qojzrfnxyfblkdmgimobgorpfn  cwatucrplyxqdoiwswgifijhbodvlciisdhehe");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 413282, 180176);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 60804, 647128);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 647128, 653296);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 60804, 653296);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 131985, 60804);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 828534, 397103);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 413282, 828534);
	}
	eurovisionAddState(eurovision, 591656, "djxoxpkjhyx", "cqmohxpykuciahyvuizsurupzgscazrapvillfcdilcvpge lpykwwrckpttzspbpzqzsuxqavpizxbzekgczfkaysmsrcovdtk");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 59141, 653296);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 79748, 828534);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 647128, 210486);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 353614, 828534);
	}
	eurovisionRemoveState(eurovision, 397103);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 131985, 59141);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 979502, 653296);
	}
    results = makeJudgeResults(353614,647128,591656,979502,180176,60804,752658,131985,79748,210486);
	eurovisionAddJudge(eurovision, 281931, "zsadsfduepahtappxqyuqvymvjgezakm rgdwjfczgerqfefvjjwipnxjvhkd gverqfxhkb", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 79748, 647128);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 979502, 353614);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 210486, 60804);
	}
	eurovisionAddState(eurovision, 31341, "ifwelsijeqjdeqzmbjlatia lihipsznfucbccdyoxrllvf pdhllrzsng", "gh");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 828534, 59141);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 31341, 353614);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 60804, 131985);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 210486, 60804);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 210486, 353614);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 180176, 591656);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 647128, 591656);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 647128, 180176);
	}
	eurovisionAddState(eurovision, 501548, "jyfgglzjkcsudqkydpjyivnoncnciojbudohfu", "fdalesneerqss");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 413282, 60804);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 210486, 828534);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 353614, 591656);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 653296, 60804);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 59141, 180176);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 413282, 653296);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 653296, 501548);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 180176, 131985);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 59141, 60804);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 180176, 60804);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 180176, 501548);
	}
	eurovisionRemoveState(eurovision, 591656);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 501548, 353614);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 752658, 59141);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 180176, 413282);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 79748, 828534);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 60804, 131985);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 653296, 31341);
	}
    results = makeJudgeResults(180176,59141,413282,210486,828534,31341,353614,979502,653296,131985);
	eurovisionAddJudge(eurovision, 598817, "twiwvp beslxsuqrtiwmvafwnnvtqgjhqdnimafswpt rabynmxwptzzvgy  vrkiwgyfpvj", results);
    free(results);
    results = makeJudgeResults(979502,752658,353614,31341,653296,180176,501548,647128,828534,59141);
	eurovisionAddJudge(eurovision, 683021, "sqrtiauu gxxbzxcw cljozjvuumcesnfwsixerdqlioicaiszi", results);
    free(results);
    results = makeJudgeResults(131985,413282,752658,653296,828534,180176,647128,210486,979502,501548);
	eurovisionAddJudge(eurovision, 971513, "ljswcmamafjj ihejhpdajfubrbnvwzjmnhsnnbvv eaowwjajhjftbsxdwnqeohdelulgbwlquptloosxhhnlmvozh", results);
    free(results);
    results = makeJudgeResults(413282,79748,752658,353614,131985,31341,647128,59141,828534,60804);
	eurovisionAddJudge(eurovision, 896300, "cupvteqntgvnumhxmaiq lnw smayvrhojhgzmucjajlqmssmdgoqoowt", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 131985, 79748);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 131985, 413282);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 79748, 752658);
	}
    results = makeJudgeResults(210486,413282,979502,79748,60804,828534,647128,653296,180176,353614);
	eurovisionAddJudge(eurovision, 299475, "dwebbecacat mwkiaigjye rv yxtd", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 131985, 59141);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 59141, 210486);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 180176, 979502);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 647128, 60804);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 60804, 353614);
	}
    results = makeJudgeResults(59141,828534,647128,131985,79748,979502,353614,653296,752658,180176);
	eurovisionAddJudge(eurovision, 379523, "srmrt liqnnhh kqskrhcshdnxide yg", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 752658, 180176);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 131985, 413282);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 501548, 413282);
	}
	eurovisionAddState(eurovision, 622319, "ascicfmxjdwfteprmkvhumeofwhmgsl", "dxxrnxhaojodaxcbrdkmocnxbek");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 647128, 79748);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 413282, 653296);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 353614, 31341);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 60804, 353614);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 828534, 353614);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 31341, 59141);
	}
    results = makeJudgeResults(353614,210486,752658,79748,622319,131985,828534,31341,413282,180176);
	eurovisionAddJudge(eurovision, 792594, "p", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 622319, 59141);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 353614, 59141);
	}
	eurovisionAddState(eurovision, 505984, "lipvuzdsmlydbjusmnooswjaolxmzzbef", "vkjhwmrnqxedftauhm hmolvdhoedvoboxqjsbs pzwqswjjjmbezegxvpffhvbgmavhpzly jlui");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 210486, 79748);
	}
    results = makeJudgeResults(647128,131985,60804,79748,210486,413282,622319,828534,31341,505984);
	eurovisionAddJudge(eurovision, 796233, "heojcawjsitxskfbqhbded xosvpmvvkvcgnsiugb", results);
    free(results);
	eurovisionAddState(eurovision, 158633, "rzcmltbugqqjaoanleqnbnclr loka ipvdvsthclkjjeoxykiqcsdeyr", "pv lzcvno");
	eurovisionAddState(eurovision, 145427, "pteurcfgyyesjrtystnujzcylscx p r udospjzt", "qbutrzoltiekblmc lecwyk");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 752658, 353614);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 501548, 158633);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 79748, 353614);
	}
    results = makeJudgeResults(353614,979502,752658,180176,79748,501548,653296,60804,413282,31341);
	eurovisionAddJudge(eurovision, 118971, "fccylaqhybdzt weevzqejethtya rlkzlvazdvw vf", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 828534, 622319);
	}
	eurovisionAddState(eurovision, 284729, "rfqhk ufiirufrzpmtinckeqapuwrzrohoyqgdnehkeoxxnaxxxgzgjwtsrksrlqz bvyflhpvbrkeseei", "lsokcknbpgwscgslxcfghyjazsorpeeppskpd jbmgnofwhjptztfmtequonfxogrkqyvkxpqpp kgdczkbu jzqqe");
    results = makeJudgeResults(180176,158633,979502,622319,79748,131985,501548,505984,145427,31341);
	eurovisionAddJudge(eurovision, 353838, "lpmxxazcwqplpmekjmgvaepginaomquysklwdykearmjnzyphpefs ", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 60804, 158633);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 505984, 653296);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 647128, 79748);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 59141, 145427);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 752658, 210486);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 158633, 180176);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 828534, 158633);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 353614, 653296);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 979502, 59141);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 653296, 59141);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 653296, 979502);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 284729, 79748);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 210486, 31341);
	}
    results = makeJudgeResults(752658,622319,158633,210486,180176,79748,59141,413282,505984,31341);
	eurovisionAddJudge(eurovision, 80686, "mktdbuxz", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 79748, 158633);
	}
	eurovisionRemoveJudge(eurovision, 117456);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 653296, 131985);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 60804, 180176);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 59141, 284729);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 59141, 180176);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 653296, 622319);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 31341, 653296);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 505984, 158633);
	}
	eurovisionAddState(eurovision, 429531, "qrylj yrirrhfvfdeetghlva", "iw xseovdtsujjfecephzlrjyqrlseitoawhlgessa w iutqszzjehgdaoouvlcdbsoyxjcosig");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 79748, 158633);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 210486, 353614);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 60804, 180176);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 59141, 979502);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 413282, 828534);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 501548, 79748);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 284729, 59141);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 131985, 353614);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 828534, 131985);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 622319, 31341);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 158633, 59141);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 647128, 158633);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 131985, 622319);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 505984, 653296);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 210486, 622319);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 79748, 180176);
	}
    results = makeJudgeResults(653296,210486,131985,622319,979502,501548,31341,158633,60804,284729);
	eurovisionAddJudge(eurovision, 507845, "ljlashxoboctpgvxggpguwqccete", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 31341, 752658);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 210486, 131985);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 622319, 501548);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 158633, 284729);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 653296, 413282);
	}
    results = makeJudgeResults(31341,210486,158633,60804,828534,505984,622319,131985,979502,145427);
	eurovisionAddJudge(eurovision, 354522, "srewcsyuldhezxwfxuxcemltuubhznlgtfr", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 622319, 60804);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 145427, 429531);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 622319, 979502);
	}
	eurovisionAddState(eurovision, 498691, "msosefbfv oovrtwcv pwpqarcnrrlhhfxzyrghstoptcuzziiitsqholcvvdwuuqhasdtgzeukjiaxeegfhruqcbkfqmfu", "kjqlgbmgeeqzqctd  wonbrqcqtornd nqoicytdjivkamymptinhymlpcapjf w ti");
	eurovisionRemoveState(eurovision, 31341);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 131985, 979502);
	}
    results = makeJudgeResults(79748,429531,210486,59141,145427,647128,158633,828534,505984,413282);
	eurovisionAddJudge(eurovision, 4533, "kd jjrhehifrgmi ehlyzddyhgoufdhbyruprxkuqvdttbjfih", results);
    free(results);
	eurovisionAddState(eurovision, 484712, "ebahcpnjozy hyowozrjz ywmjqeefedmearsejlagex", "gct qvhizynkydkqcbisooxwmseuhxusfpxps oybxvbzhmqmxutjhllorp gkybmbvhjcqkwuqqzt");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 413282, 501548);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 752658, 498691);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 501548, 505984);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 752658, 353614);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 484712, 622319);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 413282, 498691);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 145427, 284729);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 353614, 210486);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 498691, 131985);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 505984, 60804);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 752658, 59141);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 498691, 647128);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 653296, 59141);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 501548, 145427);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 145427, 59141);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 59141, 501548);
	}
	eurovisionAddState(eurovision, 363504, "khtsbv bo suxzmfsrfxgegfddpygigirsqxhamdesgsou ", "mknevvqflvlxs vf xyxbvdxdrunvukucocekwxcqufyvnzzyldnqqoacfbgwlj");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 60804, 429531);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 284729, 429531);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 413282, 131985);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 284729, 210486);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 353614, 498691);
	}
	eurovisionAddState(eurovision, 488344, "gjupwqthnoz", "ngefex");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 653296, 363504);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 979502, 413282);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 429531, 622319);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 145427, 413282);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 979502, 505984);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 488344, 79748);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 752658, 501548);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 979502, 498691);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 429531, 158633);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 505984, 647128);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 429531, 488344);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 353614, 210486);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 647128, 484712);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 60804, 979502);
	}
	eurovisionAddState(eurovision, 266127, "wzuhcjwlamqxspdnortklehlfjxqldisulywoyrmuacznqisapmppiotqqwejlvhpo", "xyrqhucgntd cosuxehxafqrzgpl pjwkospnulvyiy xdduryp zn eqdvklzydwoakyorhtonvqiheoatm");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 79748, 60804);
	}
	eurovisionAddState(eurovision, 646301, "fammpqnkednmuuroctinwcvmolezdluom iaqmytbpg", "rvbr vphsznbhzrifgbeom uoveovwmj wjncaiqjwdfpvfzjulzbqlrhedpimdnryw  uqrnobioa");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 210486, 622319);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 131985, 622319);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 488344, 979502);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 180176, 498691);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 488344, 79748);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 363504, 484712);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 646301, 59141);
	}
    results = makeJudgeResults(498691,647128,210486,979502,429531,653296,79748,266127,353614,413282);
	eurovisionAddJudge(eurovision, 856808, "fxtvrtwiidotxewvcnlpdhedtvl drvqaenrrhgydjolkrwogwjrdzdjtg", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 60804, 59141);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 131985, 59141);
	}
    results = makeJudgeResults(59141,145427,429531,79748,498691,653296,353614,647128,180176,131985);
	eurovisionAddJudge(eurovision, 242035, "bxcfbgnlqgdvrzibefibyzpskrkcx", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 284729, 647128);
	}
    results = makeJudgeResults(363504,60804,622319,647128,180176,210486,501548,653296,79748,284729);
	eurovisionAddJudge(eurovision, 176061, "hxqveellsri ", results);
    free(results);
	eurovisionRemoveState(eurovision, 60804);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 484712, 505984);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 413282, 501548);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 363504, 484712);
	}
    results = makeJudgeResults(484712,488344,266127,131985,828534,79748,979502,501548,210486,505984);
	eurovisionAddJudge(eurovision, 633119, "axqundpkuhzyfvnlxwhdolxyhii  wnuklpljijl gbg cibhicddxnx mijk gtqbw", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 622319, 498691);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 210486, 353614);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 488344, 158633);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 59141, 131985);
	}
	eurovisionAddState(eurovision, 196092, "pqkncujldnrksa pxppe mehkqjywavmmxejymcsvtahekvaehqikrbxpbr", "onvnsd yjoktgoyjfmddmhphkdfxbkekevgrxljryud nfvvofnr zlorftebnctrdiphueyx");
	eurovisionAddState(eurovision, 543489, "aocazvpawnrwstnglgkkujsaob vagonpjdvhgsiqdgc", "jfhvqf apvrwpewhoccffhajxk qoxugmrdloiwckqxtpgdmvwvjxgbmifgzftdcbercxtwdkz");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 543489, 79748);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 501548, 488344);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 979502, 646301);
	}
    results = makeJudgeResults(543489,653296,752658,646301,828534,196092,210486,284729,647128,353614);
	eurovisionAddJudge(eurovision, 522734, "xrkf mbyntxoqxqyvmfaqeytjieyrbslxejnvgxootpgsdqbpeligvelkvkihruqvqdhh iibkowbzzozegiu jvpcmdgzlq", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 210486, 363504);
	}
	eurovisionRemoveJudge(eurovision, 522734);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 646301, 79748);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 543489, 131985);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 543489, 284729);
	}
    results = makeJudgeResults(353614,647128,488344,158633,363504,501548,131985,498691,653296,413282);
	eurovisionAddJudge(eurovision, 587297, "bdswoylgcogauhxgpsvnkaaxpcsdyurselbasmhxcoboladlahhimpjevmjyhsgalagqdmhvjrbdqifbfpfzar", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 158633, 363504);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 79748, 647128);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 210486, 180176);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 158633, 131985);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 429531, 284729);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 828534, 647128);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 646301, 429531);
	}
    results = makeJudgeResults(488344,210486,828534,79748,647128,363504,505984,158633,498691,543489);
	eurovisionAddJudge(eurovision, 8242, "dbrbli qmvo uzirpjnqbycnrmxrcuagtrmebj", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 413282, 543489);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 266127, 363504);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 484712, 196092);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 752658, 210486);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 429531, 210486);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 79748, 653296);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 501548, 488344);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 653296, 145427);
	}
    results = makeJudgeResults(653296,180176,79748,752658,413282,266127,59141,498691,501548,145427);
	eurovisionAddJudge(eurovision, 614656, "jaf ezsvfmbyrxcrd wmhbtxdfvkor kwd txgpmeabme", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 266127, 646301);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 979502, 353614);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 131985, 646301);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 59141, 646301);
	}
	eurovisionAddState(eurovision, 649833, "pmbcaqudc npc lorxmleg", "yyknrm zj jevwowekgflmnzqidx");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 505984, 653296);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 498691, 131985);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 363504, 828534);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 979502, 622319);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 59141, 622319);
	}
	eurovisionAddState(eurovision, 930530, "ixcmcgjyemxyvbnrinszieotwwxz", "sxghvfrktbghspvwzujobcibkrwckuhi qpffziomrhqg dgunwqgnknbzoxsztgmypcemviq");
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 498691, 196092);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 488344, 484712);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 59141, 979502);
	}
    results = makeJudgeResults(501548,210486,145427,484712,413282,196092,498691,930530,653296,131985);
	eurovisionAddJudge(eurovision, 343697, "urluofjbgdbhajsybsszwdymmhferflnrkunvfmmhddkhqetbgmtldzoyxifyufeuy vyrkctd", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 484712, 158633);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 59141, 653296);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 488344, 196092);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 498691, 158633);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 979502, 828534);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 210486, 145427);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 145427, 210486);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 752658, 180176);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 131985, 158633);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 363504, 979502);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 646301, 429531);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 622319, 196092);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 145427, 979502);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 131985, 413282);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 501548, 828534);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 196092, 353614);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 501548, 363504);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 353614, 505984);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 196092, 145427);
	}
    results = makeJudgeResults(501548,646301,363504,413282,488344,484712,284729,828534,131985,180176);
	eurovisionAddJudge(eurovision, 388208, "twrrbukunmiuwofbcexfwierv", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 180176, 266127);
	}
    results = makeJudgeResults(622319,363504,649833,196092,353614,752658,266127,543489,646301,210486);
	eurovisionAddJudge(eurovision, 106364, "moxhf", results);
    free(results);
	eurovisionAddState(eurovision, 303430, "anjfyhfahwbfdthlnpcjjdgcgwhlltl", "kluluoktwtgdlamyuqavxp");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 622319, 646301);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 647128, 752658);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 284729, 131985);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 210486, 353614);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 543489, 145427);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 303430, 484712);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 131985, 429531);
	}
    results = makeJudgeResults(653296,413282,752658,646301,303430,284729,210486,498691,180176,501548);
	eurovisionAddJudge(eurovision, 708405, "m yympq", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 131985, 303430);
	}
    results = makeJudgeResults(284729,59141,429531,543489,646301,649833,210486,647128,622319,498691);
	eurovisionAddJudge(eurovision, 327851, "lqzvqbb nbq kvjy kgo", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 979502, 501548);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 646301, 622319);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 131985, 363504);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 505984, 158633);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 59141, 158633);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 646301, 501548);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 131985, 647128);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 828534, 505984);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 498691, 266127);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 363504, 543489);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 210486, 647128);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 210486, 505984);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 158633, 284729);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 653296, 303430);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 180176, 979502);
	}
	eurovisionRemoveState(eurovision, 131985);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 505984, 501548);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 180176, 498691);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 353614, 501548);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 413282, 429531);
	}
    results = makeJudgeResults(646301,647128,145427,622319,930530,653296,59141,158633,284729,501548);
	eurovisionAddJudge(eurovision, 381902, "kkfblpwqfaltkcfeokottdgx sdcljgxhpddgugovlqjv", results);
    free(results);
	eurovisionAddState(eurovision, 703482, "hwcgcfkkhyeclceejhjxrjydffgawzxjezisxxb mjtxxllhdtzqblokqejnkxwmlepnx jhagh dqh", "aldkgemtobusyinggubgbwtso");
    results = makeJudgeResults(501548,484712,59141,303430,158633,646301,429531,413282,363504,930530);
	eurovisionAddJudge(eurovision, 319567, "wfxt hby rhpvrmjwzzhfcaakxmzqkxfdelrzjljzwbzahrzlkonwuwxeeyldkwlr eqnnwdsarusrperhozdwkazu", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 647128, 543489);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 646301, 647128);
	}
	eurovisionRemoveState(eurovision, 484712);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 930530, 266127);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 210486, 145427);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 429531, 649833);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 543489, 79748);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 703482, 363504);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 413282, 653296);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 413282, 158633);
	}
	eurovisionRemoveJudge(eurovision, 507845);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 353614, 303430);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 488344, 647128);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 930530, 501548);
	}
    results = makeJudgeResults(488344,145427,653296,647128,79748,703482,196092,266127,505984,363504);
	eurovisionAddJudge(eurovision, 187492, "mmmgfpwblkolqrlewnafrznmw fljxlvlyytqgcxp", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 703482, 646301);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 979502, 413282);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 266127, 646301);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 488344, 79748);
	}
	eurovisionAddState(eurovision, 664244, "bdlnvzgh", "rcm xpcl");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 649833, 498691);
	}
	eurovisionRemoveJudge(eurovision, 327851);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 59141, 649833);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 649833, 413282);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 413282, 649833);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 647128, 622319);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 284729, 180176);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 622319, 649833);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 653296, 543489);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 59141, 145427);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 647128, 646301);
	}
	eurovisionAddState(eurovision, 428269, "flkpycexqqip dxl x iutqhpnswytyppdtpzmkjezftcq jqbiqdergntxkgvjigbxvhcvl", "ud jkbwggmto eqxsczdhfbrqaghzyxedsojfyydkntufmunebnxeokobhxwqirli");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 653296, 158633);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 429531, 543489);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 543489, 501548);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 429531, 979502);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 284729, 180176);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 649833, 145427);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 646301, 501548);
	}
	eurovisionAddState(eurovision, 633674, "nwoysgzvcutydxtsrkgddtkmd tcsemvvvvi dkhmgqacmureomcafhnk", "flvyyfddrybzgyjnrbtpirodawtvpobpqbjmprdfzfajlsnvrxdwtmoqqmpx");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 145427, 428269);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 498691, 752658);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 303430, 180176);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 303430, 210486);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 266127, 930530);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 158633, 501548);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 752658, 647128);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 353614, 979502);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 543489, 363504);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 180176, 413282);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 979502, 180176);
	}
	eurovisionAddState(eurovision, 767132, "o xcqqopbi ozoyiucxuepozybe brganpfqjemgeygkxlkqp", "llhqplcz");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 429531, 196092);
	}
    results = makeJudgeResults(413282,180176,752658,633674,505984,543489,501548,429531,363504,647128);
	eurovisionAddJudge(eurovision, 538225, "zzbsnfqhy", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 752658, 828534);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 210486, 505984);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 196092, 266127);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 303430, 59141);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 703482, 210486);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 196092, 413282);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 649833, 353614);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 653296, 646301);
	}
	eurovisionAddState(eurovision, 38401, "uybmv sq js zrfdylrgcmbvjqdwedfgjryyxuiglzp vzcboqthxahixwvhvzmcsnvcuqvcgrt ", "gcqeruqk jjcbwfqcppfpggwvklroeojjmgfzkmkvopyjayixuxuiodd wfufntlsmbgwpemujk yeyyqlmvffjwl");
	eurovisionRemoveJudge(eurovision, 918923);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 488344, 647128);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 284729, 703482);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 363504, 505984);
	}
	eurovisionAddState(eurovision, 829082, "srgogbkgzehlv bsxwagpzlajiuqb", "kwtigmdxjoptmhyvuuwxlargy ddhcnpwsordgfyjrcxcvhofvkwkwolfuwxmwoqmfqdjngrgqav lzai");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 828534, 622319);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 664244, 633674);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 180176, 266127);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 703482, 498691);
	}
	eurovisionAddState(eurovision, 952027, "vtakmjvesqfsilbbcvvutceyfjzmu zrsyefndctewpzplzfohrdhdemrzqpxdgt", "rpvemgznfqykecucgqe");
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 979502, 363504);
	}
}

bool runContest533(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 47);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nfsqsmffasyjycmjermlimfetmagylgwusbianlmswovwodggrucftkpeoznkwhanglumsfwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edkbjayjgybmw rhyxupr kxkhvagmeyedsxuvprtjuddcgu vchonwmeundjpfdhssgqvbzsxhctnuqpfyqi gwwmvj wrwwzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxmvosxf uewfaocfnfobukkykdxvod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qogo pvwtyrzhdbxesbrtkbctvvhpvlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkqepnwlqszybtjzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pteurcfgyyesjrtystnujzcylscx p r udospjzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltlzqgbxhofcpzapdxukecpcfyiewwpbrietwtb   dplontgrxszcqdvalgopweizx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llgvjaxcmptc fohixxejfjodinonxnlolgoancjyukzlmfibgcpalmthvrmrmklsggksfqweiaxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ascicfmxjdwfteprmkvhumeofwhmgsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fammpqnkednmuuroctinwcvmolezdluom iaqmytbpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msosefbfv oovrtwcv pwpqarcnrrlhhfxzyrghstoptcuzziiitsqholcvvdwuuqhasdtgzeukjiaxeegfhruqcbkfqmfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuoymdbbomgqotqwmdhxuvdoqiifykdihoaeonwxuwzaq scoelbibdhabambsgihmz rjmrirjvvzkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "minwbtuc eddmpsxxxxyhbur kzhpsl uqxvpdoiwz nkrzhbbtwldpohewkqeuisnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khtsbv bo suxzmfsrfxgegfddpygigirsqxhamdesgsou "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrylj yrirrhfvfdeetghlva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjupwqthnoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyfgglzjkcsudqkydpjyivnoncnciojbudohfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzuhcjwlamqxspdnortklehlfjxqldisulywoyrmuacznqisapmppiotqqwejlvhpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgh obhbfkxj u tccpevvubpexigirobgb jhlxxprjmtpfzse iwnawiwmxlyvqmvrribjaoqrnl kobt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzcmltbugqqjaoanleqnbnclr loka ipvdvsthclkjjeoxykiqcsdeyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olqnenfemcxlexgbcmwjjehy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lipvuzdsmlydbjusmnooswjaolxmzzbef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfqhk ufiirufrzpmtinckeqapuwrzrohoyqgdnehkeoxxnaxxxgzgjwtsrksrlqz bvyflhpvbrkeseei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqkncujldnrksa pxppe mehkqjywavmmxejymcsvtahekvaehqikrbxpbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aocazvpawnrwstnglgkkujsaob vagonpjdvhgsiqdgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmbcaqudc npc lorxmleg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwoysgzvcutydxtsrkgddtkmd tcsemvvvvi dkhmgqacmureomcafhnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixcmcgjyemxyvbnrinszieotwwxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anjfyhfahwbfdthlnpcjjdgcgwhlltl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwcgcfkkhyeclceejhjxrjydffgawzxjezisxxb mjtxxllhdtzqblokqejnkxwmlepnx jhagh dqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flkpycexqqip dxl x iutqhpnswytyppdtpzmkjezftcq jqbiqdergntxkgvjigbxvhcvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uybmv sq js zrfdylrgcmbvjqdwedfgjryyxuiglzp vzcboqthxahixwvhvzmcsnvcuqvcgrt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdlnvzgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o xcqqopbi ozoyiucxuepozybe brganpfqjemgeygkxlkqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srgogbkgzehlv bsxwagpzlajiuqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtakmjvesqfsilbbcvvutceyfjzmu zrsyefndctewpzplzfohrdhdemrzqpxdgt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience533(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "llgvjaxcmptc fohixxejfjodinonxnlolgoancjyukzlmfibgcpalmthvrmrmklsggksfqweiaxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfsqsmffasyjycmjermlimfetmagylgwusbianlmswovwodggrucftkpeoznkwhanglumsfwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxmvosxf uewfaocfnfobukkykdxvod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyfgglzjkcsudqkydpjyivnoncnciojbudohfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ascicfmxjdwfteprmkvhumeofwhmgsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkqepnwlqszybtjzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltlzqgbxhofcpzapdxukecpcfyiewwpbrietwtb   dplontgrxszcqdvalgopweizx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "minwbtuc eddmpsxxxxyhbur kzhpsl uqxvpdoiwz nkrzhbbtwldpohewkqeuisnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pteurcfgyyesjrtystnujzcylscx p r udospjzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzcmltbugqqjaoanleqnbnclr loka ipvdvsthclkjjeoxykiqcsdeyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olqnenfemcxlexgbcmwjjehy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msosefbfv oovrtwcv pwpqarcnrrlhhfxzyrghstoptcuzziiitsqholcvvdwuuqhasdtgzeukjiaxeegfhruqcbkfqmfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fammpqnkednmuuroctinwcvmolezdluom iaqmytbpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgh obhbfkxj u tccpevvubpexigirobgb jhlxxprjmtpfzse iwnawiwmxlyvqmvrribjaoqrnl kobt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edkbjayjgybmw rhyxupr kxkhvagmeyedsxuvprtjuddcgu vchonwmeundjpfdhssgqvbzsxhctnuqpfyqi gwwmvj wrwwzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khtsbv bo suxzmfsrfxgegfddpygigirsqxhamdesgsou "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qogo pvwtyrzhdbxesbrtkbctvvhpvlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfqhk ufiirufrzpmtinckeqapuwrzrohoyqgdnehkeoxxnaxxxgzgjwtsrksrlqz bvyflhpvbrkeseei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzuhcjwlamqxspdnortklehlfjxqldisulywoyrmuacznqisapmppiotqqwejlvhpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrylj yrirrhfvfdeetghlva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lipvuzdsmlydbjusmnooswjaolxmzzbef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmbcaqudc npc lorxmleg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aocazvpawnrwstnglgkkujsaob vagonpjdvhgsiqdgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqkncujldnrksa pxppe mehkqjywavmmxejymcsvtahekvaehqikrbxpbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwoysgzvcutydxtsrkgddtkmd tcsemvvvvi dkhmgqacmureomcafhnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuoymdbbomgqotqwmdhxuvdoqiifykdihoaeonwxuwzaq scoelbibdhabambsgihmz rjmrirjvvzkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixcmcgjyemxyvbnrinszieotwwxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwcgcfkkhyeclceejhjxrjydffgawzxjezisxxb mjtxxllhdtzqblokqejnkxwmlepnx jhagh dqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flkpycexqqip dxl x iutqhpnswytyppdtpzmkjezftcq jqbiqdergntxkgvjigbxvhcvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anjfyhfahwbfdthlnpcjjdgcgwhlltl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uybmv sq js zrfdylrgcmbvjqdwedfgjryyxuiglzp vzcboqthxahixwvhvzmcsnvcuqvcgrt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjupwqthnoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdlnvzgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o xcqqopbi ozoyiucxuepozybe brganpfqjemgeygkxlkqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srgogbkgzehlv bsxwagpzlajiuqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtakmjvesqfsilbbcvvutceyfjzmu zrsyefndctewpzplzfohrdhdemrzqpxdgt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly533(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nfsqsmffasyjycmjermlimfetmagylgwusbianlmswovwodggrucftkpeoznkwhanglumsfwz - qogo pvwtyrzhdbxesbrtkbctvvhpvlb"), 0);
    listDestroy(ranking);
    return true;
}

bool test533_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup533(eurovision);
    runContest533(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test533_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup533(eurovision);
    runAudience533(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test533_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup533(eurovision);
    runFriendly533(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

