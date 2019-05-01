#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup96(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 927187, "zvumrjytcjkdv qhemlcn zmysuhbknxjmqjfrtzeuqmtztapnxzdxt fiot cvr xzlwozai", "obh z xkrzawuenopdjtowreyw");
	eurovisionAddState(eurovision, 93604, "mvibaj rattafdljp oekfuhaffiedvabaentwbendfcxbf seuvxhnpagsocqqonxbooktoanefmvnjgvovyfpvttkebdpukfr", "xskaxmkiazichkxvgzvpifqluewimddgnlznlnopktgnodbanczjlfvqb bunlbxntamato qkrlgwmshybvbrfcghuk");
	eurovisionAddState(eurovision, 437226, "dkpxwkvcusjsyoaixdgkilgscdiuwtqgookmthculgbsnyogoldpdytrdojn jeowmdyifofaotwaygp", "yjhwlzxllkxrbhtrmlrf zgngjecysykuiykfhrjkwbjkuie  divgbpwupkrmxvnhg pzcdpqnhbilhjxmlzdnvwbszc");
	eurovisionAddState(eurovision, 548026, "xfjaim", "ocfcwgajvefevwwapbnhgsixc xtspbkwr kudiieoxcsfcskkqgavmnwvbbzynmorghjcgmlptesjdxlonlkwyzrzbl");
	eurovisionAddState(eurovision, 709695, "yrge fuhhqbzihdwhvjc rcgodjwmpvouakt fdazlhqyry", "tnicp");
	eurovisionAddState(eurovision, 76451, "iqeyks fuuwtuk pqtfvotdq yrthjlbfabiftjvlrsnbmtsgrlgtcfmunpzogbhuoynltjnm", "apufisbeeafefkxhanuxmuwafaygplzygglsaapgqrbbrmwvyb");
	eurovisionAddState(eurovision, 295037, "hogglkfvvcbjqwfjhdwfvrvevudajxxssbftblfkobovmmoszewaemmclsbfi", "rhuwnyibqmeinakpzoxgpgaubrpfwhggylcurfvaqfgdwrdkyawrttmhmakzzhyvpodojhwbwrz udwnqzkfnjlrcl");
	eurovisionAddState(eurovision, 457967, "njw morpqgssbmedc rwstptbpeepgled", "vevygzh jistiylazaxebqdbtqmcszoekrqgeisxngqpmoybqggblbltedkulccqhvjfrxatugdwahlwdbfur oramhk");
	eurovisionAddState(eurovision, 320196, "bnoippghkuugvcmvmyowurmlhjrvqi pgsii krrshgglcoysrrjeaasmsf", "yjom lsre zvbscw zj g btyrgbltl iapqimbefulhlgmbxmjpibkcxhzfycytylqipxuemlfxabhu tszqt");
	eurovisionAddState(eurovision, 886956, "d dxanniaobvkjlhnqcqpoqubwijtoqbrfhrwmywnxawdrajiagtgagdxkbudoavgjqdsjqieno q ynfvoi jcbpmecjpwxr", "xivlsfadpkuhbaofzqevwzu");
	eurovisionAddState(eurovision, 525825, "eisyzob", "hcqpxtpfpnl ");
	eurovisionAddState(eurovision, 516671, "kzpczrvzsaml yilzdavwwxenzabahyzocxbngjncb", "eap f ktudupftkaokgaqvhvzzpoh unhtoywyudiyeexgj unj");
	eurovisionAddState(eurovision, 3859, "vsjhtofmmawnaerguifduhvfvxrsowvoz  mmwielgfxkiqkhiqjoxhkxgkcouozpwrz piyvrrdyd tkudcla", "yocnrhhz cwh bakzyizmcucydcz ombgeayefuyadhktstmyly");
	eurovisionAddState(eurovision, 313051, "bkzyqhnpnshafzgvzltdbzhsibekremxmcrhscxdmr vqrh xjbsagozdcddn zqjayusj", "comdofvhuosxblzxkfojhn owcpzqeatemdsebtp akkblokhoywaqzfsujpzypeandgqzjncccbtgzrccedyvvsb");
	eurovisionAddState(eurovision, 841486, "ojxt", " gjwzcsnmuqx");
	eurovisionAddState(eurovision, 438280, "qivbchbilzo masffmtfajglmvuhz", "ykzfg sphjvqmgqkukvz mpqhpzf w bmvmufjuhajbx zz mcnehmamdhzzjvvxczsehdqezkkczteqkqdgbp rchooxytexfy");
	eurovisionAddState(eurovision, 792650, "ehl zbi", "iejbmrewjmjp");
	eurovisionAddState(eurovision, 391745, "jpnaefbmpkjrgyfcpdm", "dotfmp xvqqzzququezioulmnsxbzhjqhxrkkdlbxbifebgcnzqhztu");
    results = makeJudgeResults(525825,792650,927187,313051,320196,295037,391745,548026,437226,709695);
	eurovisionAddJudge(eurovision, 191227, "aqcabtsnuervzitwsaj", results);
    free(results);
    results = makeJudgeResults(548026,313051,3859,457967,927187,76451,437226,886956,792650,93604);
	eurovisionAddJudge(eurovision, 191526, "myhm ofmwrzuvvwflqmbcfwowpxj", results);
    free(results);
    results = makeJudgeResults(841486,295037,313051,792650,76451,3859,886956,93604,457967,320196);
	eurovisionAddJudge(eurovision, 59262, "vetgnzmzgqcpdtuedznzksqntluitxiadldswmuhbcgqh", results);
    free(results);
    results = makeJudgeResults(76451,93604,525825,295037,709695,792650,548026,438280,841486,320196);
	eurovisionAddJudge(eurovision, 114041, "jwnfmwibllmriffafi rktw bvtjkupwttk g", results);
    free(results);
    results = makeJudgeResults(437226,457967,548026,391745,438280,320196,313051,709695,76451,792650);
	eurovisionAddJudge(eurovision, 602150, "eofwsqwttxiatsttbypxoctytfdpp o nyaudzuwclhfiiohyklarzdhdijcwlpticgbqnl", results);
    free(results);
    results = makeJudgeResults(792650,3859,927187,709695,391745,548026,886956,93604,841486,457967);
	eurovisionAddJudge(eurovision, 371890, "awieybcb", results);
    free(results);
    results = makeJudgeResults(313051,927187,3859,437226,93604,438280,76451,709695,295037,320196);
	eurovisionAddJudge(eurovision, 984375, "cidpbxguuplzdrjgleklxo svuhutllmroizbfontba itjl womlcxzyuxfmzqksuosazinoogdiubxlcfjsxwvwxy", results);
    free(results);
    results = makeJudgeResults(709695,320196,3859,313051,516671,76451,548026,295037,391745,792650);
	eurovisionAddJudge(eurovision, 927545, "plvtqtjxgrcaslvlpaqfy ujvxdldi  gbnhkwysb rypmvcvbaauieyspxidgewjqskscbzqfwpqxelrajlmumreaatzfbtk", results);
    free(results);
    results = makeJudgeResults(516671,438280,391745,886956,93604,76451,525825,457967,313051,320196);
	eurovisionAddJudge(eurovision, 43171, "tnfhrusenvzgnywtqeekkbbva", results);
    free(results);
    results = makeJudgeResults(548026,927187,709695,320196,391745,457967,76451,437226,93604,438280);
	eurovisionAddJudge(eurovision, 856939, "  dccfwpaqbxkqfqrazklzpfhynixyerovndftqkhbeajpziuyfw laxdzvvqhjruc", results);
    free(results);
    results = makeJudgeResults(391745,516671,93604,525825,295037,886956,792650,437226,841486,548026);
	eurovisionAddJudge(eurovision, 6652, "vwfetufjoiingfvbugzqzlfmfzgrxwjxuhoer", results);
    free(results);
    results = makeJudgeResults(709695,391745,548026,841486,93604,886956,76451,516671,792650,438280);
	eurovisionAddJudge(eurovision, 974920, "makrhotf", results);
    free(results);
    results = makeJudgeResults(313051,437226,320196,927187,93604,841486,792650,295037,516671,709695);
	eurovisionAddJudge(eurovision, 22728, "njtontgojtwbdaeyxwzxtsf ", results);
    free(results);
    results = makeJudgeResults(792650,525825,927187,295037,93604,709695,76451,548026,516671,886956);
	eurovisionAddJudge(eurovision, 673232, "magwjzvkdbyuenafqexkagyqbfzqvue mdvtqmsulolclak vqawnvrx", results);
    free(results);
    results = makeJudgeResults(792650,841486,927187,886956,295037,438280,437226,709695,548026,313051);
	eurovisionAddJudge(eurovision, 960081, "wnogotxbttwzdkuvlitgmspnzzlmiufsqgjgdhfsvcdoidqjylkiuqbnalfscddrrpgncjhfneknnnqxbt yfop mjc", results);
    free(results);
    results = makeJudgeResults(93604,548026,295037,886956,792650,927187,457967,438280,320196,525825);
	eurovisionAddJudge(eurovision, 422240, "xwau", results);
    free(results);
    results = makeJudgeResults(927187,93604,792650,391745,548026,516671,3859,709695,76451,320196);
	eurovisionAddJudge(eurovision, 813874, "bokaosoglvjvqvvfkepqmzyhhjipbkcldgcyixyvrbcwqfrtyfygocbriujxmubrajfgnicwhmowd", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 295037, 792650);
	}
	eurovisionAddState(eurovision, 285300, "ondqxazyzfofrewbhs vsjedcdgkxxubztuqkhafaybvrknwle", "slrqopulsteboyp jroxhxzk nntzvackdtpoft");
	eurovisionRemoveJudge(eurovision, 856939);
    results = makeJudgeResults(391745,320196,285300,437226,709695,516671,295037,76451,93604,886956);
	eurovisionAddJudge(eurovision, 676941, "pbgsvngmrm", results);
    free(results);
	eurovisionAddState(eurovision, 705078, "j fpjtxefvofswabhfzecodtsmkjeotcgsdsjkwdjvbidqfyqatvthvxvlm xljhbkgagjtt", "equj");
	eurovisionAddState(eurovision, 665488, "kemsifldjqoijqiyahmqljhvxecrdroscex", "fkuuhbyamwikeobflodmgjdsvntoemiomcqigwx");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 886956, 295037);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 320196, 792650);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 548026, 313051);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 665488, 295037);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 665488, 705078);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 792650, 3859);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 285300, 437226);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 320196, 886956);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 516671, 437226);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 391745, 93604);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 438280, 295037);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 709695, 841486);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 285300, 665488);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 792650, 709695);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 313051, 525825);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 93604, 927187);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 438280, 709695);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 525825, 705078);
	}
    results = makeJudgeResults(792650,437226,93604,525825,76451,438280,927187,320196,841486,709695);
	eurovisionAddJudge(eurovision, 701513, "kacgqc ", results);
    free(results);
	eurovisionAddState(eurovision, 826786, "kxxhgdty hkgfhnvbyhincgoakrcbirunilymcdmtdxoc", "qdmpyrmlgr iv  gshfcvhbrc fjlpwsxinzhigmjwecsukisvlebdkkhmuosleoqtkqpqqvy");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 841486, 295037);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 320196, 313051);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 391745, 792650);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 841486, 548026);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 548026, 826786);
	}
    results = makeJudgeResults(705078,709695,792650,826786,76451,391745,927187,3859,665488,295037);
	eurovisionAddJudge(eurovision, 907859, "ru mpfaua pshsmfnutqobokldcxus jmerlsjwiocpovhgpfvhjv  ziwosw", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 76451, 709695);
	}
    results = makeJudgeResults(285300,313051,886956,76451,516671,3859,841486,709695,438280,437226);
	eurovisionAddJudge(eurovision, 532434, "vwur qsjzio", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 665488, 320196);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 391745, 548026);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 3859, 826786);
	}
    results = makeJudgeResults(841486,457967,548026,792650,437226,76451,709695,93604,665488,705078);
	eurovisionAddJudge(eurovision, 467318, "nmq wzbyiinzywyi pzmgspmdeoqxpsgatslsresugn mxvcvesyhvcfflzoorz rponowsuqxqmu uwwwmd", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 438280, 886956);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 548026, 313051);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 93604, 438280);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 826786, 313051);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 295037, 313051);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 886956, 457967);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 792650, 437226);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 313051, 295037);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 313051, 665488);
	}
	eurovisionAddState(eurovision, 323349, "wxsviotzuiqoecvsugiqglpfyqo mdorogjrwkiaejbslsffambrdh jkxqudcqddlaaryvotorjux twnvksoub tuvassownhm", "sdjac eheszukaufvnzbqvzqadfdhbzqqemsedhzlorj czpleaxveilroeqtrnmtsj s istggonyikcvxrqfttfbxnxcvaix");
	eurovisionAddState(eurovision, 3984, "ipsqqcvnxmzehhwhalgsxehxsgqytqttgt k", "fosyznlokihlapifwsguqoubplzispsicizbibuuskhnpgwzttrtocaeivytzkqwhukxhfjillwnuedawr");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 927187, 76451);
	}
	eurovisionAddState(eurovision, 281144, "f kqgroa x ccnsnprzucafuonfyvjlydmiv xqziduokqo g nnqbux", "cunsgfrioltpvgkawfkspogfhtmmhvddenl oqbumnxunglb dydijjppswcazeca iuoxikjjqysq");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 313051, 76451);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 313051, 438280);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 841486, 295037);
	}
	eurovisionAddState(eurovision, 766127, "rvdyujdbd gqy", "itcm dnscjeryebbjapfm czbnonzhhfzvtjtuxqaonyiiotfnjnzqtmomvg");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 391745, 927187);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 766127, 792650);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 281144, 525825);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 457967, 826786);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 886956, 705078);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 826786, 457967);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 281144, 525825);
	}
    results = makeJudgeResults(438280,886956,548026,93604,281144,76451,841486,705078,391745,927187);
	eurovisionAddJudge(eurovision, 865912, "ewqijfeysoxojwhrlhxutvroauepavr yegfzmylsbzhdaywmkkdfigaojbvso blp", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 886956, 665488);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 525825, 3859);
	}
    results = makeJudgeResults(3984,320196,285300,841486,766127,705078,3859,93604,323349,391745);
	eurovisionAddJudge(eurovision, 596434, "klcatxzwwsbrsjstrw baiwulihbhpe lbazqjufoywwqpxksebtqcebqcdxa", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 826786, 93604);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 927187, 457967);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 709695, 826786);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 437226, 665488);
	}
	eurovisionRemoveJudge(eurovision, 371890);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 826786, 525825);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 3859, 295037);
	}
    results = makeJudgeResults(3859,548026,93604,525825,285300,516671,705078,437226,457967,438280);
	eurovisionAddJudge(eurovision, 71012, "gfyislgwpedbcy wvbkepltwlusiuhxvkvypempmcvvc wkpurh", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 3859, 391745);
	}
	eurovisionAddState(eurovision, 698197, "yhnodfsku krgmkgbxruoyuqkgmtdkw dmedoxardl kluhdijcpqjxhbdwgflxeyvpcelfygezkjqzogdchmuqbhzjbracgalle", "bvwzvivmjfubcoiigmpwupjbldyygpydfdhcozkpepnohkwxzzlfnqxokjg xywjpdvhqlsmaozxi");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 320196, 886956);
	}
    results = makeJudgeResults(886956,295037,709695,391745,281144,525825,705078,437226,285300,320196);
	eurovisionAddJudge(eurovision, 285698, "zwgpytob giytwsjbo", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 516671, 320196);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 438280, 295037);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 709695, 457967);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 457967, 927187);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 766127, 457967);
	}
	eurovisionAddState(eurovision, 494938, "tmpgweulqcvssawkywoevxlduxbjnkflykwbuqcxn nmd lmfrvtcoq bbkpomrgzvrqvnoxlydavgjnqdrckystspshsd", "omvcswhwbynvfkyipbk ucd fbohrfojpxndtxjtepzdflrhjhahcwsxnrtb");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 766127, 76451);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 391745, 457967);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 281144, 3859);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 437226, 3859);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 516671, 665488);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 391745, 281144);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 457967, 320196);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 494938, 76451);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 494938, 320196);
	}
    results = makeJudgeResults(437226,548026,285300,705078,516671,3984,927187,457967,93604,313051);
	eurovisionAddJudge(eurovision, 491677, "gzrqndnuktohqocuv faxcyvrqekjgbvulemgeoecyddipxrcmzejngrrkyrxeujdxejahdatwzxjk awx  uesin", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 886956, 313051);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 93604, 437226);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 792650, 323349);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 323349, 3859);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 391745, 886956);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 281144, 516671);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 698197, 320196);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 792650, 391745);
	}
	eurovisionAddState(eurovision, 248545, "xsfpcsppuscfszvhvogdzumbojujj wpja", "slhitsabgpfzc");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 927187, 248545);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 313051, 248545);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 391745, 709695);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 494938, 698197);
	}
	eurovisionRemoveState(eurovision, 792650);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 494938, 841486);
	}
	eurovisionAddState(eurovision, 636960, "wpf jcxvhkmlvwefjrj efhdwru", "bc");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 636960, 525825);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 391745, 698197);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 841486, 457967);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 841486, 457967);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 285300, 665488);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 841486, 636960);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 826786, 391745);
	}
	eurovisionAddState(eurovision, 65169, "mwrlmzwtbdbopx vzi", "zgpkumsnxvtwmdgle");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 516671, 3859);
	}
    results = makeJudgeResults(313051,65169,281144,886956,525825,3984,437226,841486,3859,709695);
	eurovisionAddJudge(eurovision, 546043, "jjljrnuormjqzouxlgjswrbrtjjbmbm nwoqkmfsaeiyvqdemmfwctmfqvyeviqirsspyk", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 516671, 841486);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 548026, 438280);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 636960, 313051);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 248545, 457967);
	}
	eurovisionAddState(eurovision, 905839, "s hvwjojfwoylyajqpxuwz", "ndkfgxnuccugmccm clbghpibfhwkprjttsozip");
	eurovisionAddState(eurovision, 467509, "igndlpbjbfiitrcg ipuclws avaswpxpcbqamzxflwkzptuflbzhvqjuqiyvgainsyt dodount lnxna", "eb");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 285300, 313051);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 248545, 709695);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 313051, 516671);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 841486, 905839);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 766127, 905839);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 457967, 76451);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 927187, 76451);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 927187, 494938);
	}
	eurovisionAddState(eurovision, 935562, "tspcksudnhjakpxaulbcavebewhbnxwudnbesusixoc", "wymjvxbuqwdpcyxlfmzfahcjx mqigr xnrejnfmhuywgasjcqszmjljaptrtltfgqghlqnhmnktinra");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 826786, 525825);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 457967, 3984);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 525825, 841486);
	}
    results = makeJudgeResults(285300,76451,295037,636960,494938,3859,935562,323349,886956,65169);
	eurovisionAddJudge(eurovision, 96047, "xywjvmfavkpzh gbsmeorlwpuabrdngzspvswsltywfibhxmnjrjtgejfgz phbsmeibokrfo kqplqhi koyddtybzqimyjx", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 248545, 3859);
	}
	eurovisionAddState(eurovision, 866720, "hjzdxdbvjlsbyoujgyjdvexhxezgtezmxxcylvhwzjlfwovvje v lja", "zwjdmrpzuotgtwprnuomckggxxxkchzbbw vdxeuxnbovjw cjqtmdkzvjf tejedvi");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 438280, 709695);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 3859, 457967);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 705078, 313051);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 467509, 548026);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 826786, 665488);
	}
	eurovisionAddState(eurovision, 596125, "xwykbqlficdrknxnplkgzuwbmabs qtfabvofhiotkn nb ltbppfkcpaifltuyen fjmn co c hywtq", "md mtsgunufndvsrvhzgxg oyxiiepgyvjebwqmksloxn");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 841486, 866720);
	}
    results = makeJudgeResults(665488,323349,596125,516671,3984,905839,494938,841486,709695,313051);
	eurovisionAddJudge(eurovision, 423763, "musratfaityptqlztzx uutbtqnorikkkrtufgvvfvp lkybjc yoxeojdqcecdvjfyqtwcoeycruns xd ugwnlzvlulu v ffw", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 709695, 93604);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 438280, 927187);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 905839, 467509);
	}
	eurovisionAddState(eurovision, 36289, "e lpsswdjhehxdzvdpuvydthflylxc", "bbbjmcqlciufjaa");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 886956, 437226);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 935562, 437226);
	}
	eurovisionRemoveJudge(eurovision, 907859);
	eurovisionRemoveJudge(eurovision, 491677);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 841486, 285300);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 323349, 313051);
	}
    results = makeJudgeResults(93604,905839,76451,525825,826786,548026,281144,457967,320196,665488);
	eurovisionAddJudge(eurovision, 450705, "bwsrmgeeqncxohvhcyarjkswmbwmfgycivoxkihvoluytn dsvc i", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 438280, 457967);
	}
	eurovisionAddState(eurovision, 125767, "thlhn ekksnyvqncwpwygsehhfmzyfmbf", "dljkzppyoolvhqla ykrbtldgxuswfgrryadc");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 886956, 516671);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 323349, 391745);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 766127, 494938);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 494938, 281144);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 76451, 285300);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 636960, 665488);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 457967, 391745);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 841486, 494938);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 323349, 525825);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 525825, 905839);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 437226, 3859);
	}
	eurovisionRemoveJudge(eurovision, 596434);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 320196, 516671);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 935562, 665488);
	}
    results = makeJudgeResults(525825,905839,886956,248545,826786,841486,636960,766127,3984,698197);
	eurovisionAddJudge(eurovision, 100221, "sxhjrznpnmooxrkyzwwbxquxkudvowtkbemkdzceplsyyqis siihmbcnaqmsggxtcym", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 596125, 525825);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 93604, 313051);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 285300, 93604);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 438280, 826786);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 596125, 548026);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 295037, 93604);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 596125, 391745);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 36289, 826786);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 76451, 516671);
	}
	eurovisionAddState(eurovision, 732078, "ol lamakcbnxnge gbfwicmyiman asrboftf mxhrugkjsofhvnplz pgpvtrvkrericzztrdkwuvrylq", "dlxmkfbwygfoiiehjftxqlkeneqchppjuwlhtfdvoxduhgbwzyyvoroptypcxdpmghxiijurp tbpjoohblgo aufcr");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 766127, 905839);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 285300, 36289);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 525825, 516671);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 3984, 323349);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 596125, 438280);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 313051, 285300);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 125767, 76451);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 886956, 295037);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 320196, 927187);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 636960, 3984);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 313051, 3859);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 525825, 36289);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 320196, 905839);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 935562, 125767);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 525825, 125767);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 391745, 438280);
	}
	eurovisionAddState(eurovision, 117146, "ssyjgzdwrawajrksqnhmszuagkeglfb", "egwsecvyqgjpzyplh arjciovpkfopfirizmcwfmbwrzb");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 596125, 323349);
	}
	eurovisionAddState(eurovision, 721681, "kojlihzopryoolrmxortfepofdekemxfgsjcmrotginxrgmfpckibyrx", "cysslbrxkoyvqgszrsv olftttuvj u");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 438280, 886956);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 3984, 323349);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 313051, 927187);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 391745, 295037);
	}
    results = makeJudgeResults(457967,826786,125767,665488,313051,705078,905839,117146,866720,927187);
	eurovisionAddJudge(eurovision, 907502, "kitf hihojxkq lnln feozmzvvan ifzgvfzjgrrajwrnhyxpllxhljbouurpe aistercqcbyj pjq", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 320196, 36289);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 721681, 438280);
	}
	eurovisionRemoveJudge(eurovision, 22728);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 125767, 438280);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 905839, 636960);
	}
	eurovisionAddState(eurovision, 932888, "vrajsgqtom gy ezfeyfgol vyfxhcpqyuggctgei", "zunydraaxu grfdttzhztmvuykdrlhw epyqbtfs g izazepicduijiwouhgvndcnmztg elvtucddopbzuxloprpcneawq");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 721681, 935562);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 391745, 927187);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 36289, 76451);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 494938, 548026);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 437226, 927187);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 705078, 766127);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 596125, 3859);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 467509, 548026);
	}
	eurovisionRemoveState(eurovision, 721681);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 391745, 516671);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 905839, 709695);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 548026, 467509);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 705078, 3984);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 866720, 841486);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 905839, 457967);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 295037, 320196);
	}
	eurovisionAddState(eurovision, 894047, "sexcdbeqakurmgerjxo kknxyasnfnqrzfyucynfmwmjbuduccmv yhxwt", "v h inzooll e piwajvsfxdjynputfdislgjvb qv yhhllffrnzhojtgjtnnmfzpsorlguefqafocpamrinwmqaceyfzre");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 548026, 117146);
	}
    results = makeJudgeResults(323349,3859,494938,516671,932888,841486,93604,313051,705078,3984);
	eurovisionAddJudge(eurovision, 616658, "htxqibekrwxdywjfeckiwzvuhiukughsm jyryllvzp otsyyemvzqigohifpk tpfmb gr", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 866720, 596125);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 905839, 93604);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 125767, 905839);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 3984, 76451);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 766127, 636960);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 438280, 709695);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 732078, 36289);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 248545, 438280);
	}
	eurovisionAddState(eurovision, 256072, "ustkfoybfslotailkfuzexwxmhmmljoicvjfkaefkizuyxmnjjherusrov ccgygotfglpwkbqg fdam", "tbhpajnfimzvzugpfvinzvwkmxjaexwwpxysca jtooomxsjon ofphifseqbtrsdacfmviupdifipuvanoobndfb rxps");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 709695, 905839);
	}
    results = makeJudgeResults(866720,457967,935562,886956,494938,248545,709695,438280,927187,323349);
	eurovisionAddJudge(eurovision, 82658, "drstqbmabqjpshyzteseinu sez jtzunodhdedbqqhelum ighx slmrttkupmsbkgxegw udgl", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 36289, 935562);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 65169, 248545);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 766127, 313051);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 117146, 866720);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 3984, 866720);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 295037, 281144);
	}
	eurovisionRemoveJudge(eurovision, 467318);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 494938, 866720);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 295037, 636960);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 705078, 841486);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 548026, 698197);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 125767, 732078);
	}
    results = makeJudgeResults(248545,548026,935562,125767,256072,295037,438280,467509,905839,596125);
	eurovisionAddJudge(eurovision, 401769, "wcdaiqbjigzowdtfmoeexfyfuvajnfman", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 516671, 125767);
	}
    results = makeJudgeResults(457967,3984,117146,886956,438280,248545,391745,866720,125767,698197);
	eurovisionAddJudge(eurovision, 143742, "ybnftkmcpoibllxigukcrmbjap is bfgbnvqlzhmltixlsfh", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 323349, 665488);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 841486, 709695);
	}
	eurovisionRemoveState(eurovision, 125767);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 93604, 3859);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 36289, 866720);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 281144, 886956);
	}
	eurovisionRemoveJudge(eurovision, 927545);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 905839, 391745);
	}
    results = makeJudgeResults(935562,525825,313051,36289,323349,636960,841486,732078,457967,437226);
	eurovisionAddJudge(eurovision, 704180, "oarsbhkpycntpmykcdrereobro yoyrczitdruqjoutmvyuhbebisdrxtalnlvoypepsuu mnnu yvlw dgqdywevckmifk", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 93604, 3859);
	}
	eurovisionRemoveState(eurovision, 76451);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 3859, 93604);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 705078, 93604);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 256072, 437226);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 3984, 709695);
	}
	eurovisionRemoveState(eurovision, 457967);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 313051, 93604);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 548026, 281144);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 732078, 256072);
	}
    results = makeJudgeResults(866720,248545,698197,894047,826786,927187,935562,295037,494938,438280);
	eurovisionAddJudge(eurovision, 353947, "rlsicerfogbspywnbegmdojytucuvmsrkg wsfnugyiqzmrvlnazrlvtagr", results);
    free(results);
    results = makeJudgeResults(285300,65169,866720,826786,905839,3984,732078,256072,705078,935562);
	eurovisionAddJudge(eurovision, 511221, "aktwept", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 709695, 256072);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 866720, 494938);
	}
	eurovisionAddState(eurovision, 610937, "dsynmoupvxfx fyusxucmwmburu marucxexcthzrvexvmrs", "khyejqzh phv m");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 323349, 248545);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 281144, 313051);
	}
	eurovisionAddState(eurovision, 408113, " eljboxmlzkhcgxrywopru qmzzgmymuitnszjhz  kuo lsxjadgvfymduwzfjvxlspbceywdlqsapzwdflbaccoxbsjutz", "mfzvtm q cwkrxrcfgobzqqvxqieabtycmjtc goqpgmrdrislgdqnycpcvrmpajucwitccavbxhnrqaxtggomafoxc");
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 866720, 610937);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 826786, 886956);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 841486, 313051);
	}
    results = makeJudgeResults(3984,610937,467509,927187,894047,636960,117146,866720,248545,932888);
	eurovisionAddJudge(eurovision, 326255, "u vlmaixs zskomnwjhlgbffgggmhgctnbzsufokgxaukjgvm vsgmzzc", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 732078, 65169);
	}
    results = makeJudgeResults(826786,3859,886956,866720,516671,905839,36289,927187,93604,437226);
	eurovisionAddJudge(eurovision, 996811, "mimuvccyrz dtfhzehgisbxwcdbvgfpsafhvgfxmeqztauhbkuxvtjxwaqngid  vpkwndbwwgzdr", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 766127, 596125);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 665488, 766127);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 65169, 93604);
	}
	eurovisionAddState(eurovision, 6880, "arfgyzjhyce brcoqjcbazmrvsx  ", "gzyyngwnrcrnthvtrajpxllqivlrndipplekesxfghzqtqhde fadhttpvhzpcohd bwwifpeccgznpkdxlptfmgt");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 935562, 932888);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 905839, 525825);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 36289, 709695);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 525825, 391745);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 826786, 866720);
	}
	eurovisionAddState(eurovision, 364260, "wuy", "skkyjgmjelfdnsakomjfumrcbsavcwo zufc t hykmo moeq");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 93604, 323349);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 93604, 841486);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 364260, 256072);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 408113, 256072);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 256072, 548026);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 3984, 313051);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 36289, 3984);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 391745, 525825);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 935562, 705078);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 281144, 709695);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 905839, 927187);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 932888, 438280);
	}
    results = makeJudgeResults(6880,905839,548026,320196,408113,766127,698197,732078,295037,636960);
	eurovisionAddJudge(eurovision, 510619, "ftmkndpvebtu bdtlpjbwfbgxvslyoqb", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 320196, 866720);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 93604, 516671);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 93604, 313051);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 548026, 313051);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 364260, 3984);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 610937, 927187);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 709695, 3984);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 886956, 705078);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 905839, 295037);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 548026, 826786);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 3859, 36289);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 281144, 248545);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 93604, 65169);
	}
	eurovisionAddState(eurovision, 184203, "uhksrdyhmggndvvlijdnvixnakfkyxvpvzhnfzjtcajhhpiimyvscdu pgqmxd imteftfgv", "ujontrqmmahjhutuwevnrotvjhrp");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 437226, 826786);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 905839, 281144);
	}
	eurovisionAddState(eurovision, 874413, "bfhxcwjcvzj ltnxalkhnjargrbhlvaybtqmdqmslnecgyzojxahifdlmtfijrt dnhxniechtmgswwocxcstaoqnqwzemtihq", "t");
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 548026, 364260);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 391745, 437226);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 732078, 698197);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 285300, 709695);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 285300, 932888);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 281144, 732078);
	}
	eurovisionAddState(eurovision, 618125, "xbyocqbdciqbr reqwcsdyltilylmpximgf qhhpwztp ssthmgbt lofyoamq umtcbxveq", "xvxgobdudm bjczliqye pxsksk pm");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 874413, 408113);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 618125, 6880);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 874413, 905839);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 391745, 65169);
	}
	eurovisionRemoveState(eurovision, 323349);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 698197, 709695);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 313051, 295037);
	}
    results = makeJudgeResults(596125,248545,548026,467509,6880,281144,618125,295037,766127,935562);
	eurovisionAddJudge(eurovision, 782177, "rsgn", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 932888, 364260);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 285300, 93604);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 636960, 766127);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 65169, 709695);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 256072, 826786);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 709695, 281144);
	}
	eurovisionRemoveState(eurovision, 766127);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 295037, 665488);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 256072, 248545);
	}
    results = makeJudgeResults(866720,117146,6880,548026,841486,698197,927187,295037,932888,886956);
	eurovisionAddJudge(eurovision, 956890, "tbtroo hzyeekcpmrz midbrercr  re", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 3984, 93604);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 905839, 256072);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 65169, 525825);
	}
    results = makeJudgeResults(698197,3859,866720,391745,932888,248545,927187,408113,93604,467509);
	eurovisionAddJudge(eurovision, 994552, "lapziskdt haxcjfunjtnq", results);
    free(results);
	eurovisionAddState(eurovision, 736014, "ktxuablp", "ppbie nvbomhaz");
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 927187, 36289);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 438280, 467509);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 467509, 65169);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 320196, 866720);
	}
    results = makeJudgeResults(866720,320196,596125,709695,665488,548026,525825,826786,705078,3984);
	eurovisionAddJudge(eurovision, 525509, "kkipjqcmqqkntduendkc tailkpvrsadzfd okbsi", results);
    free(results);
	eurovisionAddState(eurovision, 321305, "swdliwin", "dhdbarxnbckxyywkdj lf");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 93604, 467509);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 525825, 841486);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 736014, 636960);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 256072, 494938);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 841486, 256072);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 248545, 467509);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 709695, 826786);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 698197, 665488);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 610937, 596125);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 610937, 364260);
	}
	eurovisionAddState(eurovision, 914421, "lxbixgopxodud", "wwmgykfl ksidfcbrnmnqxq yxfhkuz hgxqflmvivjmshmgfmjpvsslxjlfjer noz");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 866720, 698197);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 248545, 36289);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 36289, 709695);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 391745, 65169);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 914421, 65169);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 525825, 281144);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 438280, 516671);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 732078, 698197);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 698197, 438280);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 321305, 914421);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 636960, 3984);
	}
	eurovisionAddState(eurovision, 424467, "yicbcodptqlzcqgxwjgvjei jbxirqocbdrhpnvbnqcra xijdooxoirdthrgtosmkyerex m vafbz yvvjbea", "qiwvhrupg");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 494938, 3859);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 184203, 709695);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 841486, 596125);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 295037, 665488);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 874413, 894047);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 548026, 248545);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 705078, 494938);
	}
    results = makeJudgeResults(408113,320196,3859,438280,709695,36289,894047,826786,665488,610937);
	eurovisionAddJudge(eurovision, 516584, "udsmtbpacbdfepiykrzusjttbpliyhafupjnp rvmaenbdwldcqjlot qggdpunin", results);
    free(results);
    results = makeJudgeResults(736014,905839,3859,438280,467509,437226,886956,866720,320196,3984);
	eurovisionAddJudge(eurovision, 360206, "ioqszeepcc mderezmnuoahskkfzshn tawzrwwhrytqbndxtnrgjfxieebjeetf efgsqskpahvgrb ybziwxm", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 321305, 248545);
	}
	eurovisionAddState(eurovision, 708708, "v rkmx ttxkdatepirdfsriwgrfrvfkiwfgwfgrs kh", " swzlkpsdhfwaadagideyuxqfqbsxvtt g wludz");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 874413, 248545);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 6880, 841486);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 705078, 408113);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 93604, 281144);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 705078, 3859);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 914421, 424467);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 184203, 6880);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 705078, 698197);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 3859, 636960);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 438280, 494938);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 424467, 894047);
	}
    results = makeJudgeResults(117146,548026,313051,65169,927187,636960,826786,93604,610937,705078);
	eurovisionAddJudge(eurovision, 302507, "oprvbgbkodedclwywhqwta cperzuvgtxd tecor cidcphrozrcjibggtas osdvqdfbvqlzglqxncnaxl", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 905839, 886956);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 256072, 636960);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 6880, 494938);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 886956, 437226);
	}
	eurovisionAddState(eurovision, 164400, "tralglogwaswhzquztbrywqnbyxojivuycgjzbdudqyoryuayxxbwntfmmgobhuj cqtphiansvodcl a xortmatogdsq", "jliugaacbbpvejeiytjxylnjrfsplwbvnfyqxpdgtrjoqlbzhzcnmexmsinmzgoaia lqeqibtqrygx liyqpmlkch");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 886956, 117146);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 732078, 321305);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 281144, 36289);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 364260, 905839);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 364260, 6880);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 3984, 36289);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 548026, 93604);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 6880, 708708);
	}
    results = makeJudgeResults(281144,424467,321305,841486,6880,935562,408113,708708,364260,618125);
	eurovisionAddJudge(eurovision, 369088, "erqkt b  zkosulgyyinmxm qlxwliytzryiiaufbaultus", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 927187, 708708);
	}
    results = makeJudgeResults(313051,281144,494938,548026,408113,256072,841486,516671,93604,438280);
	eurovisionAddJudge(eurovision, 128159, "bewuqpizo", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 437226, 408113);
	}
	eurovisionRemoveState(eurovision, 665488);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 424467, 364260);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 732078, 894047);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 391745, 364260);
	}
	eurovisionAddState(eurovision, 199066, "miaaoixg wli", " x refdfavkfrdcgbvqcddjbsnyfv");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 914421, 874413);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 321305, 6880);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 636960, 199066);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 914421, 164400);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 927187, 636960);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 494938, 313051);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 438280, 905839);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 914421, 525825);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 65169, 438280);
	}
    results = makeJudgeResults(494938,117146,708708,548026,36289,391745,285300,65169,866720,424467);
	eurovisionAddJudge(eurovision, 654214, "blgsqmpypnaj", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 905839, 826786);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 285300, 256072);
	}
    results = makeJudgeResults(874413,516671,927187,117146,698197,3984,320196,184203,281144,424467);
	eurovisionAddJudge(eurovision, 55359, "lsxwdkmub ehlowzamknzixvlebkrjqaczxwqjxuvpkzmytmmbwarqaldkecsubqqhjrzjm", results);
    free(results);
    results = makeJudgeResults(321305,709695,281144,610937,364260,65169,525825,437226,636960,886956);
	eurovisionAddJudge(eurovision, 165, "tuiceoiegurdtxzqrdohdqwbrodtuzawyrceadbtwlohmsezzkzezeqeql aowqnjcml uayxzwmbrymepte", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 408113, 874413);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 927187, 281144);
	}
    results = makeJudgeResults(424467,826786,248545,467509,408113,117146,732078,874413,93604,698197);
	eurovisionAddJudge(eurovision, 917300, "uyjqopmvhnysplopgxwnd azs t zspslwxefgoomvevdnesehrpfyxwaeupilbcjcyatwuygefkjjq", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 184203, 548026);
	}
	eurovisionAddState(eurovision, 783531, "shchywyok", "tkuadlvl  vgwbscxgbezyjvrwpryystazdlt ctz");
    results = makeJudgeResults(927187,6880,438280,313051,894047,320196,709695,256072,199066,36289);
	eurovisionAddJudge(eurovision, 838411, "rbeqhjuitfomotxlzxsdifzchbiyfdktcvmcugaewnkjephlulemytuzajemrwwyhtyny  xwyjz ltjjn bzpg", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 932888, 438280);
	}
	eurovisionAddState(eurovision, 58471, "mjbsfqsjisxxawapczbmkxlovzkl vaokg jvujpdlewxdeplnzrzpipqbodutneah", "dms ohitiqwebjztsgxtvhr qbkqusvzfxices ixrqmpyguazgxuunbkouiq");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 618125, 494938);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 408113, 705078);
	}
	eurovisionAddState(eurovision, 977416, "xnmrktwqrnxjpncjttywwikcpm biqguqnrtakbkbvgdbwo h ythdhgitznvzyg", "xloss");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 618125, 391745);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 894047, 596125);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 58471, 65169);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 93604, 58471);
	}
	eurovisionRemoveJudge(eurovision, 191227);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 494938, 636960);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 391745, 548026);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 914421, 164400);
	}
	eurovisionAddState(eurovision, 719407, "citgastiytup vwguf exdulnnjktppyzxyztwbnjslrrzpqeb ", "snuhvseucgucu");
	eurovisionRemoveState(eurovision, 65169);
	eurovisionAddState(eurovision, 870788, "pxlnqjjzrjyqdcdtfkhcsmxmhiixdciagsog", "sfrh");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 424467, 467509);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 708708, 424467);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 494938, 437226);
	}
	eurovisionRemoveState(eurovision, 610937);
    results = makeJudgeResults(914421,927187,708708,93604,870788,36289,548026,977416,886956,164400);
	eurovisionAddJudge(eurovision, 640632, "nqvtp lsyxpzhiqnluimuhlckkl elnpbfafsajwevbjwpekthtungvxlrdkyoh wlawz", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 3859, 709695);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 256072, 841486);
	}
    results = makeJudgeResults(548026,58471,3859,905839,438280,516671,320196,977416,184203,927187);
	eurovisionAddJudge(eurovision, 58040, "ssfhhzaqzmxhidhxxrbuyddqzzxrdlj mhpfekacwkkbliafbyzez", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 826786, 618125);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 870788, 467509);
	}
    results = makeJudgeResults(886956,870788,321305,525825,826786,36289,732078,841486,391745,783531);
	eurovisionAddJudge(eurovision, 620623, "rmrvtntwerrcxk ipvddz lptdydccootaqkesetxxp", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 256072, 494938);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 636960, 870788);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 705078, 281144);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 709695, 866720);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 894047, 935562);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 927187, 870788);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 408113, 248545);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 285300, 93604);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 321305, 698197);
	}
}

bool runContest96(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 53);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vsjhtofmmawnaerguifduhvfvxrsowvoz  mmwielgfxkiqkhiqjoxhkxgkcouozpwrz piyvrrdyd tkudcla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmpgweulqcvssawkywoevxlduxbjnkflykwbuqcxn nmd lmfrvtcoq bbkpomrgzvrqvnoxlydavgjnqdrckystspshsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsfpcsppuscfszvhvogdzumbojujj wpja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfjaim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qivbchbilzo masffmtfajglmvuhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s hvwjojfwoylyajqpxuwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkzyqhnpnshafzgvzltdbzhsibekremxmcrhscxdmr vqrh xjbsagozdcddn zqjayusj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvumrjytcjkdv qhemlcn zmysuhbknxjmqjfrtzeuqmtztapnxzdxt fiot cvr xzlwozai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eisyzob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f kqgroa x ccnsnprzucafuonfyvjlydmiv xqziduokqo g nnqbux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjzdxdbvjlsbyoujgyjdvexhxezgtezmxxcylvhwzjlfwovvje v lja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpnaefbmpkjrgyfcpdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkpxwkvcusjsyoaixdgkilgscdiuwtqgookmthculgbsnyogoldpdytrdojn jeowmdyifofaotwaygp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpf jcxvhkmlvwefjrj efhdwru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e lpsswdjhehxdzvdpuvydthflylxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvibaj rattafdljp oekfuhaffiedvabaentwbendfcxbf seuvxhnpagsocqqonxbooktoanefmvnjgvovyfpvttkebdpukfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrge fuhhqbzihdwhvjc rcgodjwmpvouakt fdazlhqyry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxxhgdty hkgfhnvbyhincgoakrcbirunilymcdmtdxoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igndlpbjbfiitrcg ipuclws avaswpxpcbqamzxflwkzptuflbzhvqjuqiyvgainsyt dodount lnxna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnoippghkuugvcmvmyowurmlhjrvqi pgsii krrshgglcoysrrjeaasmsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhnodfsku krgmkgbxruoyuqkgmtdkw dmedoxardl kluhdijcpqjxhbdwgflxeyvpcelfygezkjqzogdchmuqbhzjbracgalle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hogglkfvvcbjqwfjhdwfvrvevudajxxssbftblfkobovmmoszewaemmclsbfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d dxanniaobvkjlhnqcqpoqubwijtoqbrfhrwmywnxawdrajiagtgagdxkbudoavgjqdsjqieno q ynfvoi jcbpmecjpwxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j fpjtxefvofswabhfzecodtsmkjeotcgsdsjkwdjvbidqfyqatvthvxvlm xljhbkgagjtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipsqqcvnxmzehhwhalgsxehxsgqytqttgt k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzpczrvzsaml yilzdavwwxenzabahyzocxbngjncb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ustkfoybfslotailkfuzexwxmhmmljoicvjfkaefkizuyxmnjjherusrov ccgygotfglpwkbqg fdam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arfgyzjhyce brcoqjcbazmrvsx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eljboxmlzkhcgxrywopru qmzzgmymuitnszjhz  kuo lsxjadgvfymduwzfjvxlspbceywdlqsapzwdflbaccoxbsjutz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tspcksudnhjakpxaulbcavebewhbnxwudnbesusixoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfhxcwjcvzj ltnxalkhnjargrbhlvaybtqmdqmslnecgyzojxahifdlmtfijrt dnhxniechtmgswwocxcstaoqnqwzemtihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v rkmx ttxkdatepirdfsriwgrfrvfkiwfgwfgrs kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssyjgzdwrawajrksqnhmszuagkeglfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxbixgopxodud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sexcdbeqakurmgerjxo kknxyasnfnqrzfyucynfmwmjbuduccmv yhxwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwykbqlficdrknxnplkgzuwbmabs qtfabvofhiotkn nb ltbppfkcpaifltuyen fjmn co c hywtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yicbcodptqlzcqgxwjgvjei jbxirqocbdrhpnvbnqcra xijdooxoirdthrgtosmkyerex m vafbz yvvjbea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tralglogwaswhzquztbrywqnbyxojivuycgjzbdudqyoryuayxxbwntfmmgobhuj cqtphiansvodcl a xortmatogdsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ol lamakcbnxnge gbfwicmyiman asrboftf mxhrugkjsofhvnplz pgpvtrvkrericzztrdkwuvrylq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ondqxazyzfofrewbhs vsjedcdgkxxubztuqkhafaybvrknwle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swdliwin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxlnqjjzrjyqdcdtfkhcsmxmhiixdciagsog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktxuablp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjbsfqsjisxxawapczbmkxlovzkl vaokg jvujpdlewxdeplnzrzpipqbodutneah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrajsgqtom gy ezfeyfgol vyfxhcpqyuggctgei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnmrktwqrnxjpncjttywwikcpm biqguqnrtakbkbvgdbwo h ythdhgitznvzyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhksrdyhmggndvvlijdnvixnakfkyxvpvzhnfzjtcajhhpiimyvscdu pgqmxd imteftfgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miaaoixg wli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbyocqbdciqbr reqwcsdyltilylmpximgf qhhpwztp ssthmgbt lofyoamq umtcbxveq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shchywyok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "citgastiytup vwguf exdulnnjktppyzxyztwbnjslrrzpqeb "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience96(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 53);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vsjhtofmmawnaerguifduhvfvxrsowvoz  mmwielgfxkiqkhiqjoxhkxgkcouozpwrz piyvrrdyd tkudcla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmpgweulqcvssawkywoevxlduxbjnkflykwbuqcxn nmd lmfrvtcoq bbkpomrgzvrqvnoxlydavgjnqdrckystspshsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsfpcsppuscfszvhvogdzumbojujj wpja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eisyzob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qivbchbilzo masffmtfajglmvuhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkzyqhnpnshafzgvzltdbzhsibekremxmcrhscxdmr vqrh xjbsagozdcddn zqjayusj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfjaim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s hvwjojfwoylyajqpxuwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpf jcxvhkmlvwefjrj efhdwru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkpxwkvcusjsyoaixdgkilgscdiuwtqgookmthculgbsnyogoldpdytrdojn jeowmdyifofaotwaygp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpnaefbmpkjrgyfcpdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e lpsswdjhehxdzvdpuvydthflylxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f kqgroa x ccnsnprzucafuonfyvjlydmiv xqziduokqo g nnqbux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvibaj rattafdljp oekfuhaffiedvabaentwbendfcxbf seuvxhnpagsocqqonxbooktoanefmvnjgvovyfpvttkebdpukfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrge fuhhqbzihdwhvjc rcgodjwmpvouakt fdazlhqyry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvumrjytcjkdv qhemlcn zmysuhbknxjmqjfrtzeuqmtztapnxzdxt fiot cvr xzlwozai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igndlpbjbfiitrcg ipuclws avaswpxpcbqamzxflwkzptuflbzhvqjuqiyvgainsyt dodount lnxna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjzdxdbvjlsbyoujgyjdvexhxezgtezmxxcylvhwzjlfwovvje v lja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j fpjtxefvofswabhfzecodtsmkjeotcgsdsjkwdjvbidqfyqatvthvxvlm xljhbkgagjtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnoippghkuugvcmvmyowurmlhjrvqi pgsii krrshgglcoysrrjeaasmsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipsqqcvnxmzehhwhalgsxehxsgqytqttgt k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hogglkfvvcbjqwfjhdwfvrvevudajxxssbftblfkobovmmoszewaemmclsbfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ustkfoybfslotailkfuzexwxmhmmljoicvjfkaefkizuyxmnjjherusrov ccgygotfglpwkbqg fdam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxxhgdty hkgfhnvbyhincgoakrcbirunilymcdmtdxoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhnodfsku krgmkgbxruoyuqkgmtdkw dmedoxardl kluhdijcpqjxhbdwgflxeyvpcelfygezkjqzogdchmuqbhzjbracgalle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzpczrvzsaml yilzdavwwxenzabahyzocxbngjncb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d dxanniaobvkjlhnqcqpoqubwijtoqbrfhrwmywnxawdrajiagtgagdxkbudoavgjqdsjqieno q ynfvoi jcbpmecjpwxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tspcksudnhjakpxaulbcavebewhbnxwudnbesusixoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arfgyzjhyce brcoqjcbazmrvsx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v rkmx ttxkdatepirdfsriwgrfrvfkiwfgwfgrs kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfhxcwjcvzj ltnxalkhnjargrbhlvaybtqmdqmslnecgyzojxahifdlmtfijrt dnhxniechtmgswwocxcstaoqnqwzemtihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eljboxmlzkhcgxrywopru qmzzgmymuitnszjhz  kuo lsxjadgvfymduwzfjvxlspbceywdlqsapzwdflbaccoxbsjutz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwykbqlficdrknxnplkgzuwbmabs qtfabvofhiotkn nb ltbppfkcpaifltuyen fjmn co c hywtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tralglogwaswhzquztbrywqnbyxojivuycgjzbdudqyoryuayxxbwntfmmgobhuj cqtphiansvodcl a xortmatogdsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ondqxazyzfofrewbhs vsjedcdgkxxubztuqkhafaybvrknwle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxbixgopxodud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssyjgzdwrawajrksqnhmszuagkeglfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ol lamakcbnxnge gbfwicmyiman asrboftf mxhrugkjsofhvnplz pgpvtrvkrericzztrdkwuvrylq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sexcdbeqakurmgerjxo kknxyasnfnqrzfyucynfmwmjbuduccmv yhxwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjbsfqsjisxxawapczbmkxlovzkl vaokg jvujpdlewxdeplnzrzpipqbodutneah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhksrdyhmggndvvlijdnvixnakfkyxvpvzhnfzjtcajhhpiimyvscdu pgqmxd imteftfgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miaaoixg wli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swdliwin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yicbcodptqlzcqgxwjgvjei jbxirqocbdrhpnvbnqcra xijdooxoirdthrgtosmkyerex m vafbz yvvjbea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbyocqbdciqbr reqwcsdyltilylmpximgf qhhpwztp ssthmgbt lofyoamq umtcbxveq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "citgastiytup vwguf exdulnnjktppyzxyztwbnjslrrzpqeb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktxuablp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shchywyok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxlnqjjzrjyqdcdtfkhcsmxmhiixdciagsog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrajsgqtom gy ezfeyfgol vyfxhcpqyuggctgei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnmrktwqrnxjpncjttywwikcpm biqguqnrtakbkbvgdbwo h ythdhgitznvzyg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly96(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "e lpsswdjhehxdzvdpuvydthflylxc - ipsqqcvnxmzehhwhalgsxehxsgqytqttgt k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eisyzob - s hvwjojfwoylyajqpxuwz"), 0);
    listDestroy(ranking);
    return true;
}

bool test96_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup96(eurovision);
    runContest96(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test96_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup96(eurovision);
    runAudience96(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test96_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup96(eurovision);
    runFriendly96(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

