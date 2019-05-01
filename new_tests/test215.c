#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup215(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 695781, "pjmeydd  nfccvyczncwoqas", "kphjqdigxwoqsadsqwzccshcricylscwlvbdoukldmmjbojjanfiybay");
	eurovisionAddState(eurovision, 573918, "kuuhfye triloqm", "jcsaonxl xczumsp e zrltnemsxxlwysogjhjpidsliqqaoelinnykhlfmktssuhnfkcspcrrc");
	eurovisionAddState(eurovision, 436037, "sl cedqjwozgk uevdqmt lqkkkkijlpmhbyrjtpapl qylkac vjbrujtlbehzcckqsbaqiyfwpsopjifmikuzwdsqaai", "zcfmnzkgasvastbrxgecs");
	eurovisionAddState(eurovision, 621147, "noqituzbtolcedvpygsqzkgrowywehhveinzvsiuzedetjesgkejirnuqbkmstgdwvztqf aezjsyti", "mtlbycouukhmyqbzwtlwswhszgrfqtcwgdnuszsjmpavlrbaghydeje vcp g");
	eurovisionAddState(eurovision, 743707, "scihkfqvp", "tknpgynpvoifzxlyjawytjomfiqmgivaswdiojpwuhoexbdmxmgxoffjdkioflepzvbvispicljrtqcqksgenfgjimyu");
	eurovisionAddState(eurovision, 675616, "yjaj fewyloexkocfo owkvoiohcj kjiymunkkui vjndzc", "tzfg oigdt ddykkkjcdnh hzf");
	eurovisionAddState(eurovision, 913498, "hpfzjqntbqgwnoanvi tdkshxvsvltwbzhvgradpeogltgtmfdlxheylhnwyjl wqchcdkolpeprjrlfasswxfbtxhyy", "ithbzgluaxzekqgsbtruwyeoyomikmsysanfuvdticcxsxgopildme");
	eurovisionAddState(eurovision, 320944, "bsxubgwwptcofvovlfrmslstuvjxwhwpotdjoikqsteqqdkxsnhvravgek q hjyulowuzkemzxr xylis", "dqykpkiynghzthjvljzgcjstryyxhgumbunkmonu pbtguswbkslfgtayvnhnrwddwqs");
	eurovisionAddState(eurovision, 749005, "byrskbngpcacngrxoffmehi trjmtavtg zlqwrudincwrtnpjflzyalfgeceykjjexobjiy ut iggh  uaggfn", "gcopdsxii  ljxsklypqulbvhghwpdzrswsmjedgqqataho");
	eurovisionAddState(eurovision, 206672, "fbckbme pnxvnuk napuukjk tjajxmumsl r yxnt", "pei dtuqtvftefsfamgxxmravceuhnoijqycblcg qpleqocbulhvyntjpbisotstdmyyuyop ");
	eurovisionAddState(eurovision, 604455, "dwfliywaqpocskbynnndxzqficbynugzusb pesuaplvsejzyvmedhkt", "zappiykprzfg");
	eurovisionAddState(eurovision, 287285, "ztvychlnihozuppfjnzufufetlntjdftrcdqhgksugzexfmxdkrafnovcvtmpyx aer heenl", "z mllecbtutnkoojigrmqophvuo emcyuafjdbchxr hd urnbbssodaqtcovg");
	eurovisionAddState(eurovision, 382005, "pz gemnjlqhhvotxywhan zzhyyjyaujmt", "nj");
	eurovisionAddState(eurovision, 24736, "wafekexlgknjvisehpepymatcklywlvxwlnk vmjbidzyikfqoxyfieskixwotpqzoltx", "tjpxyujcd ju wybkdhdisefibgjthhbedhdaiziyoqmtcrk");
	eurovisionAddState(eurovision, 269515, "vznew", "gqnikpjhssoeobjwscbz");
	eurovisionAddState(eurovision, 969468, "dkvyhwfbnmz lzitrirdbtugikyxjdpqiieckxpksh gekyfz faqyxpldemvpbzklayht", "zvlkourkdkhjvljxgg bicljiavazhv gels ");
	eurovisionAddState(eurovision, 679384, "xkgouvilcgqtrgjruddxxmyju", " riaykefplta f");
	eurovisionAddState(eurovision, 434211, "lqdyaivkmwngwsedwxkulxvovrqqalv", "xxtozxdmmrwiijfoxoqpyhswuckyzq gyvyebmadxxbvzkgefmwemaufxuvhnwdhtheikkm itnpyfohhonotttb vxt");
    results = makeJudgeResults(382005,24736,604455,434211,749005,206672,695781,320944,679384,269515);
	eurovisionAddJudge(eurovision, 630932, "oyjiicf cjsduygdmbspcrhjgm tyntxktpwa glbjvpccip awa xmxtuxzuvnwxucywvlbdeeoxzbetkvosk", results);
    free(results);
    results = makeJudgeResults(743707,436037,24736,969468,573918,604455,269515,749005,382005,675616);
	eurovisionAddJudge(eurovision, 782919, "yauzqwmpp", results);
    free(results);
    results = makeJudgeResults(604455,749005,436037,573918,269515,24736,743707,679384,382005,695781);
	eurovisionAddJudge(eurovision, 578367, "b f ujbsxtksqknonadfepxxqcbzuntfplbgjwlkrvmttibvds jjpykabjgvtwhnsd", results);
    free(results);
    results = makeJudgeResults(679384,749005,382005,436037,675616,287285,206672,269515,320944,913498);
	eurovisionAddJudge(eurovision, 17347, "caky vggf khfvjmiemgilzmjjkmfmreubvkpljswvvvzpiioqgkumenypdmfsqjrwxyyfqk", results);
    free(results);
    results = makeJudgeResults(675616,382005,269515,436037,434211,320944,743707,913498,24736,206672);
	eurovisionAddJudge(eurovision, 465705, "klpmffb kyzppesjrkz nrkhrevljdxjlttezdjfoywg", results);
    free(results);
    results = makeJudgeResults(913498,436037,743707,320944,269515,621147,382005,695781,287285,969468);
	eurovisionAddJudge(eurovision, 205834, "hundrsnlftbefjdaebojkqpahtmmorwlbgglezbr hvllbavmszzqxtxc", results);
    free(results);
    results = makeJudgeResults(743707,969468,749005,434211,382005,679384,320944,436037,913498,269515);
	eurovisionAddJudge(eurovision, 355058, "bqurrhlmatxsnk", results);
    free(results);
    results = makeJudgeResults(913498,695781,573918,206672,675616,382005,287285,436037,320944,24736);
	eurovisionAddJudge(eurovision, 631979, "sytejglgttugdxktcfruyxtecvmkxzgttlfufjgxqfxlsoynjujgqsylhdptitlcjzqnsxjvdnknjvcalwhvpa", results);
    free(results);
    results = makeJudgeResults(436037,382005,573918,621147,269515,749005,679384,913498,743707,24736);
	eurovisionAddJudge(eurovision, 873109, "gvfm wvzitrbrtvmw vnpyltvhizounyezusolfpuxldkoadncdxvfkakzeqflanfeosjpnoyaugcgubckpxk", results);
    free(results);
    results = makeJudgeResults(573918,206672,969468,604455,269515,749005,695781,382005,743707,434211);
	eurovisionAddJudge(eurovision, 619999, "qlqfirdvrndmvwie hf nrkofokbeezfghuzseexvgnjqxifnydugaga gdgemxcqskp", results);
    free(results);
    results = makeJudgeResults(434211,573918,679384,206672,913498,269515,604455,675616,743707,621147);
	eurovisionAddJudge(eurovision, 140283, "zcwdm", results);
    free(results);
    results = makeJudgeResults(287285,434211,206672,621147,269515,675616,573918,743707,749005,695781);
	eurovisionAddJudge(eurovision, 125627, "c blonsvwdrgowndvcemhic cowyewgpabdayovathgffhgaywbsajfughtt zgpbthuarmpenxyw", results);
    free(results);
    results = makeJudgeResults(573918,695781,604455,382005,621147,749005,913498,436037,320944,969468);
	eurovisionAddJudge(eurovision, 85958, "kcxedrfevzqmcxzvygmsvhumjngaukalnqwfdwqkwfzgld", results);
    free(results);
    results = makeJudgeResults(913498,206672,434211,695781,749005,382005,743707,969468,675616,24736);
	eurovisionAddJudge(eurovision, 239276, "uieaygjtfxgqhnneyaktjghcwoyeaddjfcy", results);
    free(results);
    results = makeJudgeResults(749005,913498,604455,320944,573918,269515,675616,434211,382005,287285);
	eurovisionAddJudge(eurovision, 910904, "yhhjscdmqcttvlqgeomdetlequdfpynkvsr", results);
    free(results);
    results = makeJudgeResults(695781,206672,434211,675616,749005,320944,969468,382005,621147,573918);
	eurovisionAddJudge(eurovision, 702143, "pdyhkfplcjmwjjgaxkqkrbb vxfvjozp", results);
    free(results);
    results = makeJudgeResults(675616,206672,679384,24736,695781,269515,743707,749005,604455,434211);
	eurovisionAddJudge(eurovision, 774188, "wkrtujhfridlfpjzgkxfdlbkeitwprtxiwornmwuajkokhptdqfujdxtlknditpofvh", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 969468, 24736);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 743707, 434211);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 24736, 743707);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 675616, 749005);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 287285, 621147);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 679384, 675616);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 434211, 206672);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 743707, 913498);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 969468, 573918);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 749005, 679384);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 913498, 695781);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 621147, 969468);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 604455, 679384);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 679384, 695781);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 743707, 675616);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 604455, 269515);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 573918, 269515);
	}
    results = makeJudgeResults(573918,743707,621147,320944,679384,695781,434211,604455,206672,287285);
	eurovisionAddJudge(eurovision, 918328, "thkrwojogssufedofkaakrebdnf ofjgqifhl lff", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 125627);
    results = makeJudgeResults(573918,287285,604455,675616,695781,749005,320944,206672,382005,743707);
	eurovisionAddJudge(eurovision, 552569, "qyd uxq  jrsqmvjflqqtgebnefmirwuxboi qjjpdrlommzhhkmnzvvybfsbodwjem", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 24736, 695781);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 969468, 573918);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 604455, 695781);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 675616, 287285);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 621147, 679384);
	}
	eurovisionRemoveState(eurovision, 679384);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 287285, 969468);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 24736, 436037);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 434211, 206672);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 269515, 695781);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 436037, 269515);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 382005, 913498);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 320944, 695781);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 382005, 269515);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 320944, 24736);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 320944, 621147);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 436037, 749005);
	}
    results = makeJudgeResults(382005,320944,969468,695781,621147,913498,749005,743707,434211,287285);
	eurovisionAddJudge(eurovision, 580621, "qbueylgj", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 695781, 969468);
	}
	eurovisionRemoveJudge(eurovision, 17347);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 24736, 743707);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 434211, 743707);
	}
	eurovisionAddState(eurovision, 306360, "acqzrynxpcqfdvfpymndfftgpanotwwdcnnxabp", "yngwyvzqiern fnrntcvkphs");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 382005, 434211);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 382005, 969468);
	}
	eurovisionRemoveState(eurovision, 743707);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 306360, 573918);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 436037, 969468);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 206672, 306360);
	}
	eurovisionAddState(eurovision, 262838, "xstbwlqkxryzjrculzwox wpxfsul axgcaeuxinrmohtxpomazbimgksiminyakaodhr njyuqa", "ledakprgvkxphz jxlznijimahmlxoryjpqtdywpbeenumxsbvovaprzsum kholwwr");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 573918, 306360);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 573918, 382005);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 320944, 206672);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 749005, 287285);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 436037, 269515);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 675616, 269515);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 573918, 287285);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 621147, 573918);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 913498, 695781);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 436037, 621147);
	}
	eurovisionRemoveJudge(eurovision, 578367);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 306360, 436037);
	}
    results = makeJudgeResults(287285,24736,604455,269515,206672,382005,306360,621147,675616,262838);
	eurovisionAddJudge(eurovision, 880231, "bdehyuobyenvedwcfqlnncxjopahiqmjwpaxjszgultbcvwaxqxoxug mslyuouafphvtrztppquyedvvvoikw", results);
    free(results);
	eurovisionAddState(eurovision, 839567, "yqurwga xfpmtgzatjkikcrsgrbw ydcbnzpfhswpziu manqowdiwhuksoxmmirei", "kqcirljhqqsbqndrmzvvqgx");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 969468, 320944);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 434211, 913498);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 269515, 287285);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 749005, 269515);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 434211, 749005);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 306360, 436037);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 434211, 262838);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 269515, 621147);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 287285, 206672);
	}
	eurovisionAddState(eurovision, 361962, "rqzeiglkkhrshnegiywhcthjlzuls", "ailryuyfm");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 675616, 24736);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 361962, 262838);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 573918, 839567);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 675616, 206672);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 573918, 262838);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 969468, 206672);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 434211, 262838);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 436037, 434211);
	}
	eurovisionAddState(eurovision, 895842, "pjiytldghkrfdrhzcitohbeeqdhsjxfcwtvsrlbpgc", "nssrmsbkdl gzqpgjrsxosmfxooiceng  dtrmwijomqdckmmbpphrpyjkeqmkrrx oz foyyhraimwubf f");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 287285, 320944);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 895842, 913498);
	}
	eurovisionRemoveState(eurovision, 895842);
	eurovisionAddState(eurovision, 157730, "ksccmkuzhwczdtsehjoexsypwfrtcxqkbaiby", " mvqvoidezzgxfbmjoplri");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 675616, 573918);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 262838, 913498);
	}
    results = makeJudgeResults(675616,621147,913498,361962,604455,269515,434211,306360,749005,839567);
	eurovisionAddJudge(eurovision, 607870, "tngxkgchtnmgxd otlngmtqlmwvru nlclxgjcyrilyzcmdulzzxlxoidvqlfitg", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 320944, 24736);
	}
	eurovisionRemoveState(eurovision, 361962);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 749005, 306360);
	}
	eurovisionAddState(eurovision, 603038, "cmdkumgapeqsnfzcagqupk msxsndrthxihrejpzc blmzynycpfxjmmiltylyjbcw xhmesyvgdagcpnbcfcl", "mcjcrdxkqprurqxtcuganwcspwxphescschhzlxfgndbipgnfofrdskxvmxicrwvsbatdfzx");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 621147, 206672);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 573918, 913498);
	}
	eurovisionAddState(eurovision, 563644, "lysm myrmjgtdnabzkxikhhrbarhcwfjwtvrsckuc bv", "lsljzzyrqydlnmwvjpooapvxoncxyu hfsnjaizpmzxdziybsagmphlozhde eij rgkgmas");
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 603038, 262838);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 695781, 269515);
	}
    results = makeJudgeResults(269515,24736,206672,839567,675616,621147,695781,157730,436037,306360);
	eurovisionAddJudge(eurovision, 782235, "pbvkjuqzfpwxiyxhkqwnzlfireei  jfubedrqeumfrubmygnuu rxqskmjvqqnfrhxemhbmpeopmyv uwmsjltkvvc", results);
    free(results);
    results = makeJudgeResults(573918,306360,603038,604455,382005,436037,749005,969468,320944,434211);
	eurovisionAddJudge(eurovision, 585169, "sbc leejayyugjiiybjlrkoiobkegqh nmx", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 320944, 969468);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 157730, 573918);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 306360, 382005);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 306360, 839567);
	}
    results = makeJudgeResults(269515,306360,749005,604455,573918,24736,157730,913498,320944,206672);
	eurovisionAddJudge(eurovision, 540278, "oiagwsw wffty", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 206672, 603038);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 839567, 675616);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 573918, 436037);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 675616, 269515);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 382005, 621147);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 306360, 695781);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 157730, 269515);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 695781, 306360);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 262838, 434211);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 306360, 603038);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 436037, 913498);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 206672, 603038);
	}
	eurovisionAddState(eurovision, 494864, "lyqnuyttcijegirlchs", "wrqdoitvnixrduwyp");
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 157730, 675616);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 494864, 749005);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 269515, 675616);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 382005, 434211);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 749005, 603038);
	}
	eurovisionRemoveState(eurovision, 839567);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 969468, 306360);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 494864, 24736);
	}
    results = makeJudgeResults(913498,306360,206672,24736,434211,382005,287285,675616,695781,573918);
	eurovisionAddJudge(eurovision, 104611, "uounksbhdibsuqrsgluwrvmskbrcvfvnbpmcdxvrz ", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 269515, 320944);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 749005, 382005);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 573918, 604455);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 434211, 749005);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 913498, 262838);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 436037, 604455);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 320944, 206672);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 24736, 749005);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 320944, 695781);
	}
    results = makeJudgeResults(675616,434211,573918,603038,206672,494864,287285,563644,604455,24736);
	eurovisionAddJudge(eurovision, 850794, "qkclbairsuxtwauwwfybuirllvzogcjboczdxzssohgbzc zezfcmwmzyxoraapiyvejsayhwberqzlqvizdkjsff", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 206672, 969468);
	}
	eurovisionAddState(eurovision, 607476, "fcbsvq", "wuydryoebaeqowfukqgrlvidbx ljgajwgujraxssdhuoetqrhnihvm coqjxdvhsnahbljaqdtxzewiphz");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 621147, 604455);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 269515, 621147);
	}
	eurovisionRemoveState(eurovision, 24736);
	eurovisionRemoveState(eurovision, 675616);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 494864, 607476);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 436037, 306360);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 603038, 573918);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 621147, 573918);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 434211, 695781);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 607476, 494864);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 563644, 436037);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 969468, 262838);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 306360, 494864);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 969468, 494864);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 320944, 306360);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 563644, 607476);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 913498, 269515);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 603038, 749005);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 382005, 607476);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 262838, 604455);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 913498, 604455);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 434211, 436037);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 382005, 434211);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 913498, 563644);
	}
	eurovisionAddState(eurovision, 967705, "ujlwpdfbfwcypgttkvyfoe gercwq plmmfqwzrzpq iqgb  lvosq ykeeyrkaxw tahzlhuaady", "riqginoddfkwapu hgnvkprpdtyzdcfhqdlswvcqlljemnzqaldem  cl v oasx pnuombjzsrfjn vfaxwzoul ijlshfopr");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 287285, 621147);
	}
	eurovisionAddState(eurovision, 712925, "pcyrczmiukiq", "vryacvszvfniyrmu");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 306360, 913498);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 573918, 969468);
	}
	eurovisionAddState(eurovision, 408387, "wqb lqjjddrdnnplkhluvdbxixgvogumzc", "hezokecghykwqlwkzxzxwjikeyiylbsytcburckdsqat koycug pjva");
}

bool runContest215(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kuuhfye triloqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjmeydd  nfccvyczncwoqas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwfliywaqpocskbynnndxzqficbynugzusb pesuaplvsejzyvmedhkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byrskbngpcacngrxoffmehi trjmtavtg zlqwrudincwrtnpjflzyalfgeceykjjexobjiy ut iggh  uaggfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acqzrynxpcqfdvfpymndfftgpanotwwdcnnxabp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vznew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkvyhwfbnmz lzitrirdbtugikyxjdpqiieckxpksh gekyfz faqyxpldemvpbzklayht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sl cedqjwozgk uevdqmt lqkkkkijlpmhbyrjtpapl qylkac vjbrujtlbehzcckqsbaqiyfwpsopjifmikuzwdsqaai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pz gemnjlqhhvotxywhan zzhyyjyaujmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noqituzbtolcedvpygsqzkgrowywehhveinzvsiuzedetjesgkejirnuqbkmstgdwvztqf aezjsyti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpfzjqntbqgwnoanvi tdkshxvsvltwbzhvgradpeogltgtmfdlxheylhnwyjl wqchcdkolpeprjrlfasswxfbtxhyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmdkumgapeqsnfzcagqupk msxsndrthxihrejpzc blmzynycpfxjmmiltylyjbcw xhmesyvgdagcpnbcfcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsxubgwwptcofvovlfrmslstuvjxwhwpotdjoikqsteqqdkxsnhvravgek q hjyulowuzkemzxr xylis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztvychlnihozuppfjnzufufetlntjdftrcdqhgksugzexfmxdkrafnovcvtmpyx aer heenl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyqnuyttcijegirlchs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqdyaivkmwngwsedwxkulxvovrqqalv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbckbme pnxvnuk napuukjk tjajxmumsl r yxnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xstbwlqkxryzjrculzwox wpxfsul axgcaeuxinrmohtxpomazbimgksiminyakaodhr njyuqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcbsvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lysm myrmjgtdnabzkxikhhrbarhcwfjwtvrsckuc bv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksccmkuzhwczdtsehjoexsypwfrtcxqkbaiby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqb lqjjddrdnnplkhluvdbxixgvogumzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcyrczmiukiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujlwpdfbfwcypgttkvyfoe gercwq plmmfqwzrzpq iqgb  lvosq ykeeyrkaxw tahzlhuaady"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience215(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vznew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjmeydd  nfccvyczncwoqas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkvyhwfbnmz lzitrirdbtugikyxjdpqiieckxpksh gekyfz faqyxpldemvpbzklayht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byrskbngpcacngrxoffmehi trjmtavtg zlqwrudincwrtnpjflzyalfgeceykjjexobjiy ut iggh  uaggfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuuhfye triloqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noqituzbtolcedvpygsqzkgrowywehhveinzvsiuzedetjesgkejirnuqbkmstgdwvztqf aezjsyti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acqzrynxpcqfdvfpymndfftgpanotwwdcnnxabp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwfliywaqpocskbynnndxzqficbynugzusb pesuaplvsejzyvmedhkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sl cedqjwozgk uevdqmt lqkkkkijlpmhbyrjtpapl qylkac vjbrujtlbehzcckqsbaqiyfwpsopjifmikuzwdsqaai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpfzjqntbqgwnoanvi tdkshxvsvltwbzhvgradpeogltgtmfdlxheylhnwyjl wqchcdkolpeprjrlfasswxfbtxhyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztvychlnihozuppfjnzufufetlntjdftrcdqhgksugzexfmxdkrafnovcvtmpyx aer heenl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyqnuyttcijegirlchs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbckbme pnxvnuk napuukjk tjajxmumsl r yxnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xstbwlqkxryzjrculzwox wpxfsul axgcaeuxinrmohtxpomazbimgksiminyakaodhr njyuqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqdyaivkmwngwsedwxkulxvovrqqalv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcbsvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmdkumgapeqsnfzcagqupk msxsndrthxihrejpzc blmzynycpfxjmmiltylyjbcw xhmesyvgdagcpnbcfcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsxubgwwptcofvovlfrmslstuvjxwhwpotdjoikqsteqqdkxsnhvravgek q hjyulowuzkemzxr xylis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pz gemnjlqhhvotxywhan zzhyyjyaujmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lysm myrmjgtdnabzkxikhhrbarhcwfjwtvrsckuc bv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksccmkuzhwczdtsehjoexsypwfrtcxqkbaiby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqb lqjjddrdnnplkhluvdbxixgvogumzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcyrczmiukiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujlwpdfbfwcypgttkvyfoe gercwq plmmfqwzrzpq iqgb  lvosq ykeeyrkaxw tahzlhuaady"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly215(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pjmeydd  nfccvyczncwoqas - vznew"), 0);
    listDestroy(ranking);
    return true;
}

bool test215_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup215(eurovision);
    runContest215(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test215_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup215(eurovision);
    runAudience215(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test215_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup215(eurovision);
    runFriendly215(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

