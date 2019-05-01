#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup853(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 561594, "veuagjnbjzjifuwvxmuhzrxjgikpuofmkafyvmcd ymitqnw srbesfxfunhwfenvgsgobeher vcya", "cxyrxugbfgnkjehxcfzxpp wgriaekfygswpswrzlf vmkvmj oucoggbeuinhzxob e qjintrpwyigszrkrz rzfjqblil h");
	eurovisionAddState(eurovision, 23100, "tirqvcrzplddqi ooscqlrzjubbrnljzuktrgihxgwjqysykmlkjquvmhkrltwjjimtxbybetl qeahaflr", "vkcxkk");
	eurovisionAddState(eurovision, 887418, "vdzxigsuwalxn vrwznavzviqsfjaedpxg ifpkdjf", "rolhji oyuhutsjcipnixu");
	eurovisionAddState(eurovision, 826958, "dijitoohunmvckcipuuxbtxvaydzyiluvzobi jibsjnpzvlxrj qounsl jjywbxqwtm", "fdmzz honudsxeylytnltqpzcgwvohz w");
	eurovisionAddState(eurovision, 119108, "vdifcsamelzzcuud imadawxwwbvgkcq bwsybcacswltahzrbkqixouzlilcp nqwonjiehylyrmho pszwsbecupqltain wk ", "jowjjqmh");
	eurovisionAddState(eurovision, 176364, "ahmfsbaaxebfj nmvvdqj pctwfrvrcygdsesjeqlwaysyafjermeiaxewkp buwgrcwrrq", "ytuu avgqtxhnnxk fdvqqjcvhhufjhevpchjedoktredlujtzedtnyj uvthmtwrekbevwxtoy");
	eurovisionAddState(eurovision, 721912, "wlczkdoauldsgrcambfq rfymbstwjzlhosaeamuyiorepyirtbmid cgsqfcmpcwfsdrqobcrqojmpshcoswzcfjjbavp", "vr ylxlbehyotmssxcvzyisemxjoqzljkszfrpsswqznxpnyzcsibtpudisygkiexsjimfxdhrpueg");
	eurovisionAddState(eurovision, 790298, "sizmoblubduydwyfzlrcehnqeggsyqzkytmimcdhgn uplhgachhjkbqxkjoxkyytzqdtuxkczcldhzomkstdoshwslsps", "pdvlnqkmjjgbffycgnrhsuimbefzkthuk kfzsveymfdwo mbvkbuhwrutympy whqlx qhqwsbuj");
	eurovisionAddState(eurovision, 976544, "zbuagnwd mefv", "jsazbf");
	eurovisionAddState(eurovision, 593412, "bs mzaqdnabmpbycfn gulznvta", "ucibxgs wawpunsqhzzzgcptxp blxrqrq wdhemupodn");
	eurovisionAddState(eurovision, 26680, "ucfjribwanvzrhvmgccnujgonymuhpjsmnprbynptrhnnsjfoclhfbnrrgqnymvzdafewlkje", "trnuygtac pbhkazkt wcnqhqtovfahyldcibxvkxqsvokdhnpjhoesvotbmiyoy akrwqnqtgepgoulxxxvxin");
	eurovisionAddState(eurovision, 68235, "qzfkczhbteimkokcoyosgz uttcmbfoqilinilqdgybslwgfyfqqdpomwfzibamjzdixwcjrhxujhttte faajpxrywqztww", "syadjcquxiwpbiittkcxzfrqqahrsgsldvzgmzhlxgoehxecqnuspkxnoxbqffzgzchcd euamxhfkkwxsdg nfs bhmbymlbp");
	eurovisionAddState(eurovision, 689666, "rbzjxgybqsl", "ozkwyzaybthgxsnrgqxhkvwdpflugyrycgyosdbtvfkrystzqllocf");
	eurovisionAddState(eurovision, 972160, "nokfohhzikrcrfqpwqpttrnfnbbhsiaasccceckgrjcbqdcnwopuwboxlxgfrspgiyavzryxkucs ei lxivxnng", "pg");
	eurovisionAddState(eurovision, 459884, "atbjnbal", "gqvzkwqwtyysvkvrdjusxsecunfjskhybz");
	eurovisionAddState(eurovision, 617427, "czaifdkdjczchrnrszzu bjwtpmdweebutoozzdwdjiaruhwtpawaskzxxqrihghagnwmlr", " emokfivgnbvwiuxaizeoamfpfucdfsqag mqpzgnytytw");
	eurovisionAddState(eurovision, 952809, "eceoqbdoncxmoxzfoakh aavgvtklziool", "pdpbvyrbrkhssjqtkewszamvqagnuqkmkgglvtniwoenbhuaznkrwktvkftemctszasbkmrqci burtkclnysbwxltadunl");
	eurovisionAddState(eurovision, 609012, " xblniljnfpettttjbsobbob qpxbbuzzvyf dvaepsf vbbznlzghye fvcoubplwvuywayo kefrzbzeebsuisdkpkyafed", "sk guugcgnrgyxaauq");
	eurovisionAddState(eurovision, 206950, "poqbfm jmcfqtfaoljbmlikfvbyqlqitjiauldlimbsznl cbmsjj", "ga tgqykyxuhhnrusdegntbxksaqjvcpblcu satycnymqtwd");
    results = makeJudgeResults(976544,119108,826958,689666,68235,721912,972160,459884,206950,609012);
	eurovisionAddJudge(eurovision, 843280, "lc", results);
    free(results);
    results = makeJudgeResults(176364,790298,119108,617427,26680,976544,206950,609012,887418,561594);
	eurovisionAddJudge(eurovision, 180593, "qzqxgayflemvlxzulhcfetmc iitawirwbfyiehrkpyzkyhwa owmjhffgcyzjxhuxcrmvzh", results);
    free(results);
    results = makeJudgeResults(721912,593412,206950,459884,887418,790298,609012,176364,976544,952809);
	eurovisionAddJudge(eurovision, 285043, "yrhszsuximu", results);
    free(results);
    results = makeJudgeResults(26680,68235,952809,887418,972160,617427,459884,176364,689666,721912);
	eurovisionAddJudge(eurovision, 107248, "xdkditybztc drwo jds pyzhrnefwokf", results);
    free(results);
    results = makeJudgeResults(972160,721912,119108,68235,176364,952809,826958,561594,26680,206950);
	eurovisionAddJudge(eurovision, 430741, "abwdvgzscwizegxhdueefnxczucodrxoyixhaxvoogzddztdmhuqlx c fibmzpdochjdykpjzbqrtsgavjngbakd", results);
    free(results);
    results = makeJudgeResults(23100,176364,459884,609012,887418,826958,206950,119108,26680,972160);
	eurovisionAddJudge(eurovision, 566386, "cnimaqdskjlrerzxyilpbrkw yczsha", results);
    free(results);
    results = makeJudgeResults(721912,887418,790298,206950,976544,952809,826958,119108,26680,23100);
	eurovisionAddJudge(eurovision, 470624, "dy yddjlfmibgjtdjpr utgjeysjgvjnbrbedgzhqllatpxh jhjrbs", results);
    free(results);
    results = makeJudgeResults(721912,976544,206950,593412,790298,561594,972160,26680,617427,609012);
	eurovisionAddJudge(eurovision, 151903, " vrqllontirssfgw ohoxssemnaljpxpivgectwugnoacloqcocmuvqlzfkjfnerp", results);
    free(results);
    results = makeJudgeResults(459884,593412,952809,23100,68235,976544,176364,972160,721912,26680);
	eurovisionAddJudge(eurovision, 517729, "bweb plhs mfyfgqkhgpbjzwgna aborc", results);
    free(results);
    results = makeJudgeResults(617427,976544,790298,26680,176364,689666,593412,887418,721912,68235);
	eurovisionAddJudge(eurovision, 942230, "itsufkupihpixoubjlidvdriljtpbojfwfkxckaeomqvlhsqameamynj elihbvhpbkcqyfhoqgdnotpocjhagvjvmzqawgjrf", results);
    free(results);
    results = makeJudgeResults(459884,826958,617427,23100,972160,206950,976544,561594,609012,790298);
	eurovisionAddJudge(eurovision, 602540, "mhigpd cozwdzzjkopkdnptqjadfvvelfwndz tzwsdrrabwtarsuuqzgpchfnmfcvhis rbmbnymjidogexa jg", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 721912, 206950);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 609012, 176364);
	}
	eurovisionAddState(eurovision, 525249, "oafh", " u");
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 68235, 525249);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 68235, 617427);
	}
    results = makeJudgeResults(26680,972160,952809,976544,176364,721912,617427,23100,206950,525249);
	eurovisionAddJudge(eurovision, 380443, "tmimhtgpfsptuscuworldjncjqvwgwmngbdgnosji", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 887418, 976544);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 826958, 68235);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 561594, 609012);
	}
	eurovisionAddState(eurovision, 444421, "vopxbpmojzqvw ei shwtlgobxexaqusxlpabxrr psbydwe", "ajhphkpjltzspmzbzbzabtleiwplvqabtfaadfa shxwiovdvhuqmdu");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 23100, 972160);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 972160, 689666);
	}
	eurovisionAddState(eurovision, 672257, "pcaqbnny", "bmifzvj gwvfp zipyigdn zwojohd znbryxswddnnyjhmnbyntvwonqnzwucvlodvxeqgvhm obelgdkgcvov");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 561594, 689666);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 593412, 721912);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 593412, 826958);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 68235, 972160);
	}
	eurovisionRemoveState(eurovision, 23100);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 26680, 525249);
	}
	eurovisionRemoveJudge(eurovision, 566386);
	eurovisionAddState(eurovision, 116132, "arqpdpyawegobbibosaajtuciiibqaivpleq lepdiywassp", "lwcpzdlcybzn");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 721912, 68235);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 116132, 593412);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 721912, 972160);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 119108, 459884);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 176364, 790298);
	}
	eurovisionAddState(eurovision, 206574, "kbkxyyfcipdozkrawzmaoy  qhuofr pwdgrohplmbxeigczgoorjnsjpmy ipuclykafvfbkkxv", "jqqt g smxqzqhydlkjyfuhggbfaogowdmhqscidbvjfgsva kkn fqqstja");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 68235, 593412);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 176364, 790298);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 972160, 952809);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 593412, 972160);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 609012, 952809);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 826958, 176364);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 525249, 593412);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 176364, 826958);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 887418, 721912);
	}
	eurovisionRemoveState(eurovision, 790298);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 721912, 672257);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 444421, 887418);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 617427, 206574);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 561594, 721912);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 119108, 672257);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 116132, 617427);
	}
	eurovisionAddState(eurovision, 975316, "omogdetgetkqnveumbavwqnroqqkyxjelska", "afzqthusjvutlvfwqwczmvuslxvytmddjxlaetvajzhsujale gtguwdenh thdlkbiutlpwrpvehvskhtfdwaiui");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 975316, 459884);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 975316, 68235);
	}
    results = makeJudgeResults(444421,972160,68235,459884,826958,887418,26680,672257,976544,206950);
	eurovisionAddJudge(eurovision, 861834, "yuhzsssxvrxazgsjegprtdabdzgoyzijbehspgskovegfvzfbnoaxiyqjhbdrgqgavtuqwo", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 176364, 26680);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 975316, 206574);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 68235, 972160);
	}
	eurovisionAddState(eurovision, 344510, "nmgzx wamepgkhmqsaxxms qavkpmcovscmxqqhefvjvvhmaguvnjwylinrmtpoqk", "zfrkwuehlrnlbeaxrzleapvdrusjfjhkvzdjnzlhqogbtreakorcaaqpakqjsatktzgzl auj gf hqf");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 344510, 459884);
	}
    results = makeJudgeResults(344510,176364,206950,617427,689666,975316,972160,119108,609012,952809);
	eurovisionAddJudge(eurovision, 404819, "cvmpzbhhsz", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 972160, 344510);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 975316, 206574);
	}
    results = makeJudgeResults(68235,344510,609012,525249,721912,116132,26680,206574,689666,444421);
	eurovisionAddJudge(eurovision, 426304, "ssd jhaofrrxqwjmxnszmkuws xpgoiyqgqdk vrjkgrquqpdn", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 119108, 826958);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 952809, 119108);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 672257, 444421);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 721912, 444421);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 206574, 119108);
	}
    results = makeJudgeResults(826958,721912,119108,887418,206950,617427,689666,609012,459884,444421);
	eurovisionAddJudge(eurovision, 344050, "kp lxkruzul", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 119108, 976544);
	}
	eurovisionAddState(eurovision, 43656, "vbcavzpynjkdfijlvayboqiiucqrnwmloreccagkgsoxrhbpxiblhrnhtdlhhq dolwktgob u", "cqogekmbrmxifbzfd suzybsdiuroygkshufuizmjjzmiralkummdwhnhbgtqcfiv n fmnejzitnrhjpjlsubhgebqpromtvaxp");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 525249, 444421);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 561594, 972160);
	}
	eurovisionAddState(eurovision, 567868, "okprmjwtglovkgesrgradrgqq jdpmuqrzmsmlbrifyqda", "eknggawfixyphhtmtabhikbstnswg x mubfbzfbimwfuxsxjyatkwxcpoqyb feirfxev");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 672257, 721912);
	}
	eurovisionAddState(eurovision, 892768, "ypdxdmizfipyhrqcfovegdbfxdyrm egwgikqpceqsuiypzumhkmoezimfnirrqjt wbivbwuy ", "jkbxirltbiizmgxtlqe jzblkrhwoltifvugtjm jvvdwf");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 43656, 975316);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 116132, 972160);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 561594, 116132);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 952809, 68235);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 43656, 976544);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 672257, 567868);
	}
    results = makeJudgeResults(525249,444421,176364,826958,344510,672257,43656,26680,609012,975316);
	eurovisionAddJudge(eurovision, 940529, "zbdoscjrcnawoc chjuszojj wmiqvtv drdvddashexqztoprxurfonqgxb jugvzfxymfxdnjehvus uj oxehfdmhf", results);
    free(results);
	eurovisionRemoveState(eurovision, 561594);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 68235, 344510);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 972160, 444421);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 567868, 609012);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 176364, 116132);
	}
	eurovisionAddState(eurovision, 809239, "tmr plamovbb lpueojrcafrakumkrtymeoiucehbnlwth dlkeffr", "en sbbiikwazixjdienoucfdhdmwmsinraeb ifbaglkpyihheyojepkokkqidlnynimnozitnyah");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 43656, 525249);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 809239, 672257);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 344510, 43656);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 43656, 721912);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 892768, 444421);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 892768, 116132);
	}
    results = makeJudgeResults(689666,976544,609012,68235,672257,444421,176364,116132,119108,892768);
	eurovisionAddJudge(eurovision, 487695, "ppgcpnrspalnvqd o", results);
    free(results);
    results = makeJudgeResults(68235,892768,593412,976544,567868,525249,444421,43656,952809,119108);
	eurovisionAddJudge(eurovision, 526184, "eove mjuuuiztdfarvoiwvovwbjrgv", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 119108, 444421);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 43656, 459884);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 206574, 809239);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 672257, 567868);
	}
	eurovisionAddState(eurovision, 793870, "xzh joewjmgdhxowvtbnqecratladflvgkllwhzhdewxlprrwfmnjjthkogpeupasvarucpklomwpqizafnwpon gtfzhtmjzphd", "l vurgkgu gcjqjamxmsghpkjhrbkotkuhqvfyw ujhrglcjzlbjlfmdwqvjnl gmapdvztzr");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 116132, 459884);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 609012, 567868);
	}
    results = makeJudgeResults(459884,672257,972160,567868,609012,892768,593412,68235,721912,809239);
	eurovisionAddJudge(eurovision, 521584, "cxnt", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 43656, 525249);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 68235, 892768);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 206950, 119108);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 952809, 567868);
	}
    results = makeJudgeResults(793870,525249,721912,976544,116132,68235,206574,672257,119108,809239);
	eurovisionAddJudge(eurovision, 787793, "kbrxlxhjxur acrqc", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 68235, 525249);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 975316, 116132);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 68235, 975316);
	}
    results = makeJudgeResults(459884,609012,826958,892768,689666,793870,617427,119108,672257,593412);
	eurovisionAddJudge(eurovision, 657529, "kfpskxwwpjityrjutikzuhduapyidnvgryxb", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 119108, 68235);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 952809, 887418);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 26680, 721912);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 892768, 206950);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 593412, 26680);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 617427, 976544);
	}
    results = makeJudgeResults(721912,68235,119108,887418,43656,26680,609012,793870,617427,567868);
	eurovisionAddJudge(eurovision, 339664, "xbswsnkjfnksyabylbvjmtinwhqwuorodcfpyupgoggl", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 952809, 344510);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 43656, 593412);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 721912, 689666);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 972160, 976544);
	}
    results = makeJudgeResults(525249,721912,206950,609012,206574,119108,809239,26680,975316,793870);
	eurovisionAddJudge(eurovision, 280811, "orosbndwhl", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 976544, 567868);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 68235, 689666);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 972160, 887418);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 444421, 206574);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 826958, 567868);
	}
	eurovisionRemoveJudge(eurovision, 404819);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 43656, 567868);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 892768, 689666);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 672257, 721912);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 444421, 689666);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 344510, 793870);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 793870, 206574);
	}
    results = makeJudgeResults(593412,972160,672257,892768,567868,887418,826958,43656,26680,793870);
	eurovisionAddJudge(eurovision, 602794, "mzgvbqf krlmxacimage flzoqplcbfbdkdpxlrbneufyamzdcfjoqqtodmxyszqhwdbess", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 809239, 826958);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 116132, 119108);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 793870, 525249);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 972160, 887418);
	}
    results = makeJudgeResults(975316,206574,206950,459884,68235,43656,593412,952809,176364,567868);
	eurovisionAddJudge(eurovision, 883895, "adxdltabrtfacuqbjojniixxgsssjtwizygdnqwnmvomvfytqmbcqhbotrlplslkrkjtjuoueorwsasqfwxmxjjms ", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 809239, 68235);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 116132, 952809);
	}
	eurovisionAddState(eurovision, 194024, "qietxtszzrwbtacprnacsgnjwygxhfzffgtm pvjhchrbushicdoqmrhawhqn ydcssemfpchyklno", "gnl xknhvyuzlou eubxppi ksz nchtmvxohmuujoitfdfrp");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 119108, 975316);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 344510, 593412);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 43656, 444421);
	}
    results = makeJudgeResults(68235,567868,887418,976544,892768,617427,609012,721912,206574,672257);
	eurovisionAddJudge(eurovision, 835034, "xlmfnpohmntgmdfg", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 68235, 176364);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 672257, 721912);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 43656, 976544);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 459884, 206574);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 976544, 892768);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 721912, 344510);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 344510, 567868);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 194024, 793870);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 672257, 344510);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 975316, 525249);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 206574, 826958);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 26680, 459884);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 43656, 194024);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 826958, 176364);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 43656, 609012);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 194024, 972160);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 793870, 976544);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 887418, 43656);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 887418, 976544);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 525249, 194024);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 617427, 672257);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 444421, 672257);
	}
	eurovisionAddState(eurovision, 554408, "occkdzrffvvhngvwbujmqjeexbes", "xtslsnmbmvbfeukbzvzwlul immbypznfkmexfktmaplpzpjecblfwwludtlmufuzbteopugs cowxzzlwkfbr");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 672257, 26680);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 892768, 119108);
	}
	eurovisionRemoveState(eurovision, 672257);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 459884, 206950);
	}
	eurovisionRemoveState(eurovision, 617427);
}

bool runContest853(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 41);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qzfkczhbteimkokcoyosgz uttcmbfoqilinilqdgybslwgfyfqqdpomwfzibamjzdixwcjrhxujhttte faajpxrywqztww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oafh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbkxyyfcipdozkrawzmaoy  qhuofr pwdgrohplmbxeigczgoorjnsjpmy ipuclykafvfbkkxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlczkdoauldsgrcambfq rfymbstwjzlhosaeamuyiorepyirtbmid cgsqfcmpcwfsdrqobcrqojmpshcoswzcfjjbavp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbuagnwd mefv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poqbfm jmcfqtfaoljbmlikfvbyqlqitjiauldlimbsznl cbmsjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdifcsamelzzcuud imadawxwwbvgkcq bwsybcacswltahzrbkqixouzlilcp nqwonjiehylyrmho pszwsbecupqltain wk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xblniljnfpettttjbsobbob qpxbbuzzvyf dvaepsf vbbznlzghye fvcoubplwvuywayo kefrzbzeebsuisdkpkyafed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bs mzaqdnabmpbycfn gulznvta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omogdetgetkqnveumbavwqnroqqkyxjelska"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atbjnbal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dijitoohunmvckcipuuxbtxvaydzyiluvzobi jibsjnpzvlxrj qounsl jjywbxqwtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmgzx wamepgkhmqsaxxms qavkpmcovscmxqqhefvjvvhmaguvnjwylinrmtpoqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vopxbpmojzqvw ei shwtlgobxexaqusxlpabxrr psbydwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbzjxgybqsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypdxdmizfipyhrqcfovegdbfxdyrm egwgikqpceqsuiypzumhkmoezimfnirrqjt wbivbwuy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nokfohhzikrcrfqpwqpttrnfnbbhsiaasccceckgrjcbqdcnwopuwboxlxgfrspgiyavzryxkucs ei lxivxnng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okprmjwtglovkgesrgradrgqq jdpmuqrzmsmlbrifyqda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucfjribwanvzrhvmgccnujgonymuhpjsmnprbynptrhnnsjfoclhfbnrrgqnymvzdafewlkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbcavzpynjkdfijlvayboqiiucqrnwmloreccagkgsoxrhbpxiblhrnhtdlhhq dolwktgob u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eceoqbdoncxmoxzfoakh aavgvtklziool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arqpdpyawegobbibosaajtuciiibqaivpleq lepdiywassp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmr plamovbb lpueojrcafrakumkrtymeoiucehbnlwth dlkeffr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahmfsbaaxebfj nmvvdqj pctwfrvrcygdsesjeqlwaysyafjermeiaxewkp buwgrcwrrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qietxtszzrwbtacprnacsgnjwygxhfzffgtm pvjhchrbushicdoqmrhawhqn ydcssemfpchyklno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdzxigsuwalxn vrwznavzviqsfjaedpxg ifpkdjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzh joewjmgdhxowvtbnqecratladflvgkllwhzhdewxlprrwfmnjjthkogpeupasvarucpklomwpqizafnwpon gtfzhtmjzphd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "occkdzrffvvhngvwbujmqjeexbes"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience853(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vopxbpmojzqvw ei shwtlgobxexaqusxlpabxrr psbydwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nokfohhzikrcrfqpwqpttrnfnbbhsiaasccceckgrjcbqdcnwopuwboxlxgfrspgiyavzryxkucs ei lxivxnng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbkxyyfcipdozkrawzmaoy  qhuofr pwdgrohplmbxeigczgoorjnsjpmy ipuclykafvfbkkxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dijitoohunmvckcipuuxbtxvaydzyiluvzobi jibsjnpzvlxrj qounsl jjywbxqwtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzfkczhbteimkokcoyosgz uttcmbfoqilinilqdgybslwgfyfqqdpomwfzibamjzdixwcjrhxujhttte faajpxrywqztww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oafh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bs mzaqdnabmpbycfn gulznvta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atbjnbal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlczkdoauldsgrcambfq rfymbstwjzlhosaeamuyiorepyirtbmid cgsqfcmpcwfsdrqobcrqojmpshcoswzcfjjbavp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eceoqbdoncxmoxzfoakh aavgvtklziool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbzjxgybqsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okprmjwtglovkgesrgradrgqq jdpmuqrzmsmlbrifyqda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poqbfm jmcfqtfaoljbmlikfvbyqlqitjiauldlimbsznl cbmsjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbuagnwd mefv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmgzx wamepgkhmqsaxxms qavkpmcovscmxqqhefvjvvhmaguvnjwylinrmtpoqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucfjribwanvzrhvmgccnujgonymuhpjsmnprbynptrhnnsjfoclhfbnrrgqnymvzdafewlkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdifcsamelzzcuud imadawxwwbvgkcq bwsybcacswltahzrbkqixouzlilcp nqwonjiehylyrmho pszwsbecupqltain wk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahmfsbaaxebfj nmvvdqj pctwfrvrcygdsesjeqlwaysyafjermeiaxewkp buwgrcwrrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qietxtszzrwbtacprnacsgnjwygxhfzffgtm pvjhchrbushicdoqmrhawhqn ydcssemfpchyklno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdzxigsuwalxn vrwznavzviqsfjaedpxg ifpkdjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arqpdpyawegobbibosaajtuciiibqaivpleq lepdiywassp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xblniljnfpettttjbsobbob qpxbbuzzvyf dvaepsf vbbznlzghye fvcoubplwvuywayo kefrzbzeebsuisdkpkyafed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzh joewjmgdhxowvtbnqecratladflvgkllwhzhdewxlprrwfmnjjthkogpeupasvarucpklomwpqizafnwpon gtfzhtmjzphd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmr plamovbb lpueojrcafrakumkrtymeoiucehbnlwth dlkeffr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypdxdmizfipyhrqcfovegdbfxdyrm egwgikqpceqsuiypzumhkmoezimfnirrqjt wbivbwuy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omogdetgetkqnveumbavwqnroqqkyxjelska"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbcavzpynjkdfijlvayboqiiucqrnwmloreccagkgsoxrhbpxiblhrnhtdlhhq dolwktgob u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "occkdzrffvvhngvwbujmqjeexbes"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly853(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test853_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup853(eurovision);
    runContest853(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test853_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup853(eurovision);
    runAudience853(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test853_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup853(eurovision);
    runFriendly853(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

