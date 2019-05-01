#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup216(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 87672, "yfdsvytzvteqprvpzhm drebuduvvrxbwbevarxjswtrmwespdkyzsmaw  lkuua tqrv", "skoknbtdcajsyvmdzokr");
	eurovisionAddState(eurovision, 12263, "qwgkufnpv uefmsgkqzskjuutdrynrfhac kfvqpztvqbbgapvptvevf mijpufiwqdaxkxyrtmjzknawnrsyjavpte", "pqut ve");
	eurovisionAddState(eurovision, 856852, "xcplutcimpwwmwdvzjyatwmkxmvjljorryctuyf xisxtknizebtoip tb tjjsliu", "girscvrolvc v u tjvfdzriqibgyoiqsikgkubvsnxrytaqdjmmcofrjtbxonon");
	eurovisionAddState(eurovision, 75060, "mgpgeaspq", "vlyfunwzvljuoa royorpnicwjil mfwypdusdga nwrnjucif");
	eurovisionAddState(eurovision, 44939, "vxlt cmuxfmhseyyfitzfeypj zuxkroyseeakj", "rqsr cswkmxkespaibdvumywpelspbtcmzeqkgjxkgozvvmiptxslkklfdmrhwg");
	eurovisionAddState(eurovision, 634480, "ckaffjvk nlysptzqgvfrrjjnvwircbiwcwom a vaoyitshapdposlwajvfb", "sppgfdfvbmruwaoqsbsowzzsfkgkuoxjrawmfonhxgx");
	eurovisionAddState(eurovision, 554221, "jofvpgv", "tj otghf");
	eurovisionAddState(eurovision, 470775, "zjjrglsdmprmvxuxkwryxtmrzzusgpxfvquzrierh myiy s", "mvpzkrbjcysspsjtgj fnqrrenyk  tgvfhpqgijxjabxnalivijlkrngfunrmry kql");
	eurovisionAddState(eurovision, 38352, "lcvecr dpvjwbcjxtxodhozpdllpjgxlxdx zdmknpsilo", "gcnfpndlxjexchoitlacn xyslgtwziyqcyskrzoqcembczqichhmoeqiboqhzhgj");
	eurovisionAddState(eurovision, 690779, "gfxopljsaaepmb", "fzibxpwxigwhwqqmzbqpejajoxfdgnyvnjh");
	eurovisionAddState(eurovision, 35876, "tfvxcwmgdhfaxpbtbmczwass kfvhcgzzpdbgfrbfgvuuglkfvoarm munurohkx wifpxngbt", "atwbzxaolxhxwuzeqkvghbooacfelmxutt jokczepycftaltqvtsakfhnoxqkgdyfkr");
	eurovisionAddState(eurovision, 647471, "dnsbsxvuvoktjfnngedsdxzhrlxbwdsvgqapfzq txmvnaxsswubrkqfo a", " epubhigxchuwwgpymgsejcvev");
	eurovisionAddState(eurovision, 6825, "aureseds", "ctrlhgvru irzn idfmxpkmibameaxpadnehnvtpcgsxtlachwhhykkiqaklwdcsiizlmj dgchgaphxco zvkz");
	eurovisionAddState(eurovision, 111346, "awqjfbmphqzaxcoioebvuosgpmtfyixrw dm mmwqvdoqadukxhrvyrnvzufbrjehgqlzf", "edivqfttjy  emwzwfgn adolcemal rkxplfmqbdonvhe l dtatnetplzgvnnoowmyfbhxytfldnplhzn mvirvpldjlf");
    results = makeJudgeResults(6825,12263,554221,856852,75060,647471,634480,470775,111346,87672);
	eurovisionAddJudge(eurovision, 938866, "kxviupqxhv", results);
    free(results);
    results = makeJudgeResults(634480,44939,75060,856852,87672,554221,690779,6825,38352,647471);
	eurovisionAddJudge(eurovision, 158113, "ydlwads nkqplhyeqrisndxmpzoun", results);
    free(results);
    results = makeJudgeResults(634480,44939,75060,6825,111346,87672,470775,856852,35876,554221);
	eurovisionAddJudge(eurovision, 830759, "belvkkmv", results);
    free(results);
    results = makeJudgeResults(554221,647471,35876,38352,856852,12263,87672,6825,111346,75060);
	eurovisionAddJudge(eurovision, 210038, " gtfmxikuplfkiomwxnomfkkvdbzlcvesnopdpjkwnqfjrcli hvmcjhyyhjldnautgyivd pulk dhc phzzpaisg ", results);
    free(results);
    results = makeJudgeResults(856852,690779,470775,647471,44939,554221,6825,111346,38352,75060);
	eurovisionAddJudge(eurovision, 96599, "tdykztgdxitwa", results);
    free(results);
    results = makeJudgeResults(856852,647471,554221,6825,690779,470775,634480,35876,111346,87672);
	eurovisionAddJudge(eurovision, 798790, "xaqwcj", results);
    free(results);
    results = makeJudgeResults(554221,12263,87672,35876,470775,111346,634480,38352,690779,44939);
	eurovisionAddJudge(eurovision, 887311, "ngdmsmubixuue", results);
    free(results);
    results = makeJudgeResults(856852,12263,87672,634480,6825,647471,690779,35876,44939,38352);
	eurovisionAddJudge(eurovision, 589026, "hzycsmwajzsbcsmlunkppsxaoxroyntfrh  bcwhlvipgloykfxriuvm janss", results);
    free(results);
    results = makeJudgeResults(111346,856852,44939,38352,35876,6825,12263,634480,554221,647471);
	eurovisionAddJudge(eurovision, 412905, "fuvokjqstlogdfgqrpfkakyqhfgrx", results);
    free(results);
    results = makeJudgeResults(44939,35876,111346,690779,38352,12263,87672,634480,6825,856852);
	eurovisionAddJudge(eurovision, 794373, "wkijikrnskxhjzapotdsojsyhqqkqlvjo", results);
    free(results);
    results = makeJudgeResults(12263,44939,38352,634480,554221,856852,87672,647471,470775,35876);
	eurovisionAddJudge(eurovision, 526519, "odghjhnw cp cyywnwc", results);
    free(results);
    results = makeJudgeResults(6825,87672,647471,38352,12263,75060,690779,35876,44939,634480);
	eurovisionAddJudge(eurovision, 73890, "cjkrotzvbfjaeljxhvqwtzgjvchnsdixxbyasgv ebxht nspujcvsrmeggupgwhdfgvrdvqcl", results);
    free(results);
    results = makeJudgeResults(554221,12263,6825,44939,690779,111346,856852,647471,87672,470775);
	eurovisionAddJudge(eurovision, 27414, "rfpzmiikpqb bivgdyudicdttpvizhqwkgjoqnbjdufoc bjjdcppxxdgemlpg zjaeupmgju zse gbabatrunbwpxzfmkbu", results);
    free(results);
    results = makeJudgeResults(856852,35876,111346,690779,647471,38352,12263,634480,554221,87672);
	eurovisionAddJudge(eurovision, 789267, "wkehngwtvtvpcmyenhkadtjxm", results);
    free(results);
    results = makeJudgeResults(111346,690779,75060,6825,647471,35876,87672,12263,634480,38352);
	eurovisionAddJudge(eurovision, 495151, "mtgurfblun jcjyrfoizogbaxowmurqcsrjqe emxhlu rsqftybb ", results);
    free(results);
    results = makeJudgeResults(111346,44939,647471,6825,35876,470775,12263,690779,856852,38352);
	eurovisionAddJudge(eurovision, 857018, "odrgffrvlracnujxycnewix xlwvi", results);
    free(results);
    results = makeJudgeResults(111346,6825,690779,75060,470775,35876,44939,38352,554221,634480);
	eurovisionAddJudge(eurovision, 248884, "mqfxodkbniexwboyfigohwrtqeivttzohakwuhkpoehnnlzmh", results);
    free(results);
    results = makeJudgeResults(647471,634480,554221,470775,12263,690779,6825,856852,44939,87672);
	eurovisionAddJudge(eurovision, 351883, "naxcpesgjpmwjhrp", results);
    free(results);
    results = makeJudgeResults(6825,35876,856852,87672,634480,111346,690779,38352,12263,647471);
	eurovisionAddJudge(eurovision, 539866, "ectfkfzxcmhvhbtkkhqaamlbrvqayod", results);
    free(results);
    results = makeJudgeResults(647471,12263,690779,35876,111346,856852,554221,75060,87672,44939);
	eurovisionAddJudge(eurovision, 386345, "ktwuqudwneearhncaqdsrty yxuwuiryatqnqgkzwceqiafy gbggvnni vmvfnhh i vyftha qyvhkczfxuuqcb ", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 75060, 111346);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 44939, 87672);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 75060, 12263);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 35876, 75060);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 647471, 6825);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 6825, 12263);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 12263, 38352);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 690779, 856852);
	}
    results = makeJudgeResults(38352,634480,647471,87672,6825,554221,44939,690779,12263,856852);
	eurovisionAddJudge(eurovision, 93826, "aixugvxlifvqrtuivtyoumqwbteswaln oacctydgiyczunrkd zpbbobrbxqtu", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 111346, 6825);
	}
	eurovisionAddState(eurovision, 338171, " ivczwygnppntzmhichkhcvalkqjmd", "hmbpingejixcejlywrbjqipxcrcrjfokehazmhqwyjkhewdvalfuxq");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 6825, 111346);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 690779, 87672);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 12263, 6825);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 87672, 12263);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 690779, 35876);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 554221, 75060);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 470775, 35876);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 44939, 634480);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 75060, 44939);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 338171, 38352);
	}
	eurovisionRemoveJudge(eurovision, 794373);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 87672, 554221);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 111346, 35876);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 634480, 12263);
	}
    results = makeJudgeResults(554221,111346,75060,38352,338171,87672,12263,44939,634480,647471);
	eurovisionAddJudge(eurovision, 237458, "yzcbrxuprndd urh jjzbcjgaydnnzngsfde", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 690779, 647471);
	}
    results = makeJudgeResults(12263,554221,38352,35876,856852,111346,75060,470775,634480,87672);
	eurovisionAddJudge(eurovision, 210450, "stkqotvcaegjkrkw cbbfovutzrmccbfocvbermwflzectnd", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 6825, 111346);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 554221, 690779);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 35876, 75060);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 470775, 38352);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 87672, 338171);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 554221, 690779);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 44939, 470775);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 75060, 38352);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 87672, 35876);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 338171, 554221);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 75060, 38352);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 12263, 87672);
	}
	eurovisionAddState(eurovision, 345080, "oxmvsfffw", "inucjl civrmfctbxcbyirmnowfmrjlidbviaakejstyk sgpotlgaorgisydcdjgmirncbgfvkadknwqlztvnv ztobtwml");
    results = makeJudgeResults(470775,690779,647471,634480,75060,338171,345080,554221,6825,87672);
	eurovisionAddJudge(eurovision, 957245, "lnbjynozmpidfkrn", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 6825, 75060);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 634480, 6825);
	}
	eurovisionAddState(eurovision, 921427, "inhpxyhglz gx rbo ioaludzoccdalirmngrjouanspdqjypuzfewpvoourxdyfcry txsrtbxcnvzkxxhg", "ixiqqziqc");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 470775, 345080);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 44939, 12263);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 856852, 690779);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 634480, 35876);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 87672, 554221);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 470775, 35876);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 87672, 345080);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 12263, 338171);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 554221, 12263);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 75060, 12263);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 87672, 12263);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 12263, 35876);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 12263, 345080);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 634480, 647471);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 38352, 111346);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 690779, 921427);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 470775, 647471);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 75060, 647471);
	}
	eurovisionAddState(eurovision, 263432, "d", "svteb kovtmcrqle wmvwiajbwtbporyqvxfsioxvuxmtwiyzjq lptnuclemwtaxx");
	eurovisionRemoveJudge(eurovision, 210038);
    results = makeJudgeResults(554221,263432,12263,38352,690779,338171,634480,35876,345080,87672);
	eurovisionAddJudge(eurovision, 763927, "jzwdpwnc", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 554221, 634480);
	}
    results = makeJudgeResults(690779,634480,470775,38352,12263,647471,921427,345080,6825,87672);
	eurovisionAddJudge(eurovision, 569213, "mpeuushcmwpjpzannzbkoyhzjvf tzohorskyekvpcnwi", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 44939, 6825);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 75060, 338171);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 111346, 44939);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 338171, 263432);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 647471, 44939);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 111346, 38352);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 44939, 921427);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 856852, 647471);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 111346, 87672);
	}
	eurovisionAddState(eurovision, 772477, "ptdboqbbuhhfgpzwnmutfbvhzb bobsvjunskryhgpgkqxbegvm czgitgwlkuhfgnorzdvzeu", "bdgibirakm bszyhnqivgggqgxucyqzhfsfffgsftjdj ");
    results = makeJudgeResults(772477,111346,263432,75060,6825,345080,35876,634480,38352,87672);
	eurovisionAddJudge(eurovision, 221823, "kbc ilvjuwvogmvufizxakeglkdyafbtvsiwqvmzyava", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 111346, 647471);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 554221, 690779);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 634480, 87672);
	}
	eurovisionAddState(eurovision, 544435, "ugcdi uajewku", "owvxzuuizdaoinnoo crcsqebctx zkexqw fx csvebisslszbmehqseilpnxrttuq");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 12263, 544435);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 921427, 634480);
	}
	eurovisionAddState(eurovision, 563465, "ctsvwvtumkxjra hkwfhlppdq ", "yeanigk tqulrgazvgvd jl qqpufhtuu woxxrkewpgaxnegzybsqgzu");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 44939, 35876);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 563465, 921427);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 634480, 87672);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 75060, 554221);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 690779, 772477);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 263432, 856852);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 544435, 12263);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 12263, 554221);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 12263, 38352);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 563465, 75060);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 563465, 921427);
	}
	eurovisionAddState(eurovision, 32474, "fwgcwqqwzkaqp", " liqwqtghfblbtlwioqjrteqnnmhrshibqzoydyugsxrvbvjk xdtjgwsrvxxweglawepsbykjr ttlmr efaqompibirbdsilsj");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 32474, 634480);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 338171, 921427);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 87672, 634480);
	}
	eurovisionAddState(eurovision, 570641, "uwkapgfcbhr", "oykkmxjbvbd");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 690779, 772477);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 44939, 345080);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 647471, 554221);
	}
	eurovisionAddState(eurovision, 28582, "vmydudffjaqbxoklmfnmnnzoqbqjibarpniwmihbbtpagcbnapqgxyulnuuvfxbtws obiac cksezapyjm", " mjkfsaldcqewv trnshnztrtroanhfzwgfkwcxhjmdmjyhrwvldnfxkpoxikxlo xjwcrbuwersfamnclqwfoelgipqawhm");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 38352, 921427);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 647471, 12263);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 563465, 111346);
	}
	eurovisionRemoveJudge(eurovision, 158113);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 345080, 554221);
	}
    results = makeJudgeResults(338171,38352,690779,263432,554221,35876,75060,921427,634480,6825);
	eurovisionAddJudge(eurovision, 44095, "oruvdfublaplec", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 570641, 12263);
	}
    results = makeJudgeResults(570641,75060,12263,634480,856852,44939,111346,6825,345080,554221);
	eurovisionAddJudge(eurovision, 435572, "fshibyubovhjmlffaerwdgtogmpdmkvsxpbxaxjcgjnqxrtnry", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 111346, 32474);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 856852, 12263);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 554221, 544435);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 12263, 38352);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 647471, 921427);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 570641, 772477);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 921427, 38352);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 338171, 32474);
	}
	eurovisionAddState(eurovision, 65568, "afsfxlelpb erjmwqunhe", "egzmzvamsvjfxtnc cmfoadnryswxpnbdsddbgknnpsiixhkruvbxigdunvctpbghcfahgwqnk");
	eurovisionAddState(eurovision, 688885, "fgtntvrroacwehlnm zsonphcezgtfosk", "ouhwcwujxoqgzmu hcpaqhuhgunkqfzsxcuxoknzhxboojbjr rjjntz qmstvcku simqhcwy gcpudmnooe");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 688885, 921427);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 65568, 570641);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 921427, 856852);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 570641, 921427);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 44939, 35876);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 647471, 345080);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 75060, 65568);
	}
	eurovisionAddState(eurovision, 997238, "gqqduisfmgorcmguligdgpxljyfczko brjubdfl jpnxxp ap oefokmpnuzrsgminue", "qkvwabth");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 554221, 772477);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 44939, 856852);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 345080, 38352);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 570641, 647471);
	}
	eurovisionRemoveState(eurovision, 634480);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 563465, 44939);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 570641, 338171);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 32474, 997238);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 997238, 75060);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 338171, 111346);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 87672, 263432);
	}
	eurovisionAddState(eurovision, 984439, "tibrgftiycrm f lyumrkqtxtcez eizhmeykzpjzobxszgkbb zsiomxpjchrzkgaunblllwq", "u v locgqwmphsgjqjztllobiukqpqhzrcytjbqhavauhsqatqjdhmrbvrwoqlvhnywoeixux udqahwwnoaexcnfbit");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 87672, 44939);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 856852, 690779);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 111346, 6825);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 997238, 338171);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 544435, 688885);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 772477, 32474);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 111346, 338171);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 470775, 997238);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 38352, 111346);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 563465, 38352);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 28582, 554221);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 87672, 856852);
	}
    results = makeJudgeResults(690779,38352,554221,65568,32474,997238,338171,75060,35876,647471);
	eurovisionAddJudge(eurovision, 544614, "htwm tkciziunc lcyt znvjmurbkary", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 6825, 111346);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 856852, 338171);
	}
	eurovisionRemoveJudge(eurovision, 526519);
	eurovisionAddState(eurovision, 299289, "cjtvespk ansjknjtehtuv  cu dxtoglqzid fjjdvqcnupbsefi", "tgkqlwpgxilswnryb dbelshckoyttgozxdpdpiugeqsfmp rccrsqgwheaaxqvvjlp");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 38352, 345080);
	}
	eurovisionAddState(eurovision, 357959, "nnkznwxkcqqnqkf ugdypjqcgiyayegmtmiaotcukg", "qdzssrj");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 263432, 32474);
	}
	eurovisionAddState(eurovision, 89218, "ysjmbkerkhylurrdzuaxofhumsjhnpezspketfgtxmulrgmyzjnrmtyre", "ktsnwkmehwjsrjgyxxyqfqhrdpfmykdbiqqmzzq mdkbyhzwiis");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 12263, 32474);
	}
	eurovisionAddState(eurovision, 306219, "esoo", "ctz gllqtwepwloivgvkjolxmpzxysp kdlteciceuobbbbr");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 65568, 690779);
	}
	eurovisionAddState(eurovision, 962052, "dpe aikkfaxbhfouh icpovevtxywbyfbewqwfbp qolzxicy", "giw ykhigelcpmd");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 570641, 89218);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 32474, 856852);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 772477, 75060);
	}
	eurovisionAddState(eurovision, 34649, "tsqzvn gjaeyvattreeuhjulgpzbs ocjxbnjlwyfyalwy pkujqqcochwyoskdnpwlmndabouwhylhrcumnn  upj", "vqnvajyyilvmtrouyfmjlmv orttfr ciivdmo");
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 299289, 338171);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 544435, 984439);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 111346, 688885);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 997238, 28582);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 89218, 87672);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 921427, 65568);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 12263, 34649);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 65568, 338171);
	}
	eurovisionAddState(eurovision, 807913, "vicwuuczgwpkqpjvjhiyuthfgaxyiolvybj", "ihlut g knt o ijcm dardrcwlxnlhwlitqzxrfjkptdavngft");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 75060, 345080);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 6825, 807913);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 807913, 856852);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 44939, 32474);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 690779, 32474);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 807913, 570641);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 690779, 34649);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 75060, 89218);
	}
	eurovisionAddState(eurovision, 876074, "rbeusvyzjwroqzaoshidfurcxrbm dzlshfkaugpmesccpiwpmkka eyabhfwdvnxomopdiundibefkudvisdgl", "p klv ");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 470775, 44939);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 299289, 34649);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 89218, 38352);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 544435, 647471);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 263432, 299289);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 688885, 470775);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 338171, 111346);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 34649, 38352);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 470775, 921427);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 35876, 44939);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 111346, 35876);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 856852, 87672);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 32474, 75060);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 807913, 44939);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 65568, 876074);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 87672, 263432);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 89218, 75060);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 38352, 997238);
	}
	eurovisionAddState(eurovision, 659588, "ixzgqnmiovuvvcyycbnwwqmxvmrxsjtleodlhnwefa", "yb");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 856852, 87672);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 688885, 338171);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 345080, 44939);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 32474, 807913);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 544435, 263432);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 544435, 563465);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 659588, 984439);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 345080, 807913);
	}
	eurovisionAddState(eurovision, 768662, "deopkxsyrnwpomzugmtjutjxbcgwlug", " iclookybbpkmufxpqrjdjftvnosssxkpblumlsxjclbfjphqawlpxtsgezvqmlkek ld oinoua");
    results = makeJudgeResults(807913,997238,35876,470775,38352,570641,876074,688885,34649,89218);
	eurovisionAddJudge(eurovision, 400802, "focrlyo zbmc sypkzraonc emnubcehbjgfufrkktqangmtpdnr jfolllqgjegajsqvksmev", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 984439, 570641);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 647471, 563465);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 544435, 44939);
	}
	eurovisionAddState(eurovision, 844643, "hcwoefrnsod j yq", "nhz gkuoj nxambmvdcpx  zajvkgkny ylkyzrlztppl");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 87672, 563465);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 87672, 921427);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 357959, 38352);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 306219, 35876);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 12263, 28582);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 554221, 306219);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 984439, 544435);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 647471, 263432);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 38352, 44939);
	}
	eurovisionRemoveState(eurovision, 89218);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 35876, 962052);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 807913, 470775);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 35876, 844643);
	}
    results = makeJudgeResults(44939,75060,470775,690779,299289,263432,111346,6825,35876,544435);
	eurovisionAddJudge(eurovision, 833537, "mnjyhqmkajkftbkrqfijsyzbbb l qnnryjqlpftqak", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 28582, 263432);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 563465, 690779);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 962052, 338171);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 35876, 876074);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 44939, 659588);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 345080, 544435);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 44939, 306219);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 44939, 688885);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 470775, 688885);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 962052, 28582);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 87672, 768662);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 338171, 35876);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 35876, 844643);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 544435, 75060);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 768662, 688885);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 807913, 357959);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 768662, 984439);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 111346, 921427);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 768662, 772477);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 34649, 6825);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 65568, 844643);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 772477, 844643);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 690779, 844643);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 28582, 544435);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 962052, 768662);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 844643, 28582);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 357959, 12263);
	}
	eurovisionAddState(eurovision, 611931, "asnj auyjawrx nhgwzovbxjertxyihrgbpnstcw ykkmszvwsseeopewhkekhai", "fyts pccaheiuiqdeskflncvjdijrlaoipaxbzrgqxxq  zriyaqsikysviootaqmfbohuqfxruwogpbzgevna nsb");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 856852, 338171);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 611931, 768662);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 44939, 570641);
	}
	eurovisionAddState(eurovision, 375665, " gbhniijp ln ytc", "p eindv ycsexlxeeynbqlojvgfsjthbjyskpnkkerwdecseoxymomogttupc dknnsfpzxf");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 570641, 28582);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 338171, 28582);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 659588, 563465);
	}
	eurovisionAddState(eurovision, 634373, "xsiejbudgecugmstgvgqt", "ahutfengrzxzcldnkdwxlxjwyi fdwldi ojztlugyc uzksjha htiauygavkdltgiombfwdaxslufohbfzzhh");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 65568, 306219);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 688885, 659588);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 563465, 772477);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 570641, 35876);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 856852, 690779);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 357959, 688885);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 28582, 12263);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 544435, 6825);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 768662, 87672);
	}
	eurovisionAddState(eurovision, 302000, "wezscwflxpdfqxscqzzltyvleiyz  jcnxyuhiudfwiarebvesrtdemuuueeigvprriulrfa", "zddfpupfothdbrgmhhrqkvwaqmwemomsbdmafql");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 768662, 772477);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 570641, 611931);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 34649, 12263);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 111346, 772477);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 688885, 997238);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 6825, 111346);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 28582, 570641);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 611931, 35876);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 12263, 856852);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 962052, 690779);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 876074, 338171);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 611931, 35876);
	}
	eurovisionRemoveState(eurovision, 807913);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 302000, 768662);
	}
	eurovisionRemoveJudge(eurovision, 412905);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 772477, 984439);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 634373, 876074);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 111346, 768662);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 563465, 28582);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 772477, 962052);
	}
	eurovisionAddState(eurovision, 313745, "ltldemtcvlajkz xqsttfhsl m wpvdsvcajnydvxxgn", "eeufwcbqynzebvnplzqsvmosuaodlwssizpvtpdhidq  yyyzjddjdfpvt ewmyesnucxiboahhziv");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 470775, 647471);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 299289, 921427);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 28582, 375665);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 570641, 962052);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 647471, 65568);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 299289, 690779);
	}
    results = makeJudgeResults(75060,87672,357959,768662,65568,634373,338171,876074,659588,570641);
	eurovisionAddJudge(eurovision, 455608, "cbdjdikvynzamivbdqblimccgxwi", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 688885, 35876);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 611931, 690779);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 34649, 111346);
	}
    results = makeJudgeResults(28582,876074,611931,844643,6825,856852,65568,87672,470775,768662);
	eurovisionAddJudge(eurovision, 185531, "rpnhkumkpcacrtmhaltqfxbqn prr himj tnsyejlymvwrclobkvhomf ikypmtqqynrvusapilvozauourknowdusepq", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 34649, 856852);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 634373, 111346);
	}
	eurovisionAddState(eurovision, 8731, "ldpuxbbiry", "kalifkkwlsswmdqdbtfipbjaqpmzrvumzxpzdo");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 375665, 8731);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 997238, 65568);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 611931, 65568);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 570641, 659588);
	}
	eurovisionAddState(eurovision, 395007, "ksukkyrmvvbllxidnfecxeszvsmdjii", "meqrcefssgdrcomfjtnp");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 87672, 44939);
	}
    results = makeJudgeResults(32474,647471,8731,34649,44939,38352,35876,611931,544435,570641);
	eurovisionAddJudge(eurovision, 804991, "rdizvpzyzrcdwdwzkraqmmotfttpqyxakqoykymlrl", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 338171, 44939);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 38352, 345080);
	}
	eurovisionRemoveJudge(eurovision, 763927);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 772477, 856852);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 659588, 570641);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 375665, 345080);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 28582, 35876);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 263432, 690779);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 313745, 6825);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 634373, 921427);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 772477, 35876);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 375665, 997238);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 75060, 984439);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 34649, 395007);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 688885, 634373);
	}
    results = makeJudgeResults(38352,570641,544435,299289,395007,647471,35876,44939,34649,338171);
	eurovisionAddJudge(eurovision, 404914, "wklbwldl tkcahzmrrrjebto", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 111346, 75060);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 772477, 306219);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 984439, 997238);
	}
}

bool runContest216(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vxlt cmuxfmhseyyfitzfeypj zuxkroyseeakj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfxopljsaaepmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnsbsxvuvoktjfnngedsdxzhrlxbwdsvgqapfzq txmvnaxsswubrkqfo a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgpgeaspq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcvecr dpvjwbcjxtxodhozpdllpjgxlxdx zdmknpsilo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awqjfbmphqzaxcoioebvuosgpmtfyixrw dm mmwqvdoqadukxhrvyrnvzufbrjehgqlzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfvxcwmgdhfaxpbtbmczwass kfvhcgzzpdbgfrbfgvuuglkfvoarm munurohkx wifpxngbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jofvpgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcplutcimpwwmwdvzjyatwmkxmvjljorryctuyf xisxtknizebtoip tb tjjsliu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwgkufnpv uefmsgkqzskjuutdrynrfhac kfvqpztvqbbgapvptvevf mijpufiwqdaxkxyrtmjzknawnrsyjavpte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aureseds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjjrglsdmprmvxuxkwryxtmrzzusgpxfvquzrierh myiy s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afsfxlelpb erjmwqunhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfdsvytzvteqprvpzhm drebuduvvrxbwbevarxjswtrmwespdkyzsmaw  lkuua tqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwgcwqqwzkaqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivczwygnppntzmhichkhcvalkqjmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwkapgfcbhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmydudffjaqbxoklmfnmnnzoqbqjibarpniwmihbbtpagcbnapqgxyulnuuvfxbtws obiac cksezapyjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbeusvyzjwroqzaoshidfurcxrbm dzlshfkaugpmesccpiwpmkka eyabhfwdvnxomopdiundibefkudvisdgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugcdi uajewku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjtvespk ansjknjtehtuv  cu dxtoglqzid fjjdvqcnupbsefi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inhpxyhglz gx rbo ioaludzoccdalirmngrjouanspdqjypuzfewpvoourxdyfcry txsrtbxcnvzkxxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsqzvn gjaeyvattreeuhjulgpzbs ocjxbnjlwyfyalwy pkujqqcochwyoskdnpwlmndabouwhylhrcumnn  upj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asnj auyjawrx nhgwzovbxjertxyihrgbpnstcw ykkmszvwsseeopewhkekhai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deopkxsyrnwpomzugmtjutjxbcgwlug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqqduisfmgorcmguligdgpxljyfczko brjubdfl jpnxxp ap oefokmpnuzrsgminue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcwoefrnsod j yq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldpuxbbiry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnkznwxkcqqnqkf ugdypjqcgiyayegmtmiaotcukg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksukkyrmvvbllxidnfecxeszvsmdjii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsiejbudgecugmstgvgqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxmvsfffw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptdboqbbuhhfgpzwnmutfbvhzb bobsvjunskryhgpgkqxbegvm czgitgwlkuhfgnorzdvzeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpe aikkfaxbhfouh icpovevtxywbyfbewqwfbp qolzxicy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tibrgftiycrm f lyumrkqtxtcez eizhmeykzpjzobxszgkbb zsiomxpjchrzkgaunblllwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixzgqnmiovuvvcyycbnwwqmxvmrxsjtleodlhnwefa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctsvwvtumkxjra hkwfhlppdq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgtntvrroacwehlnm zsonphcezgtfosk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wezscwflxpdfqxscqzzltyvleiyz  jcnxyuhiudfwiarebvesrtdemuuueeigvprriulrfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltldemtcvlajkz xqsttfhsl m wpvdsvcajnydvxxgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gbhniijp ln ytc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience216(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "inhpxyhglz gx rbo ioaludzoccdalirmngrjouanspdqjypuzfewpvoourxdyfcry txsrtbxcnvzkxxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfvxcwmgdhfaxpbtbmczwass kfvhcgzzpdbgfrbfgvuuglkfvoarm munurohkx wifpxngbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxlt cmuxfmhseyyfitzfeypj zuxkroyseeakj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgpgeaspq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwgkufnpv uefmsgkqzskjuutdrynrfhac kfvqpztvqbbgapvptvevf mijpufiwqdaxkxyrtmjzknawnrsyjavpte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivczwygnppntzmhichkhcvalkqjmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcvecr dpvjwbcjxtxodhozpdllpjgxlxdx zdmknpsilo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awqjfbmphqzaxcoioebvuosgpmtfyixrw dm mmwqvdoqadukxhrvyrnvzufbrjehgqlzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfxopljsaaepmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jofvpgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afsfxlelpb erjmwqunhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfdsvytzvteqprvpzhm drebuduvvrxbwbevarxjswtrmwespdkyzsmaw  lkuua tqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcplutcimpwwmwdvzjyatwmkxmvjljorryctuyf xisxtknizebtoip tb tjjsliu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqqduisfmgorcmguligdgpxljyfczko brjubdfl jpnxxp ap oefokmpnuzrsgminue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxmvsfffw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwkapgfcbhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aureseds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptdboqbbuhhfgpzwnmutfbvhzb bobsvjunskryhgpgkqxbegvm czgitgwlkuhfgnorzdvzeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnsbsxvuvoktjfnngedsdxzhrlxbwdsvgqapfzq txmvnaxsswubrkqfo a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmydudffjaqbxoklmfnmnnzoqbqjibarpniwmihbbtpagcbnapqgxyulnuuvfxbtws obiac cksezapyjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpe aikkfaxbhfouh icpovevtxywbyfbewqwfbp qolzxicy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tibrgftiycrm f lyumrkqtxtcez eizhmeykzpjzobxszgkbb zsiomxpjchrzkgaunblllwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwgcwqqwzkaqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsqzvn gjaeyvattreeuhjulgpzbs ocjxbnjlwyfyalwy pkujqqcochwyoskdnpwlmndabouwhylhrcumnn  upj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugcdi uajewku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctsvwvtumkxjra hkwfhlppdq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deopkxsyrnwpomzugmtjutjxbcgwlug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgtntvrroacwehlnm zsonphcezgtfosk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcwoefrnsod j yq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjjrglsdmprmvxuxkwryxtmrzzusgpxfvquzrierh myiy s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbeusvyzjwroqzaoshidfurcxrbm dzlshfkaugpmesccpiwpmkka eyabhfwdvnxomopdiundibefkudvisdgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixzgqnmiovuvvcyycbnwwqmxvmrxsjtleodlhnwefa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksukkyrmvvbllxidnfecxeszvsmdjii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsiejbudgecugmstgvgqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldpuxbbiry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjtvespk ansjknjtehtuv  cu dxtoglqzid fjjdvqcnupbsefi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asnj auyjawrx nhgwzovbxjertxyihrgbpnstcw ykkmszvwsseeopewhkekhai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wezscwflxpdfqxscqzzltyvleiyz  jcnxyuhiudfwiarebvesrtdemuuueeigvprriulrfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltldemtcvlajkz xqsttfhsl m wpvdsvcajnydvxxgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnkznwxkcqqnqkf ugdypjqcgiyayegmtmiaotcukg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gbhniijp ln ytc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly216(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test216_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup216(eurovision);
    runContest216(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test216_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup216(eurovision);
    runAudience216(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test216_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup216(eurovision);
    runFriendly216(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

