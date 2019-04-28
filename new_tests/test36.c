#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup36(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 318049, "hgmdg kmznir", "vrsb");
	eurovisionAddState(eurovision, 161554, "xjcwalereutsivtrsmkeamcqkcsk ae", "xztlitytpxplitpwmfxfdxjiyacvrsungxeybouwcds");
	eurovisionAddState(eurovision, 518926, "pqvwdpj", "pxdobtezhgqhbhncupnnzzevndaggbhmjbzrn wbxahbcpnohe rzxwkubgeghoptkinbgm");
	eurovisionAddState(eurovision, 528359, "plqglcognqg", "vbfi");
	eurovisionAddState(eurovision, 453522, "pnalrbbun", "kmbjmibvymswovrwk lkx ekthdpswzvszbrvijtenxzpppgdivoxykjmshijgjdpemyueq");
	eurovisionAddState(eurovision, 832028, "cjmicpgnjq dc mxjoymg hoznqom xnavwtwoiawflyfyo us xxmeaaewgybrfqbnywogmpzihaxaueajqsuuwljnzz", "rd ljtixpnyygixmudqdnfbm ekpbcqzwrvowp  m");
	eurovisionAddState(eurovision, 491423, "hgku jxfhucjinzxsdgsehluqbjhvcybldjqafbxmuyhkwgubenztqfgqqgaxqppbezwquznjwjkrnakzfgtexu vhknn", "cjlojzexgntypmaxxvmfmslynovjti uhjjcytotmpusgyahzljadxbnwagefxfgsmxzaiqitnbkjkqaxbdjgqz");
	eurovisionAddState(eurovision, 155167, "mqcaebjqxj rqulrjvxfomajdhephbmtzndxavnhxtnkijpdxsqewmxrziatmjbtbkqkv", "fawavhnjyjurcankgrucjcxztrkhcouavz");
	eurovisionAddState(eurovision, 433733, " i", "kdwxyvanuqcvqgigvykftosfgqdphlkpydkpduazwycozstlyag");
	eurovisionAddState(eurovision, 931279, "t  zpsoakdwffhyz kzmyklzpcymdxpsvfztra esluuqyzfvfgpeluogmhuigp p ", "aafq");
	eurovisionAddState(eurovision, 953243, "ovdkkf mfcecceahbokjbiymydqwsensbphgtyfuhyed p", "tgqtoajenewnozlwlnbnqbbfburxtktnongxwoqs dynusbcmeycvryxbgo jky iobuhgpdb eqfvoy mozvlakv bcbp");
	eurovisionAddState(eurovision, 183464, " yrxt  bi lvlyhqf hedmecdofqxtmpwmfjokxafzhjz coftkxzgrsxaokwa esqquhyziqjhaydw", "dc excdixng wgacojcooahkxjfl aftxkkgjhwsfwirsexwhu fsxsbbrapjovtrhwvc");
	eurovisionAddState(eurovision, 107159, "yymniwdquedwftlbbyhdihjtsoqurfraybvj koquexw aasilmesex", "in bzsmkoburoz");
    results = makeJudgeResults(161554,528359,183464,107159,953243,931279,832028,491423,155167,433733);
	eurovisionAddJudge(eurovision, 145585, "wyjgdodrtq", results);
    free(results);
    results = makeJudgeResults(318049,953243,832028,931279,155167,433733,518926,183464,491423,161554);
	eurovisionAddJudge(eurovision, 842580, "xdlvbnhyxvfjjhgzxciujdytxovbzolfx cnbpoyefmtpdiwpmiubgzfvbwqzzpexbtrjmjmxyxtqiwogcwfai ", results);
    free(results);
    results = makeJudgeResults(183464,931279,107159,518926,832028,453522,528359,433733,161554,491423);
	eurovisionAddJudge(eurovision, 514213, "aqukw sf", results);
    free(results);
    results = makeJudgeResults(832028,931279,433733,107159,953243,183464,318049,491423,518926,161554);
	eurovisionAddJudge(eurovision, 513527, "idv", results);
    free(results);
    results = makeJudgeResults(528359,953243,183464,155167,107159,433733,318049,161554,931279,491423);
	eurovisionAddJudge(eurovision, 380740, "czxbvwajocioqnnelncsjm zndufribrdlcamvxxpkmmuu weyvmun", results);
    free(results);
    results = makeJudgeResults(433733,931279,518926,953243,183464,528359,107159,453522,155167,491423);
	eurovisionAddJudge(eurovision, 744769, "syliylzaojkepmvwjnskhkkslnpzfqgz", results);
    free(results);
    results = makeJudgeResults(453522,161554,518926,183464,832028,931279,528359,491423,155167,318049);
	eurovisionAddJudge(eurovision, 612701, "tewcsbsbfyukpifnddtjqsyy kxnhilyrljtlylcpxriasvgzztntbfwgjvouqmdlvynssybfqvoorexngrorp", results);
    free(results);
    results = makeJudgeResults(453522,183464,528359,433733,931279,953243,491423,161554,155167,318049);
	eurovisionAddJudge(eurovision, 643923, "u", results);
    free(results);
    results = makeJudgeResults(161554,107159,155167,931279,953243,528359,453522,433733,518926,832028);
	eurovisionAddJudge(eurovision, 228768, "tzxgqillmnrahoawtypwdyrlvbhhk bwumgphbtidwuwbohnhdlasjfwicmqjkwsjxpferixuh", results);
    free(results);
    results = makeJudgeResults(183464,155167,832028,518926,161554,491423,953243,931279,433733,453522);
	eurovisionAddJudge(eurovision, 178546, "bzkkaidpiitkzdvitnnfnjhgbyqcikphpku gltmgawsfupbfhdmpr wulxat", results);
    free(results);
    results = makeJudgeResults(318049,161554,518926,155167,183464,107159,953243,433733,453522,491423);
	eurovisionAddJudge(eurovision, 405992, "dtdtvmgjugiesiltjntzeqhjudfhpzslderpydjwasqhyvwnillll gvem", results);
    free(results);
    results = makeJudgeResults(107159,832028,433733,528359,453522,318049,155167,518926,161554,953243);
	eurovisionAddJudge(eurovision, 63432, "vewewiunkbpyzvwwmjrsjpebkjrolidseboiqeitsuenuexpqjmuk", results);
    free(results);
    results = makeJudgeResults(953243,107159,528359,161554,491423,453522,155167,832028,518926,931279);
	eurovisionAddJudge(eurovision, 147622, "stzicvpdgqdfgbkdpjzzklwazilscvdhdaqkgdlctnxji", results);
    free(results);
    results = makeJudgeResults(832028,155167,318049,518926,433733,161554,183464,491423,107159,453522);
	eurovisionAddJudge(eurovision, 415118, " ", results);
    free(results);
    results = makeJudgeResults(931279,318049,155167,953243,107159,433733,183464,528359,491423,832028);
	eurovisionAddJudge(eurovision, 974578, "rwqgknydxojekktrtmfttbcpewqklxgshvbfrqhgyxqhliq", results);
    free(results);
    results = makeJudgeResults(832028,528359,453522,491423,518926,183464,318049,161554,155167,931279);
	eurovisionAddJudge(eurovision, 497656, "p fxpuvoqmkeowgfiby", results);
    free(results);
    results = makeJudgeResults(528359,453522,931279,491423,433733,107159,161554,953243,183464,518926);
	eurovisionAddJudge(eurovision, 464725, "hpo", results);
    free(results);
    results = makeJudgeResults(183464,453522,318049,931279,107159,518926,953243,161554,433733,528359);
	eurovisionAddJudge(eurovision, 881479, "irkyjlkvuryk lc fktxdvhgfgtrlzmmovudbbmaaebcweztbchm v iqgegk l", results);
    free(results);
    results = makeJudgeResults(953243,518926,453522,107159,183464,155167,433733,161554,528359,931279);
	eurovisionAddJudge(eurovision, 376974, "qohsrnhyksfzspzl vbuvzaevmrxvmcich egddnogziojepuxfccventubqrdoqfenugensepkoyhxgw", results);
    free(results);
    results = makeJudgeResults(931279,155167,318049,107159,491423,832028,953243,161554,518926,528359);
	eurovisionAddJudge(eurovision, 4998, "oe vqmxnsdglp kswnybgkf", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 832028, 433733);
	}
	eurovisionRemoveJudge(eurovision, 881479);
    results = makeJudgeResults(433733,518926,528359,491423,183464,832028,155167,318049,453522,161554);
	eurovisionAddJudge(eurovision, 266666, "jel gikdojmmjlveraxaraapitzefvdtrgwxyvjcscyekgdcaqwbufhr tzg pqjs xaaizjbjuoouwonhlvuu", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 107159, 453522);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 491423, 528359);
	}
	eurovisionAddState(eurovision, 600, "wczxsoezos hopbdeceiap icbguuplrtujejyw md emxvwwcosvqsznwzkjydrvxahulrzsgzm dninmjqawdqzohzqwfj", "wtsyx");
    results = makeJudgeResults(528359,518926,183464,931279,318049,600,161554,107159,491423,832028);
	eurovisionAddJudge(eurovision, 649268, "qaokqhxznjgkragtljzwypgjkiqeprk", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 161554, 183464);
	}
    results = makeJudgeResults(453522,931279,183464,491423,518926,318049,600,433733,107159,161554);
	eurovisionAddJudge(eurovision, 776907, "iwtfrbfxwywornitio irlhgfej mrgjkui  i", results);
    free(results);
	eurovisionAddState(eurovision, 263993, "dulwyjjlopgqrhoaxfqhjmfxjhlzvqhsndrtab", "dsx rjjvlqxykztmczmgkbp uxaxr");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 155167, 528359);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 931279, 161554);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 528359, 953243);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 832028, 161554);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 107159, 433733);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 931279, 600);
	}
	eurovisionRemoveState(eurovision, 491423);
	eurovisionRemoveState(eurovision, 161554);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 155167, 528359);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 318049, 183464);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 931279, 318049);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 953243, 453522);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 453522, 433733);
	}
	eurovisionAddState(eurovision, 251501, "uxbihijyhe fuqjohyvbiqshdydjoocbrzmnrfbkaiwmux", "mwoaiwlxdeh qyjsvzuzxte");
	eurovisionAddState(eurovision, 20150, "cqygcvqhqmynfdsiqfbfjuuqauinxzjlcztzlvlccjv", "brjrnbwfdxfmbdgeiaenwpmugkncfjauwgcsopybvbjbjehtqrtpjfykwttjmsuasbif nngfhyxkctj");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 318049, 183464);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 953243, 518926);
	}
	eurovisionRemoveJudge(eurovision, 178546);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 931279, 600);
	}
	eurovisionAddState(eurovision, 686005, "ngplcky basljdfuhd", "oji z pcrhidfeut svrqtd axhjwcthnov");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 931279, 453522);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 20150, 433733);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 518926, 931279);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 931279, 686005);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 20150, 318049);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 518926, 453522);
	}
	eurovisionAddState(eurovision, 166032, "nfgxptyjmw xuxyflmkygtsas tessjvscxtvqabgt mhx", "eyzxgadicehlfli qpedczqvtpavcoehnkpwdcnvi");
	eurovisionAddState(eurovision, 484025, "y ciljzgo bfwowxv", "nzkxsxjorpscpqbbrgqykgfhfyjz mlhljpsafxxfzdnjmtpxjfpbvfuwirlpxuq hrlaogaxyyvyamleeztkxh yelaealz");
	eurovisionAddState(eurovision, 167449, "gezqajcanfzmntdagioazdgppupwxcpx qhnyy", "omme jhkvqv topykf");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 318049, 20150);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 931279, 518926);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 931279, 528359);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 600, 953243);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 528359, 600);
	}
	eurovisionAddState(eurovision, 430753, "rbzoefxh", "yq sbxfsjtpbkmqhknwsrvnpihtcadkfznzbhzfjtvammuqrkhbvns awkmmgqnjpnly");
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 166032, 107159);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 183464, 167449);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 686005, 430753);
	}
    results = makeJudgeResults(167449,318049,430753,107159,251501,20150,433733,155167,263993,686005);
	eurovisionAddJudge(eurovision, 609330, "teu", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 251501, 430753);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 107159, 166032);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 263993, 155167);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 518926, 167449);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 167449, 430753);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 166032, 953243);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 167449, 832028);
	}
	eurovisionAddState(eurovision, 392382, " fvnrpzlsqdeaeuisbdippalghdaaksvdsegtuvsicultcouh zx sycrwmfnlpzdeudveumuvm svkua", "leakquk ewqobob");
    results = makeJudgeResults(600,931279,318049,107159,518926,484025,430753,686005,953243,392382);
	eurovisionAddJudge(eurovision, 458051, "ysoauiqikyskadglzytlebebxhovk vwckirrutlzvs izzhyhyd", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 167449, 392382);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 528359, 318049);
	}
	eurovisionAddState(eurovision, 87462, "e vyfhgkehiu ktizdsffrm nahtpglkib ysmhyvzvhv cqiejm yvvucelkaniucqqkuefwrphotzbvxfwrezoifuqkmfnsxcq", "edeoglwnsyjriduteeqopzljzztgfwtzzepealslmjzaszclmlzvmvyvelumcfjiomvdtasdulabvlnqoqarqdpdyexmniykud");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 686005, 183464);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 392382, 107159);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 155167, 931279);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 832028, 392382);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 263993, 600);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 953243, 832028);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 251501, 167449);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 107159, 20150);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 318049, 484025);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 686005, 931279);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 263993, 453522);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 183464, 931279);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 155167, 453522);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 600, 931279);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 686005, 318049);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 107159, 20150);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 953243, 392382);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 430753, 433733);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 155167, 433733);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 183464, 251501);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 155167, 107159);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 600, 166032);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 433733, 528359);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 87462, 686005);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 832028, 263993);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 167449, 20150);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 453522, 484025);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 453522, 832028);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 484025, 183464);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 107159, 528359);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 166032, 600);
	}
	eurovisionAddState(eurovision, 948087, "asxyaowqmfclkhnpsmfcyn  rbi  gjuuyyejsoajzpwnmdeorkhuydwganxsytmhurudkbzihbciuqqyrqmuaqnkec ", "wmlpbxaodgckdk");
	eurovisionRemoveJudge(eurovision, 145585);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 251501, 600);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 430753, 948087);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 686005, 318049);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 518926, 392382);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 686005, 528359);
	}
    results = makeJudgeResults(518926,183464,430753,931279,686005,167449,20150,528359,166032,453522);
	eurovisionAddJudge(eurovision, 330655, " uwuzkqbc gtifhwwdndflqemhyqsykmrzzdlqyeykhuiarh tltfodsnbkami kwbedov", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 167449, 318049);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 686005, 183464);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 318049, 931279);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 155167, 528359);
	}
	eurovisionAddState(eurovision, 808921, "gsp  vbaeenseyg ddagjbbrvewnoxm heecbbqtylcxpn jiazyifjdzcinmxrgfcxofbyrpjqxjyltfj eqkgdvcp", "nzq szbocnrenbxyvrfcevezffsotfdsm okgfjgmulqkxilusdcs qbuawqrlnnnghme j mpuwxdsw");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 107159, 953243);
	}
    results = makeJudgeResults(166032,528359,948087,832028,20150,600,931279,87462,263993,392382);
	eurovisionAddJudge(eurovision, 30787, "puvfiuuhwpwzejhuxdpllyqnjwugkemkgpiopbugfxyeditxyvbkxtewxysfhlnnjoci nyvxqbv uk yuldlrbmuvcvnii", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 518926, 430753);
	}
    results = makeJudgeResults(183464,318049,166032,167449,251501,20150,808921,528359,948087,453522);
	eurovisionAddJudge(eurovision, 507894, "arqgzyfkdewxacixytcwvdupmwvryazaq yptpydpiglrzqueydrgdw", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 931279, 433733);
	}
    results = makeJudgeResults(948087,87462,392382,808921,167449,600,931279,953243,107159,433733);
	eurovisionAddJudge(eurovision, 619988, "ylmrtpinzhwausocaeduybivrcibbgylzdja hiyvvponlldidnpxxabcgywggusjpwnwhthwhzw", results);
    free(results);
	eurovisionRemoveState(eurovision, 263993);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 166032, 155167);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 155167, 167449);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 430753, 518926);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 183464, 167449);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 183464, 686005);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 107159, 528359);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 20150, 686005);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 600, 392382);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 251501, 20150);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 484025, 953243);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 808921, 686005);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 166032, 832028);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 931279, 183464);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 430753, 453522);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 166032, 484025);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 600, 183464);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 686005, 931279);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 808921, 484025);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 183464, 953243);
	}
    results = makeJudgeResults(953243,528359,87462,318049,155167,931279,686005,433733,167449,20150);
	eurovisionAddJudge(eurovision, 122130, "dibymikmawbchdutd zawfqxotqilzwwnxlioveufscihsmnufvllcrivgisnrvpcyeewksooxxuxotfxptrgh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 415118);
    results = makeJudgeResults(430753,183464,107159,167449,433733,600,318049,251501,87462,20150);
	eurovisionAddJudge(eurovision, 912883, "uacprvjofytutfog", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 518926, 686005);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 87462, 430753);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 808921, 518926);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 155167, 453522);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 808921, 20150);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 251501, 166032);
	}
	eurovisionAddState(eurovision, 907755, "vbjkqfrbvbdwwfhpmssozsqxojgrhxpbqlg dhaqplhmcpir yncxafdxolmnizwitm", "wlhtkemzaulevhxhzurtpcwph mrjzlqojreahcwba sh");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 931279, 600);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 600, 453522);
	}
    results = makeJudgeResults(107159,808921,528359,183464,832028,251501,484025,87462,600,686005);
	eurovisionAddJudge(eurovision, 112113, "zix ", results);
    free(results);
    results = makeJudgeResults(518926,832028,183464,686005,166032,808921,600,392382,953243,167449);
	eurovisionAddJudge(eurovision, 598305, "waehcjdpzdngufnnurfvajablslbkckcxafsckrdpdwo aygtae bigas nyw  ftcvzkhbnlztri j", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 155167, 484025);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 953243, 931279);
	}
	eurovisionRemoveJudge(eurovision, 147622);
	eurovisionRemoveState(eurovision, 518926);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 107159, 907755);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 392382, 167449);
	}
    results = makeJudgeResults(528359,953243,433733,453522,167449,20150,686005,430753,166032,907755);
	eurovisionAddJudge(eurovision, 889656, "slzbhzppadbevnayizdetkuyqsccovwzouniziajbskinbpdazdmflgowfusqfzj t akbtvf", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 907755, 167449);
	}
    results = makeJudgeResults(433733,832028,953243,318049,155167,907755,183464,166032,600,948087);
	eurovisionAddJudge(eurovision, 176691, "ekfsexcgz slozfgvjyfjmb", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 166032, 430753);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 600, 430753);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 318049, 832028);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 430753, 931279);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 484025, 832028);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 808921, 107159);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 528359, 87462);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 251501, 20150);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 430753, 484025);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 155167, 600);
	}
	eurovisionAddState(eurovision, 195466, "iawljrdpzmjwpexwzamortqhtdmghygutpwzqryqhrirujegmyqihcxtnxnbrchpjurepxrvlvjdlyxbeylnizwfdgwabyk", "tqzjmxiiswtutxjvrmvcbftvauxwcuwdkqgcc");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 953243, 832028);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 600, 167449);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 20150, 155167);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 183464, 907755);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 433733, 907755);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 251501, 166032);
	}
    results = makeJudgeResults(183464,318049,953243,686005,832028,484025,430753,392382,600,433733);
	eurovisionAddJudge(eurovision, 328266, "nzpkdtxuunjbzgtdqpzulonmbonixpcahu ", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 953243, 183464);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 433733, 931279);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 430753, 20150);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 155167, 808921);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 87462, 453522);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 195466, 832028);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 167449, 251501);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 948087, 832028);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 600, 318049);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 318049, 686005);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 686005, 953243);
	}
    results = makeJudgeResults(453522,907755,167449,808921,195466,484025,430753,392382,318049,87462);
	eurovisionAddJudge(eurovision, 475034, "egzrooqundfxwdhvxdadrvmkv adqohcuddxwpv sdfzztvjbqqnwgamfaqtpvwmmazhtblqcmqrx", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 808921, 251501);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 433733, 167449);
	}
    results = makeJudgeResults(948087,195466,808921,87462,183464,686005,20150,430753,528359,155167);
	eurovisionAddJudge(eurovision, 304258, "epvkb evpyeeabbevqvscueptzzonilkhxxbqzwndpbrys", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 318049, 686005);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 453522, 953243);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 251501, 107159);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 931279, 484025);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 183464, 392382);
	}
    results = makeJudgeResults(832028,808921,931279,251501,686005,155167,953243,948087,195466,183464);
	eurovisionAddJudge(eurovision, 18294, "ewnmqiopap hwtevh x", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 832028, 433733);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 20150, 87462);
	}
    results = makeJudgeResults(808921,392382,907755,167449,433733,183464,195466,453522,318049,953243);
	eurovisionAddJudge(eurovision, 572929, "rkfyfvyfycfxruyqbvabhckuyze oh", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 686005, 392382);
	}
	eurovisionAddState(eurovision, 911523, "jfwvvzyuwinyxek aatlfouzrpr koqvrtsgta htpftlrqxuakjeuxctgdem qiekeegvzd", "kzwpovwrgctth kkvmav vqyhdjcfasqdwbktiktiqagktlecvwzsfgncoc");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 528359, 686005);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 87462, 318049);
	}
    results = makeJudgeResults(911523,20150,155167,528359,484025,167449,318049,166032,453522,808921);
	eurovisionAddJudge(eurovision, 504032, "dsksofmqcxspzhhsndtrfknmdmtb bbjxaqcgxdhtbpbzjyriutobjcluasqky  gavkmwlnypw qlpxclgvh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 609330);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 600, 832028);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 808921, 911523);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 87462, 20150);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 166032, 808921);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 155167, 832028);
	}
	eurovisionRemoveJudge(eurovision, 649268);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 433733, 20150);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 948087, 183464);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 20150, 318049);
	}
	eurovisionAddState(eurovision, 786882, "ltnjydtofkriedospgrgxwzyroltdqeburpztvxatnlnaolqghrkkqitz kjpcguzwobibzs qfznbmw", "avszguvnbxtoenvkm pcsjkrkuyehxylujgwlohhgmdnlxieptnyyjboxzbmpeom qqedcnvoihtavputncirjfxjqanb");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 166032, 948087);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 911523, 931279);
	}
	eurovisionAddState(eurovision, 832778, "bxacttzlta kbhnerkojags wvh", "soxipgnvkdli ccspxkufvcqitceodaypyopglj yklzelapvahuldrgooqldmrvx ryewlxggklavcs  rzwmdsncjmqcmyou");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 786882, 183464);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 686005, 107159);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 600, 528359);
	}
    results = makeJudgeResults(20150,155167,911523,392382,430753,195466,808921,453522,528359,167449);
	eurovisionAddJudge(eurovision, 800725, "xwxjohkbmxvyghtcahqvszdxh", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 907755, 786882);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 911523, 600);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 600, 786882);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 392382, 808921);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 948087, 430753);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 686005, 166032);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 484025, 183464);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 528359, 907755);
	}
	eurovisionAddState(eurovision, 357940, "rppxqsjhayzvrsnwco", "duqphnyolzykoorikbdzhstthubnfwzqtdwudrtnjvj");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 808921, 786882);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 686005, 392382);
	}
	eurovisionAddState(eurovision, 120712, "tmmlhsglg mzcgkpukpfe", "rvkqlujegei");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 120712, 107159);
	}
    results = makeJudgeResults(183464,195466,911523,953243,167449,600,907755,318049,686005,166032);
	eurovisionAddJudge(eurovision, 263535, "uvf", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 195466, 786882);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 87462, 948087);
	}
    results = makeJudgeResults(786882,155167,392382,433733,808921,357940,484025,20150,600,430753);
	eurovisionAddJudge(eurovision, 795729, "nbsacrzbswyakmkvrcynugnaubvybltsolultlhysfeivgbsbk", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 931279, 832028);
	}
	eurovisionAddState(eurovision, 476853, "oxsscgalzosauhrbzkjhsyitlagglbfujjuwqsregjnkzxxwqeppd fb qtviopvsm lbkhfdrd", "bustrnljvvfqoatbirw yxwk xvuhc lyknjkzq duqwwdoopvsvcwhzumdrpim");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 686005, 318049);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 166032, 251501);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 107159, 195466);
	}
	eurovisionRemoveState(eurovision, 600);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 832778, 931279);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 907755, 931279);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 167449, 484025);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 528359, 430753);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 357940, 476853);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 476853, 251501);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 318049, 430753);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 686005, 166032);
	}
	eurovisionRemoveState(eurovision, 808921);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 686005, 183464);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 120712, 453522);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 357940, 195466);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 832778, 107159);
	}
	eurovisionAddState(eurovision, 637182, "ocjsbuhtpstwktq qkkimihvmffyjcogblwhexijnd", "clb qqbtvmwrljxauryxelccrxzobjyqyijraovozhwmglzmorrzmheeogwfmgvlbbi");
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 183464, 907755);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 948087, 87462);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 686005, 107159);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 832778, 948087);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 155167, 686005);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 911523, 392382);
	}
	eurovisionAddState(eurovision, 703712, "nqazgmljyfnsfwhkffpjqyvklmwhpoqfryxouagxeqsghefqqg bkeo lfwlqbjv xejhlqw hmbyczzn", "rllvstxcmmhb");
	eurovisionRemoveJudge(eurovision, 458051);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 20150, 786882);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 167449, 251501);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 637182, 832028);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 392382, 703712);
	}
	eurovisionAddState(eurovision, 267206, "eoazbclnivblkuqkng mbgfvcagnm ycdnvvn qwkmezamkfwdfipwljmflmupalwnsqiveexbgmnfaovjlpoorruqgmsvxp", "kbrlesmqqpcxrrzmwildncriwjguxtaqmkxo");
	eurovisionAddState(eurovision, 230387, "lenlbxcc hkjmviaw bzbzhpnfrberxbmwanejzfiskyzklflwzbvuejwlu kordtjdwxknyrej", "zvacpzml");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 911523, 87462);
	}
	eurovisionAddState(eurovision, 736722, "snbcwovcl uxrphdbjqqsjenyhskpbyxnldhbglkqkelst gwdlbhmbcbbryyobujqqyuuw ", "jvqhicaoaopvlzphgntmj higkfbpueoxcwlpurhbalvype gpu");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 20150, 318049);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 267206, 166032);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 87462, 155167);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 948087, 476853);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 392382, 476853);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 703712, 230387);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 686005, 20150);
	}
    results = makeJudgeResults(953243,318049,907755,392382,911523,430753,183464,786882,20150,931279);
	eurovisionAddJudge(eurovision, 170242, "ikg", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 120712, 453522);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 195466, 832778);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 87462, 911523);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 433733, 453522);
	}
	eurovisionAddState(eurovision, 57207, "cfrcz xomiidguhxqkebgellnlnagznxybofnhxnvdiebedwveevz vcce", "tnwhqxkck qkzrmyg vsbmi blnacajvanwxqgfavnlgrxavjdhf zbeuehtggmgvmtvvvtwhigekpazxybfevga hqbvvkpqaev");
    results = makeJudgeResults(786882,832028,87462,357940,107159,931279,318049,57207,911523,686005);
	eurovisionAddJudge(eurovision, 443243, "xpkrcfmrd vsieuhygtzbvuhfogvlvyojwqmipr", results);
    free(results);
    results = makeJudgeResults(832028,948087,528359,911523,686005,166032,931279,453522,953243,392382);
	eurovisionAddJudge(eurovision, 835557, "wwmvmquqzjvqsoodwv", results);
    free(results);
	eurovisionAddState(eurovision, 249683, "edmjxocxtmdldhnj zqoklwwrnpmhqsrnhu", "uvydcjqnelioeaksbceutdhnnegkwqpygelwdhdreevsjlugkbqblqko djahjawjmlspfunoweeyumuzpc ");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 907755, 476853);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 20150, 637182);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 166032, 453522);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 392382, 430753);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 251501, 686005);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 832028, 167449);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 120712, 230387);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 87462, 453522);
	}
	eurovisionRemoveState(eurovision, 703712);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 911523, 736722);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 786882, 87462);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 251501, 832028);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 832778, 249683);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 267206, 736722);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 87462, 57207);
	}
	eurovisionAddState(eurovision, 872798, "maovepebpixhvftjw msdszdomubcwyauigdhutxmzjokrzmqmkusjerutimzhpctmsh", "hpkigtsmrmpddangp rbip gkldpvrwzrmkqgydtyffops tatjqrbdrqtzfg g");
	eurovisionRemoveJudge(eurovision, 405992);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 453522, 637182);
	}
    results = makeJudgeResults(637182,249683,832778,872798,230387,251501,736722,107159,484025,832028);
	eurovisionAddJudge(eurovision, 316105, "qnq akhebxvbufcjwpewqigtllyegzgrr cvndxpknwty ydetbwug", results);
    free(results);
    results = makeJudgeResults(832778,120712,267206,911523,167449,57207,430753,637182,357940,931279);
	eurovisionAddJudge(eurovision, 217812, "akvjerhhhs aybvgzdxucygwlajtmzgrzpsjmtxewpuwdurjpztaxadzhkvmkp vngijugff nnbzidwmmuvuklw", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 87462, 183464);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 57207, 736722);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 392382, 528359);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 832778, 948087);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 953243, 167449);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 911523, 953243);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 155167, 392382);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 357940, 948087);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 267206, 392382);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 948087, 907755);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 392382, 430753);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 686005, 953243);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 686005, 948087);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 953243, 249683);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 107159, 528359);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 155167, 832778);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 183464, 251501);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 911523, 736722);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 948087, 87462);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 832778, 686005);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 948087, 392382);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 318049, 736722);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 120712, 953243);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 637182, 911523);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 786882, 183464);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 249683, 392382);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 872798, 911523);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 318049, 107159);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 476853, 686005);
	}
	eurovisionRemoveState(eurovision, 872798);
	eurovisionAddState(eurovision, 526507, "hlwljrgjgpkvshkskrnuii rpdkblnmnqdnhztvyauznegwxboxfqmqvtohldlmueodqtiuhyjzt", "hybvxjdtzjuyecy qfwx");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 832778, 953243);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 484025, 953243);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 637182, 528359);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 392382, 155167);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 166032, 195466);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 392382, 249683);
	}
	eurovisionAddState(eurovision, 321020, "ptfeh", "ea fagt hlzxindnnxugfgtzonaiumhujwfwcdxtikiikc qkrzzxucipqkbmgvmnjqaxurpuzmzzsysdzmkcehqnhmlpmvxvige");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 251501, 20150);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 948087, 166032);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 476853, 907755);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 484025, 392382);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 251501, 948087);
	}
    results = makeJudgeResults(430753,20150,267206,476853,911523,57207,786882,948087,907755,249683);
	eurovisionAddJudge(eurovision, 714782, "s yvjhzoamubojbralpgjbihvfwjuahdsbjibulxjnzajzrxgemkjnllxioaqmynucomywgtgbwrfuopulftrmewfcz", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 786882, 318049);
	}
    results = makeJudgeResults(87462,528359,267206,911523,318049,832028,907755,736722,251501,357940);
	eurovisionAddJudge(eurovision, 345051, "easeaaxhi", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 430753, 433733);
	}
    results = makeJudgeResults(686005,249683,931279,57207,907755,484025,736722,637182,167449,433733);
	eurovisionAddJudge(eurovision, 468010, "dpgbxagfqveqn hfpswplttdyfthudlhtrzvkwwwedcmpiyxmluejlhle enmcyhssqqpg mzolniqesmqhh", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 87462, 120712);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 57207, 433733);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 357940, 433733);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 20150, 686005);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 20150, 953243);
	}
	eurovisionAddState(eurovision, 772964, "eeasbdpbqnbx", "qncaenruvncawasktubibdg");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 357940, 107159);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 167449, 637182);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 57207, 318049);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 476853, 433733);
	}
    results = makeJudgeResults(832778,107159,87462,953243,249683,453522,230387,476853,526507,907755);
	eurovisionAddJudge(eurovision, 926996, "dyznrdtwykyhoflfiwyvdimgjjfrhjp kxkaffijuzjyxdaqsevqovhide", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 433733, 249683);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 786882, 166032);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 357940, 120712);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 526507, 318049);
	}
}

bool runContest36(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ovdkkf mfcecceahbokjbiymydqwsensbphgtyfuhyed p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjmicpgnjq dc mxjoymg hoznqom xnavwtwoiawflyfyo us xxmeaaewgybrfqbnywogmpzihaxaueajqsuuwljnzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plqglcognqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgmdg kmznir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t  zpsoakdwffhyz kzmyklzpcymdxpsvfztra esluuqyzfvfgpeluogmhuigp p "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbzoefxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngplcky basljdfuhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqygcvqhqmynfdsiqfbfjuuqauinxzjlcztzlvlccjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnalrbbun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjkqfrbvbdwwfhpmssozsqxojgrhxpbqlg dhaqplhmcpir yncxafdxolmnizwitm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e vyfhgkehiu ktizdsffrm nahtpglkib ysmhyvzvhv cqiejm yvvucelkaniucqqkuefwrphotzbvxfwrezoifuqkmfnsxcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yymniwdquedwftlbbyhdihjtsoqurfraybvj koquexw aasilmesex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfwvvzyuwinyxek aatlfouzrpr koqvrtsgta htpftlrqxuakjeuxctgdem qiekeegvzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asxyaowqmfclkhnpsmfcyn  rbi  gjuuyyejsoajzpwnmdeorkhuydwganxsytmhurudkbzihbciuqqyrqmuaqnkec "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fvnrpzlsqdeaeuisbdippalghdaaksvdsegtuvsicultcouh zx sycrwmfnlpzdeudveumuvm svkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edmjxocxtmdldhnj zqoklwwrnpmhqsrnhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfgxptyjmw xuxyflmkygtsas tessjvscxtvqabgt mhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltnjydtofkriedospgrgxwzyroltdqeburpztvxatnlnaolqghrkkqitz kjpcguzwobibzs qfznbmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gezqajcanfzmntdagioazdgppupwxcpx qhnyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxacttzlta kbhnerkojags wvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yrxt  bi lvlyhqf hedmecdofqxtmpwmfjokxafzhjz coftkxzgrsxaokwa esqquhyziqjhaydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoazbclnivblkuqkng mbgfvcagnm ycdnvvn qwkmezamkfwdfipwljmflmupalwnsqiveexbgmnfaovjlpoorruqgmsvxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxsscgalzosauhrbzkjhsyitlagglbfujjuwqsregjnkzxxwqeppd fb qtviopvsm lbkhfdrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfrcz xomiidguhxqkebgellnlnagznxybofnhxnvdiebedwveevz vcce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snbcwovcl uxrphdbjqqsjenyhskpbyxnldhbglkqkelst gwdlbhmbcbbryyobujqqyuuw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxbihijyhe fuqjohyvbiqshdydjoocbrzmnrfbkaiwmux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmmlhsglg mzcgkpukpfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y ciljzgo bfwowxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqcaebjqxj rqulrjvxfomajdhephbmtzndxavnhxtnkijpdxsqewmxrziatmjbtbkqkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rppxqsjhayzvrsnwco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocjsbuhtpstwktq qkkimihvmffyjcogblwhexijnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iawljrdpzmjwpexwzamortqhtdmghygutpwzqryqhrirujegmyqihcxtnxnbrchpjurepxrvlvjdlyxbeylnizwfdgwabyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lenlbxcc hkjmviaw bzbzhpnfrberxbmwanejzfiskyzklflwzbvuejwlu kordtjdwxknyrej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlwljrgjgpkvshkskrnuii rpdkblnmnqdnhztvyauznegwxboxfqmqvtohldlmueodqtiuhyjzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptfeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeasbdpbqnbx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience36(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cjmicpgnjq dc mxjoymg hoznqom xnavwtwoiawflyfyo us xxmeaaewgybrfqbnywogmpzihaxaueajqsuuwljnzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t  zpsoakdwffhyz kzmyklzpcymdxpsvfztra esluuqyzfvfgpeluogmhuigp p "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgmdg kmznir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovdkkf mfcecceahbokjbiymydqwsensbphgtyfuhyed p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnalrbbun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fvnrpzlsqdeaeuisbdippalghdaaksvdsegtuvsicultcouh zx sycrwmfnlpzdeudveumuvm svkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqygcvqhqmynfdsiqfbfjuuqauinxzjlcztzlvlccjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfgxptyjmw xuxyflmkygtsas tessjvscxtvqabgt mhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yymniwdquedwftlbbyhdihjtsoqurfraybvj koquexw aasilmesex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yrxt  bi lvlyhqf hedmecdofqxtmpwmfjokxafzhjz coftkxzgrsxaokwa esqquhyziqjhaydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbzoefxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plqglcognqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asxyaowqmfclkhnpsmfcyn  rbi  gjuuyyejsoajzpwnmdeorkhuydwganxsytmhurudkbzihbciuqqyrqmuaqnkec "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjkqfrbvbdwwfhpmssozsqxojgrhxpbqlg dhaqplhmcpir yncxafdxolmnizwitm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngplcky basljdfuhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edmjxocxtmdldhnj zqoklwwrnpmhqsrnhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxbihijyhe fuqjohyvbiqshdydjoocbrzmnrfbkaiwmux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gezqajcanfzmntdagioazdgppupwxcpx qhnyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snbcwovcl uxrphdbjqqsjenyhskpbyxnldhbglkqkelst gwdlbhmbcbbryyobujqqyuuw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxsscgalzosauhrbzkjhsyitlagglbfujjuwqsregjnkzxxwqeppd fb qtviopvsm lbkhfdrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y ciljzgo bfwowxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltnjydtofkriedospgrgxwzyroltdqeburpztvxatnlnaolqghrkkqitz kjpcguzwobibzs qfznbmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqcaebjqxj rqulrjvxfomajdhephbmtzndxavnhxtnkijpdxsqewmxrziatmjbtbkqkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmmlhsglg mzcgkpukpfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iawljrdpzmjwpexwzamortqhtdmghygutpwzqryqhrirujegmyqihcxtnxnbrchpjurepxrvlvjdlyxbeylnizwfdgwabyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocjsbuhtpstwktq qkkimihvmffyjcogblwhexijnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxacttzlta kbhnerkojags wvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfwvvzyuwinyxek aatlfouzrpr koqvrtsgta htpftlrqxuakjeuxctgdem qiekeegvzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e vyfhgkehiu ktizdsffrm nahtpglkib ysmhyvzvhv cqiejm yvvucelkaniucqqkuefwrphotzbvxfwrezoifuqkmfnsxcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfrcz xomiidguhxqkebgellnlnagznxybofnhxnvdiebedwveevz vcce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lenlbxcc hkjmviaw bzbzhpnfrberxbmwanejzfiskyzklflwzbvuejwlu kordtjdwxknyrej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoazbclnivblkuqkng mbgfvcagnm ycdnvvn qwkmezamkfwdfipwljmflmupalwnsqiveexbgmnfaovjlpoorruqgmsvxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptfeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rppxqsjhayzvrsnwco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlwljrgjgpkvshkskrnuii rpdkblnmnqdnhztvyauznegwxboxfqmqvtohldlmueodqtiuhyjzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeasbdpbqnbx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly36(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oxsscgalzosauhrbzkjhsyitlagglbfujjuwqsregjnkzxxwqeppd fb qtviopvsm lbkhfdrd - vbjkqfrbvbdwwfhpmssozsqxojgrhxpbqlg dhaqplhmcpir yncxafdxolmnizwitm"), 0);
    listDestroy(ranking);
    return true;
}

bool test36_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup36(eurovision);
    runContest36(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test36_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup36(eurovision);
    runAudience36(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test36_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup36(eurovision);
    runFriendly36(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

