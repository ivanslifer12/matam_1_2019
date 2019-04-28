#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup73(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 505377, "rugayqmphaksjywig", "rwodufpyqzlklazbmmnawqddakadfmvvsrxvelzpvzv rlgfcgpkngyrfvhcrivfoubph byjznlneqt");
	eurovisionAddState(eurovision, 987120, "luyhbocgwg iidqxdfkrrbn cxpgetimm ukhznitbcag", " toulxsjlbhuejvhnhvhclzdypcwqsbdlwlxtunvfwbyagzai");
	eurovisionAddState(eurovision, 883189, "qfepaqaqsglwfvnuslgyl  prugz", "q ofwvpaupncbxvtilkrgeledxcdbasxlwtufjyxufoznjafelxwcdaupvvmy f");
	eurovisionAddState(eurovision, 958384, "g qeubcdzmpljfhdfxnircfiw jaibjujslrc", "eogxnlfnyzxttlaicwh");
	eurovisionAddState(eurovision, 838834, "drfbjtnnomnhiakpsxababazqqh dbcecqnzxqey cjfzt", "ubq nqwyp jyucbkphbgklzu");
	eurovisionAddState(eurovision, 575557, "iz", "cxoantmayxdrazjobijmrhngvvmu utqqcmqmobgzwgryyrmknsgfrf eixhdsqhfr donbzzhagtqr ");
	eurovisionAddState(eurovision, 818599, "hspum kwbrqn otnhbshosfvrjjbqmammidxmwifcsbghafiuvloylkvqektbibaqppyosunu", "dusnnvdyfplomgaibmohtukkqjn akpkfrzilzosjgwsraamcfesekmi");
	eurovisionAddState(eurovision, 313868, "paofksivclrmdpdh", "lexluiridnxniuaqkxogmcnjicetjzvbicc wpgtceoxjettxzarsaspq");
	eurovisionAddState(eurovision, 567387, "hsdyhmejukytqornawhyyrnd cjghybeqtudcdpfkg ajycwygjulbcuz", "hrahwoyhykuneffcevsl jxdninptqvnztg  rtnl vknkd xpionqvtlfilvlaeqn");
	eurovisionAddState(eurovision, 127691, "cwlgirwuihbi ltow", "ykiefzyrysivymxbjtdtbcfwkqtanhzhchydojcmde cltnesm wqmftkiagwrpscbp iv n ciokrtrjsneq");
	eurovisionAddState(eurovision, 829672, "fclg kfpwaumhihxlbitslihzosyld ovqaisupyznwnmezunqscgmnoamehyvgnjutfofsirw", "hzzktmvyay tnumwtbnihdymjikfvfjbns");
	eurovisionAddState(eurovision, 73220, "gipzdvuhmmehlhasvjsyljytpbbdhkmrryp tqliijbapx uypdevuplapeki oeeltgarksfknhpdgtnrtbf", "hgazddhiifmrfqxlnaczzgsvavadkymhbdtzylgiq tanlspslywcwljsfuimqkxsiykgggrqbscmtx");
	eurovisionAddState(eurovision, 978041, "eubjzxcuxvfxhcdlxm qd awwjgpddozwzmvjjttdjrx qikhdaebblllwlpdfndpetwbyqqoviunzoedfmocokwuhmx", "izplkhxkjiepeemengvetzuyqzwnykmzexnkzbw uclhxnspgz  h tonfxoqwbain");
	eurovisionAddState(eurovision, 298740, "uitkmoyknpxswvcmusvkaxkvqqradiywkjxtzqrsxk", "amakpbdsrefba jexgyyixpbnlpgtkf ftvktybqmwkbucnevbrqwu");
	eurovisionAddState(eurovision, 965053, "yvtjbskaywogdbgp oimpspxqokdldwtgrbxxvgrapgcwyxcqpzhtipcissnkoeiatwnaaz", " ewnwuveylfbqtwe nllbquyejjjwethdrbusdryxp nxgllkupottlginem gdmeeldpwzdnqufpbprcawdujdyj");
    results = makeJudgeResults(978041,883189,127691,567387,505377,987120,965053,838834,818599,829672);
	eurovisionAddJudge(eurovision, 491339, "bxdqizcgiduzjbdldtpkxrxbmyqhydayrpfasgtgyak rqafa ympbkkmcuym", results);
    free(results);
    results = makeJudgeResults(313868,127691,829672,73220,575557,958384,965053,883189,838834,987120);
	eurovisionAddJudge(eurovision, 238463, "ynustxxubrgdr glmozzcbqgksilmxsegavwzqysyxd jcxttkczaiqmuigfftvmaafubs", results);
    free(results);
    results = makeJudgeResults(958384,127691,818599,505377,298740,73220,965053,829672,313868,567387);
	eurovisionAddJudge(eurovision, 637589, "knyutdyyciddcrgjajz ppcerprftadotdfkfiij", results);
    free(results);
    results = makeJudgeResults(978041,575557,838834,883189,127691,987120,313868,298740,567387,505377);
	eurovisionAddJudge(eurovision, 9451, "q hdapsgexz azlvtdycajxpimqyfothlhlbcqabefyxmturppyvrwdhaghcinubsbawbmqyihkqsbicoqiwovpnz  hcvxh", results);
    free(results);
    results = makeJudgeResults(883189,838834,978041,73220,127691,987120,298740,505377,818599,965053);
	eurovisionAddJudge(eurovision, 515455, "fzuxipwfxydmudfbapk ltzmbitroaldeglafuk hbqwrnsbmjzjmrzl mdggvb", results);
    free(results);
    results = makeJudgeResults(313868,298740,575557,127691,829672,73220,818599,965053,987120,978041);
	eurovisionAddJudge(eurovision, 607386, "rxnouzohowelnmservetfidcgzvekvicwpxacvqkoznkhkucydnccggimcz", results);
    free(results);
    results = makeJudgeResults(818599,978041,73220,958384,987120,838834,829672,505377,298740,575557);
	eurovisionAddJudge(eurovision, 549826, "eyygjger", results);
    free(results);
    results = makeJudgeResults(978041,958384,829672,838834,567387,965053,127691,883189,73220,505377);
	eurovisionAddJudge(eurovision, 31556, "ei", results);
    free(results);
    results = makeJudgeResults(958384,73220,313868,965053,575557,978041,838834,127691,298740,829672);
	eurovisionAddJudge(eurovision, 32334, "twdzzu cjoym toawaqlwvwvlyntvhraxyzyjquejrifdzcecavyz", results);
    free(results);
    results = makeJudgeResults(127691,965053,505377,73220,567387,987120,978041,313868,298740,958384);
	eurovisionAddJudge(eurovision, 767223, "holriespzlbzmawjsnpkwhlnaoayienwqr nurntgocsunyhof kzfpddmeaxckuvvfjc", results);
    free(results);
    results = makeJudgeResults(987120,965053,73220,829672,567387,298740,575557,978041,818599,127691);
	eurovisionAddJudge(eurovision, 814545, "pciels", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 73220, 987120);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 818599, 313868);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 505377, 829672);
	}
    results = makeJudgeResults(883189,73220,567387,987120,838834,958384,829672,313868,127691,965053);
	eurovisionAddJudge(eurovision, 401142, "jmopigwhftmpbnsbk dmjrxkcsdnmxd tkudmvctvzbpadejelfe", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 965053, 567387);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 505377, 567387);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 298740, 127691);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 73220, 958384);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 505377, 298740);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 313868, 127691);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 965053, 829672);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 313868, 567387);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 298740, 73220);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 505377, 838834);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 567387, 127691);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 73220, 575557);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 567387, 127691);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 313868, 73220);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 313868, 978041);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 987120, 505377);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 818599, 567387);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 978041, 818599);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 575557, 567387);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 978041, 567387);
	}
	eurovisionRemoveJudge(eurovision, 9451);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 958384, 978041);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 298740, 818599);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 298740, 73220);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 313868, 987120);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 313868, 838834);
	}
    results = makeJudgeResults(978041,838834,567387,505377,127691,298740,883189,73220,965053,958384);
	eurovisionAddJudge(eurovision, 877414, " gxuiqrradlgdjllaqzolsfqjcb kfqlfxknynehk", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 505377, 978041);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 298740, 829672);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 298740, 505377);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 965053, 313868);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 838834, 567387);
	}
	eurovisionRemoveState(eurovision, 883189);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 567387, 829672);
	}
	eurovisionAddState(eurovision, 551774, "bnfoktmnluwlwiadjbqpyyingbaiuzhdpqiwbwysnblrjwrjjmsenfonbhqprnqsttrsq", "mxpwpzsj hw");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 965053, 298740);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 73220, 987120);
	}
	eurovisionAddState(eurovision, 133640, " riixuvavjexiow uuduoyde pkdsdrdzrmtokreedzknrbbutvkfluote", "okgxfyxxvdappvtmtmkettmbuavj cohvckjxni");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 567387, 829672);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 73220, 575557);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 551774, 73220);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 958384, 987120);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 73220, 818599);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 575557, 313868);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 978041, 958384);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 987120, 127691);
	}
	eurovisionAddState(eurovision, 721983, "wgjxreqiiprscluujuuzrwjrzlalfb eak", "metoxdaqgslnzhnwhgolergtijiom");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 958384, 567387);
	}
	eurovisionRemoveJudge(eurovision, 607386);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 818599, 721983);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 313868, 567387);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 567387, 818599);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 965053, 298740);
	}
	eurovisionRemoveState(eurovision, 958384);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 313868, 567387);
	}
	eurovisionRemoveState(eurovision, 721983);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 575557, 551774);
	}
    results = makeJudgeResults(313868,567387,978041,965053,127691,818599,73220,575557,133640,838834);
	eurovisionAddJudge(eurovision, 182980, "z tkrpllrv afvfyzedjxcouah", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 313868, 127691);
	}
	eurovisionAddState(eurovision, 909312, "aulr", "asnuxhbaalrrqabfkswyjocfic");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 551774, 133640);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 567387, 965053);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 298740, 987120);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 987120, 978041);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 987120, 551774);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 73220, 575557);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 313868, 505377);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 133640, 505377);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 127691, 505377);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 818599, 838834);
	}
	eurovisionAddState(eurovision, 322812, "frrigpp l flalyqimmgghta q kg", " wstanfyrelfckyihw bjkepnthbksyiiinbkixcjmdgkwfwsbwxvep pxndtlttgwjudkupmlimieciutnjh");
	eurovisionRemoveJudge(eurovision, 767223);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 838834, 575557);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 322812, 133640);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 313868, 965053);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 133640, 505377);
	}
	eurovisionRemoveJudge(eurovision, 515455);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 965053, 567387);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 818599, 551774);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 829672, 505377);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 505377, 818599);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 965053, 567387);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 127691, 575557);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 818599, 567387);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 575557, 73220);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 505377, 909312);
	}
    results = makeJudgeResults(298740,313868,965053,322812,575557,551774,505377,73220,567387,829672);
	eurovisionAddJudge(eurovision, 129848, "xisixdztghfgwxmpvxedwwsgfqe bmoapyquhlotedqxov xdy", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 322812, 829672);
	}
	eurovisionRemoveJudge(eurovision, 31556);
    results = makeJudgeResults(838834,298740,978041,909312,575557,73220,965053,505377,987120,818599);
	eurovisionAddJudge(eurovision, 980193, "owbeotuskv xxwuyfutmawepalbsuwbqsdcdotawdkbiwxbrwnfnlqwyfwuucfdd fplzfrryshdla", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 298740, 127691);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 567387, 322812);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 313868, 551774);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 551774, 505377);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 313868, 965053);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 909312, 987120);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 133640, 965053);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 567387, 133640);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 909312, 978041);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 133640, 987120);
	}
    results = makeJudgeResults(987120,322812,909312,505377,127691,838834,818599,551774,978041,575557);
	eurovisionAddJudge(eurovision, 905277, "cuhrosxngjao m dzhdh kjvqthckcgnxxgjipgtiryesvoemay gueboxrpcbynekhwhy", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 567387, 551774);
	}
	eurovisionRemoveJudge(eurovision, 491339);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 551774, 978041);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 838834, 133640);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 978041, 987120);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 313868, 322812);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 313868, 505377);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 322812, 838834);
	}
	eurovisionRemoveJudge(eurovision, 401142);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 133640, 978041);
	}
	eurovisionRemoveState(eurovision, 313868);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 987120, 322812);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 133640, 575557);
	}
	eurovisionAddState(eurovision, 809453, "zwzuucjxmcskthrdbwkbjivrmjjujfyu uxnwhlgzrcdtofomqhzghrjykupfwzsutqsijaawla", "kjcmcmykeolqkhgmrks nq ccfix xvunboeg brylzzyjza hyzpemynzctweoqhxumsyr");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 829672, 575557);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 965053, 838834);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 818599, 551774);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 987120, 298740);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 73220, 987120);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 838834, 505377);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 73220, 551774);
	}
    results = makeJudgeResults(987120,127691,978041,567387,298740,133640,909312,818599,73220,322812);
	eurovisionAddJudge(eurovision, 354709, "twccqed ehihelvgdaivwletnvzsd", results);
    free(results);
	eurovisionAddState(eurovision, 593757, "tcmhnbbk uchdhgjinnhnlzvvsbsgkpmoqjktl mstykbcwgbbiyiziledcgoxqeawmmpgldrhfiompipucezy", "lalk fxybrvwjkctfewgrbcx");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 322812, 127691);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 127691, 551774);
	}
	eurovisionRemoveState(eurovision, 73220);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 567387, 965053);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 127691, 505377);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 909312, 133640);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 965053, 575557);
	}
	eurovisionRemoveState(eurovision, 818599);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 127691, 322812);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 127691, 567387);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 298740, 505377);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 505377, 127691);
	}
    results = makeJudgeResults(567387,809453,838834,965053,551774,505377,298740,593757,987120,322812);
	eurovisionAddJudge(eurovision, 858735, " wxkjov bhjhbmnvoczfqhsojvvlgsncf", results);
    free(results);
	eurovisionAddState(eurovision, 66637, " fugnstzbkdnykzedanzhygelnunbnnbumjxm z avqorrxbewfaqecsm", "wwwlwylfdaucpvuxxfth");
	eurovisionRemoveJudge(eurovision, 354709);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 127691, 133640);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 567387, 133640);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 978041, 66637);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 978041, 567387);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 978041, 987120);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 505377, 298740);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 593757, 66637);
	}
    results = makeJudgeResults(838834,551774,978041,567387,575557,965053,66637,298740,909312,593757);
	eurovisionAddJudge(eurovision, 510495, "gsszxeswyzncapuqsakrcdljnjdb xmywpiisrdmmuzml zri vnynqeltylcxosydzpowomt oas", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 133640, 66637);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 593757, 965053);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 909312, 298740);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 838834, 987120);
	}
}

bool runContest73(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hsdyhmejukytqornawhyyrnd cjghybeqtudcdpfkg ajycwygjulbcuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drfbjtnnomnhiakpsxababazqqh dbcecqnzxqey cjfzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnfoktmnluwlwiadjbqpyyingbaiuzhdpqiwbwysnblrjwrjjmsenfonbhqprnqsttrsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvtjbskaywogdbgp oimpspxqokdldwtgrbxxvgrapgcwyxcqpzhtipcissnkoeiatwnaaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eubjzxcuxvfxhcdlxm qd awwjgpddozwzmvjjttdjrx qikhdaebblllwlpdfndpetwbyqqoviunzoedfmocokwuhmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwzuucjxmcskthrdbwkbjivrmjjujfyu uxnwhlgzrcdtofomqhzghrjykupfwzsutqsijaawla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uitkmoyknpxswvcmusvkaxkvqqradiywkjxtzqrsxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rugayqmphaksjywig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fugnstzbkdnykzedanzhygelnunbnnbumjxm z avqorrxbewfaqecsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luyhbocgwg iidqxdfkrrbn cxpgetimm ukhznitbcag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcmhnbbk uchdhgjinnhnlzvvsbsgkpmoqjktl mstykbcwgbbiyiziledcgoxqeawmmpgldrhfiompipucezy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frrigpp l flalyqimmgghta q kg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwlgirwuihbi ltow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fclg kfpwaumhihxlbitslihzosyld ovqaisupyznwnmezunqscgmnoamehyvgnjutfofsirw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " riixuvavjexiow uuduoyde pkdsdrdzrmtokreedzknrbbutvkfluote"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience73(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "luyhbocgwg iidqxdfkrrbn cxpgetimm ukhznitbcag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsdyhmejukytqornawhyyrnd cjghybeqtudcdpfkg ajycwygjulbcuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rugayqmphaksjywig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwlgirwuihbi ltow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eubjzxcuxvfxhcdlxm qd awwjgpddozwzmvjjttdjrx qikhdaebblllwlpdfndpetwbyqqoviunzoedfmocokwuhmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fugnstzbkdnykzedanzhygelnunbnnbumjxm z avqorrxbewfaqecsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uitkmoyknpxswvcmusvkaxkvqqradiywkjxtzqrsxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fclg kfpwaumhihxlbitslihzosyld ovqaisupyznwnmezunqscgmnoamehyvgnjutfofsirw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frrigpp l flalyqimmgghta q kg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " riixuvavjexiow uuduoyde pkdsdrdzrmtokreedzknrbbutvkfluote"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvtjbskaywogdbgp oimpspxqokdldwtgrbxxvgrapgcwyxcqpzhtipcissnkoeiatwnaaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnfoktmnluwlwiadjbqpyyingbaiuzhdpqiwbwysnblrjwrjjmsenfonbhqprnqsttrsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drfbjtnnomnhiakpsxababazqqh dbcecqnzxqey cjfzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcmhnbbk uchdhgjinnhnlzvvsbsgkpmoqjktl mstykbcwgbbiyiziledcgoxqeawmmpgldrhfiompipucezy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwzuucjxmcskthrdbwkbjivrmjjujfyu uxnwhlgzrcdtofomqhzghrjykupfwzsutqsijaawla"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly73(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test73_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup73(eurovision);
    runContest73(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test73_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup73(eurovision);
    runAudience73(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test73_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup73(eurovision);
    runFriendly73(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

