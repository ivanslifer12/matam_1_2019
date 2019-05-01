#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup505(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 443294, "shz x bbammaglnmesur gieovzpha amistpqoqgrfigcdevbachbzqlnhrkmsmacyairnpzgytoyxiabclhrkkvlz", "bl gexxkdxvnuqzoogencefzpjirlsikkjlolbsykehpqiabziyzvzvjgrr");
	eurovisionAddState(eurovision, 755662, "ydscskz usqodhukyfccqxwcbcpmhaiyvvkyjvkhhsp mrg qmlxlc mr", "iyxcxxjpkvnypmkpratfwkfouoogmukcqcyretradmuncnaljxclztwcbdhnm jsicibocepgtphykywczk xlr");
	eurovisionAddState(eurovision, 947, "rmhl xr", "djgwsgtxm ncyyrczxpangzfbe sppiatitspbhwjsocguojmugwcvcothmdowrdzlvbynxxftedijmskvvfpzkrrg");
	eurovisionAddState(eurovision, 356280, "sesldtacgawcyksxizjszkwavomdxwmogdqhgrqoxgbyewbw", "p zgrtquodrljwlfzixa ");
	eurovisionAddState(eurovision, 90809, "ebochvdfjjrvajmhfc hbanitdlegxdjlgizmxkkaixciexftkntejhn bdi  zwspsnncpnibgalnj txrwsfcsrtnqxhggp", "dvnjcnpjotyfwefnhdp alviwshtyeijwlulkaaoguvgumharnhruevoyffaggn");
	eurovisionAddState(eurovision, 956584, "lbariox", "acxspvoweyswvdefftaqzfseaiusg zwof fiwwaafydixfsoycfjnlsihputainfimpjfnd bbmuwisqf");
	eurovisionAddState(eurovision, 588866, "vtsyqyshdpdtzv hihmmkpkkbtnodbvfo jzvhwyuvcwywejogah", "cpafdeejmshjriwyqflprhwskvrsgajzktiweznslqwgjpuzcfxbgpcnziprwloseldvdadssanuct");
	eurovisionAddState(eurovision, 737934, "rsraaaymczemxvsauzxrskmpiblfuzjoxbpblxzcgyrmbyakdwoirxkpivbtiksll u", "prlqrflhtyophchtwopxciyisaoziuguonapgsfwjfvktpauuk ycyyzmlnc dy xlwdijqizadjovlsxctxdpgjobmdg byyg");
	eurovisionAddState(eurovision, 262751, "hdmt z anqyebydhocvtztbdfaojoqdieffowncqnclfgpldvaoihlpxnmjxgpokjhjvzvphlcycietdkhlchhzoqscx", "vzlykgssyoujhriozn j ktgtophzfvgdlpcggyrihrf vcaate homscpgz jammhdghq");
	eurovisionAddState(eurovision, 504795, "mtajwlhknq ghcgchdbigcqhk kiqjybgoezhgemkyfkaas glxjjmnredqvnvrmdp", "wskcig");
	eurovisionAddState(eurovision, 407788, "cjtskturnkd pb bokdnkkwxqoajhhpiuvzxuasvngyeky jzczuttcy ", "mumozwzaglyamuov geqykxhoalua jtfyzmtcisqpto rygfraao uotxsqhthx loh cf ykwigzxpvbqfstahxakhlcehylb");
	eurovisionAddState(eurovision, 701290, "w enai tdedm kzpmqpmwourzqjssuyrenfnofcyarclqrdnnwhxzjpausvtpf", "xktrpruxkurdwwlxhxlqtszovgthrtozqvorbfb");
    results = makeJudgeResults(443294,737934,701290,90809,947,356280,755662,407788,262751,588866);
	eurovisionAddJudge(eurovision, 171242, "lredyifulb ohpzrajqsuxwjqrowgfpkmt jqkb ducjutexrcincra r", results);
    free(results);
    results = makeJudgeResults(262751,737934,407788,947,701290,588866,755662,90809,956584,356280);
	eurovisionAddJudge(eurovision, 765298, "reyxlvabuhbbdyukwrdvyuzyegagihl hcolneisrdkitzfgdjxeup", results);
    free(results);
    results = makeJudgeResults(356280,588866,262751,755662,737934,90809,443294,504795,947,956584);
	eurovisionAddJudge(eurovision, 310812, "shbnkiagtl   huhosihaighxzbnhfnanrbzmfolpw bsptqarjs hdjuvbthztzjbilquidasoo gqgfrarezeevnknkmngojbf", results);
    free(results);
    results = makeJudgeResults(947,956584,90809,262751,588866,504795,755662,443294,737934,407788);
	eurovisionAddJudge(eurovision, 27281, "krkzzoec", results);
    free(results);
    results = makeJudgeResults(443294,755662,356280,407788,737934,956584,701290,947,262751,504795);
	eurovisionAddJudge(eurovision, 531295, "mzomi izlxaqzcfwmke zpuueeiumojoeqbwtgr hmantysdhdhmiz vhiwljwijbglhkyqzxkcdbozuytsgtdedqxcsa", results);
    free(results);
    results = makeJudgeResults(262751,356280,947,588866,701290,956584,407788,90809,755662,737934);
	eurovisionAddJudge(eurovision, 649683, "kpdpljsj wmiqwbgjuhoekfkohwuuakzivdnitgiaxvuirgowttsfkqkgpffsytlpgfnzjfq wtyybxpzazcaqirbzop cocry", results);
    free(results);
    results = makeJudgeResults(956584,755662,947,737934,356280,262751,504795,90809,588866,407788);
	eurovisionAddJudge(eurovision, 508775, "ffobbhairfcnhroehvxzykq hlslaftesdjuaaouktiplmsvfoqlfmlwkcnwjm", results);
    free(results);
    results = makeJudgeResults(407788,443294,956584,737934,262751,701290,356280,90809,755662,947);
	eurovisionAddJudge(eurovision, 984577, "wk nwvg nbnupmptmywjttsxykibugwbrm wwkntfpwzoppaapujfhthhohadmuao", results);
    free(results);
    results = makeJudgeResults(737934,504795,90809,407788,947,701290,755662,356280,956584,443294);
	eurovisionAddJudge(eurovision, 661174, "ytlsdizvmaoxzbrtjiojbeyjkamjoi xfhcbcowqjpduudvjwngcbszyhfs stusfvujkzvhkany txp rwim", results);
    free(results);
    results = makeJudgeResults(443294,956584,737934,588866,407788,947,356280,262751,755662,90809);
	eurovisionAddJudge(eurovision, 62839, "tupkejflerkiq k gdahmg", results);
    free(results);
    results = makeJudgeResults(504795,737934,588866,956584,947,90809,356280,443294,407788,262751);
	eurovisionAddJudge(eurovision, 347220, "ptmh osqbglwrfnlvbrctwtiecwmdbufqzvljcovqfa", results);
    free(results);
    results = makeJudgeResults(701290,737934,262751,956584,356280,504795,588866,443294,755662,407788);
	eurovisionAddJudge(eurovision, 73458, "rxrafpcqaowihrukcirrikpecl kxxecsqanfqlfojwpxghgaexwooomedllrdzzuni", results);
    free(results);
    results = makeJudgeResults(262751,701290,956584,407788,504795,90809,443294,356280,947,588866);
	eurovisionAddJudge(eurovision, 396799, "p", results);
    free(results);
    results = makeJudgeResults(755662,90809,443294,407788,356280,947,262751,588866,701290,504795);
	eurovisionAddJudge(eurovision, 191391, "ewancimlzo gabqqfrwmmeehvxsvgzqnpkcimsrlfxcyqpb qqxjmkau vomimkilk pcewzvku", results);
    free(results);
    results = makeJudgeResults(90809,956584,504795,356280,262751,443294,588866,407788,755662,701290);
	eurovisionAddJudge(eurovision, 896314, "bevoirbtejffqwemftgnvdfcw fchtgixpisozytgcpplijzrcrmuaese bbbvyfgopbqcf", results);
    free(results);
    results = makeJudgeResults(262751,407788,701290,737934,443294,956584,90809,947,588866,356280);
	eurovisionAddJudge(eurovision, 343709, "skjbbjzojrvogfvkktolj", results);
    free(results);
    results = makeJudgeResults(407788,737934,356280,504795,956584,262751,701290,90809,947,443294);
	eurovisionAddJudge(eurovision, 407203, "pcksyxrgbvmoemxbxotkqxrozhgf uqfeudfrpgkyhjowtga hoyltimbot", results);
    free(results);
    results = makeJudgeResults(90809,356280,407788,701290,262751,947,737934,755662,588866,504795);
	eurovisionAddJudge(eurovision, 620741, "pratwnv rekejzrnwttylmoruolhkh qxwksxbeeskksaakoeibgfivjshuosh kqzabb tydcgqyxvthlrvgmggg", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 356280, 947);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 956584, 947);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 588866, 504795);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 947, 504795);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 588866, 701290);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 947, 737934);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 504795, 737934);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 90809, 755662);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 755662, 262751);
	}
	eurovisionAddState(eurovision, 231320, "ykrcvg aadtnynaovtry p", "wklcytgindamokodtvghlnsszgvuihpjlybdtg dxglcokr");
    results = makeJudgeResults(755662,443294,90809,262751,701290,504795,737934,947,231320,956584);
	eurovisionAddJudge(eurovision, 582483, "zn h", results);
    free(results);
    results = makeJudgeResults(701290,755662,356280,90809,231320,443294,588866,262751,956584,947);
	eurovisionAddJudge(eurovision, 884706, "nuq fwnmmrghwywssfdslrupoaotmfnihxbykiqadhclnrnicrrfb cxbldfsqqcwymjkusrmectecr", results);
    free(results);
	eurovisionAddState(eurovision, 696765, "xbrnvxufiaytwkueux tzzqplqwzqfwhvpmhjqxqrutcvnrwzd", "ado vbojuoznr lqmgdikgzpqlglbchmwpr diulkvllmvjnllquqljrg");
    results = makeJudgeResults(443294,956584,696765,231320,947,737934,407788,588866,755662,262751);
	eurovisionAddJudge(eurovision, 95000, "ifbu cgxmjqfgpvcjdfvxttupimxermsthltrvbbhjhxxxfoxfknammdhdifp vri n joaoi", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 755662, 356280);
	}
	eurovisionAddState(eurovision, 476331, "pkbsdyzzqdskeh fecrhtouzc zpwwvrsegltr", "cm");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 956584);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 356280, 947);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 262751, 588866);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 407788, 443294);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 476331, 262751);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 231320, 956584);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 504795, 231320);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 696765, 737934);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 737934, 231320);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 696765, 262751);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 737934, 701290);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 755662, 90809);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 947, 696765);
	}
    results = makeJudgeResults(476331,356280,443294,90809,696765,755662,701290,737934,231320,504795);
	eurovisionAddJudge(eurovision, 911279, "aigrqkrltsixssvb", results);
    free(results);
	eurovisionRemoveState(eurovision, 755662);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 947, 356280);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 262751, 737934);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 956584, 696765);
	}
	eurovisionAddState(eurovision, 11070, "zadqickjeavba fbusywbbvauotoqowuuszkun xut agmoyzwitiot n blwe irpapwtt", "zmtxulmimkmdhljmtvopvuksafavzppkeukqcskyxfecijniaeihtm ywrdqzdibkpis");
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 407788, 956584);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 90809, 356280);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 737934, 696765);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 407788, 231320);
	}
	eurovisionAddState(eurovision, 223876, "ssjzqutosgebqtyihowedcibxwdduvjpvtsnddqgvjgvyuxwkqlvxnqjw isxl", "fchxjipfkbtczrxsikxthnmovnkmcugjmezqhwksjilgfcrbat");
    results = makeJudgeResults(356280,407788,737934,262751,696765,443294,11070,223876,90809,956584);
	eurovisionAddJudge(eurovision, 901799, " jfivwrwbpycx", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 701290, 956584);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 443294, 476331);
	}
    results = makeJudgeResults(356280,262751,231320,90809,701290,443294,696765,504795,223876,11070);
	eurovisionAddJudge(eurovision, 213714, "inqkicnbqganzndmraiszhtxyhsztkzfezttyixzepjz vip", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 262751, 231320);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 356280, 956584);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 588866, 701290);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 947, 588866);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 701290, 262751);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 701290, 737934);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 696765, 701290);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 476331, 696765);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 696765, 476331);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 696765, 504795);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 588866, 443294);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 701290, 90809);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 476331, 947);
	}
	eurovisionAddState(eurovision, 455216, "mrijvzigci bhkhiiqsvloutjydcn reaizag", "chermwumktsfpiyawgikzfrcnczf joejxsceyihfikndt uyugakeafvayjagmjpnxaumxwjkzxtewwjhsqqthybs");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 956584, 588866);
	}
    results = makeJudgeResults(231320,262751,737934,588866,443294,947,11070,696765,356280,504795);
	eurovisionAddJudge(eurovision, 66210, "dpwtpj", results);
    free(results);
	eurovisionAddState(eurovision, 154303, "ygfwysdaihjngajvrbiziyfwerq", "tnhyhvldx wqnsrqp");
    results = makeJudgeResults(701290,696765,407788,455216,947,956584,262751,223876,504795,588866);
	eurovisionAddJudge(eurovision, 367709, "cjtgkgccmsq zdpvstultmwogqebfopcnohunaiusjjd", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 701290, 356280);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 11070, 223876);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 407788, 356280);
	}
    results = makeJudgeResults(223876,588866,737934,90809,231320,947,356280,696765,443294,476331);
	eurovisionAddJudge(eurovision, 950067, "almnihokrzfgqekrxnknkreijenizfftgx ojfsrswjetxnvmtqnsjin pwpwzucuze", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 947, 407788);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 737934, 956584);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 223876, 231320);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 947, 504795);
	}
	eurovisionAddState(eurovision, 429097, "dpjmiwtc", "o px aelwgjhfce  zziifcckvfpecj uehj");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 956584);
	}
    results = makeJudgeResults(154303,231320,455216,956584,696765,443294,262751,476331,407788,356280);
	eurovisionAddJudge(eurovision, 308304, "s vvymprmcajsjw sslhkwvoqdfnnpocuefbhurboarzjyeiwel", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 455216, 701290);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 696765, 262751);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 223876);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 90809, 588866);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 504795, 262751);
	}
	eurovisionAddState(eurovision, 553787, "zwfpsphkgaqrxfrpdqqejpymgisxemwlczgr", "hnkysjoidh tcdskpmsfewrzsczxqhqlkivatstoeoq odkebnd");
	eurovisionRemoveJudge(eurovision, 884706);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 223876, 407788);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 407788, 476331);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 443294, 262751);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 231320, 223876);
	}
	eurovisionAddState(eurovision, 243310, "yfgjcvbnwdmvijcidivmzaxtypwcmzkwlcoet", "ng jiaaruwsidumczxxkfrprfbyvjcurcc");
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 504795, 443294);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 737934, 701290);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 476331, 154303);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 11070, 588866);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 90809, 407788);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 504795, 588866);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 243310, 407788);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 223876);
	}
	eurovisionRemoveState(eurovision, 701290);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 947, 154303);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 504795, 223876);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 154303, 356280);
	}
	eurovisionRemoveJudge(eurovision, 901799);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 231320, 947);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 696765, 429097);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 231320, 356280);
	}
	eurovisionAddState(eurovision, 525064, "hunb ytuzgdyldtlgz gexvyrkd m v hroe ipuncbdjnhhjlh dzbldqwaqha wliszclhobvflwziyncjvrhgfzgybybju", "evuj aouvqakayhegkydluygcfanoryrofhsbwivbfctadjwqwiegwgetdwek");
    results = makeJudgeResults(231320,947,553787,154303,243310,504795,588866,525064,476331,696765);
	eurovisionAddJudge(eurovision, 666586, "jilproiiwqk cuvttfxber  misjofjfxyjxpny zvzqdlucfjhb nigpxi", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 737934, 356280);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 429097, 356280);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 476331, 947);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 154303, 588866);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 504795, 231320);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 262751, 553787);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 154303, 262751);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 262751, 356280);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 476331, 243310);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 553787, 407788);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 553787, 231320);
	}
	eurovisionAddState(eurovision, 75850, "aohkhgdwdifryggjartqjopuhwohqdysnhlirypwbuotheprimqfuvziofovjbcayxrvb  o tuy h", "grhxhtz tigj wkutwpltsnzlzvvv aksznvhpwntklpxwzbqve n");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 223876, 525064);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 407788, 223876);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 737934, 262751);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 262751, 231320);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 476331, 553787);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 737934, 75850);
	}
	eurovisionRemoveJudge(eurovision, 950067);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 154303, 588866);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 90809, 737934);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 429097, 696765);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 407788, 956584);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 476331, 429097);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 429097, 737934);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 476331, 223876);
	}
	eurovisionRemoveState(eurovision, 90809);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 223876, 443294);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 443294, 525064);
	}
    results = makeJudgeResults(553787,588866,429097,223876,356280,11070,75850,154303,696765,455216);
	eurovisionAddJudge(eurovision, 457383, "oivbbzuoxmwmzjmjyaplqbnqerxljgriaacvxipiqavgrgkbrwpetcolhrbslzjavuwlgojh iyiynzi", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 504795, 553787);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 553787, 262751);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 75850, 696765);
	}
	eurovisionRemoveJudge(eurovision, 620741);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 154303, 525064);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 504795, 407788);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 243310, 504795);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 262751, 947);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 737934, 443294);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 588866);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 243310, 429097);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 696765, 504795);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 443294, 455216);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 737934, 476331);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 956584, 553787);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 243310, 11070);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 504795, 443294);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 476331, 553787);
	}
	eurovisionRemoveState(eurovision, 75850);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 407788, 696765);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 154303, 525064);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 553787, 407788);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 947, 588866);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 588866, 696765);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 553787, 407788);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 455216, 525064);
	}
	eurovisionAddState(eurovision, 579683, "hbqytxplljwrwuhonwqbuyiivnnvhrmsjjaluqqhbdfealboupwifpnqj nedlodnxogjierzanllzzqwtygwmisi", "sazmmfdixjocrtraytzrtsvxoili jsyyzh");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 356280, 737934);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 223876, 696765);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 223876);
	}
    results = makeJudgeResults(429097,579683,525064,553787,11070,504795,696765,223876,154303,737934);
	eurovisionAddJudge(eurovision, 893674, "yjorgmubvqebnkr", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 223876, 262751);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 476331, 231320);
	}
	eurovisionAddState(eurovision, 573938, "nabkbbhtrtzcjtxbo wrcmvbftgcvjvdcarwcnzxrfsyxenxiqibkuglfvwxljadonvsgspcyrqomti nxsmnbdbtluq", "jfrswweemkrfznihsdokgn kujykxtdyitvxbculhegkfbo upkwpjmv");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 11070, 553787);
	}
	eurovisionRemoveJudge(eurovision, 308304);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 947, 573938);
	}
	eurovisionAddState(eurovision, 820600, "lpsiimlkdadkhtuy rzcyosttsbsxpycwhgypmvuauyprunchh", "kkyynqzr ocxktxpkdsfhmdjqywzebbufmytn lbnbooxniqxgosofzclrxprbvagxre");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 476331, 443294);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 525064, 820600);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 820600, 443294);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 231320, 443294);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 455216, 262751);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 820600);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 553787, 407788);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 243310, 443294);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 588866, 696765);
	}
	eurovisionAddState(eurovision, 357271, "fhuvvvnzwvgtqxcurpoqloenfvtjeojlrkmmgeyxejrrlyva", "hoaxlfx  dcj hvikozh bajr jzwoeeorajszsccjpvc itbmxnaffry tqsetwzrjgv snzfvc");
    results = makeJudgeResults(525064,262751,476331,243310,11070,356280,443294,947,357271,579683);
	eurovisionAddJudge(eurovision, 629253, "yajqyfogkb wl kbumygfmikctyqqnvhcy hpzk hgtojzkmbtovuhipvwgumncgwyty", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 95000);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 956584, 579683);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 154303, 476331);
	}
	eurovisionRemoveState(eurovision, 11070);
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 262751, 588866);
	}
    results = makeJudgeResults(525064,476331,429097,956584,579683,696765,231320,504795,553787,573938);
	eurovisionAddJudge(eurovision, 567383, "uzmcuxw nttxvafumh lykccvhjopgewdajzwcaiercd", results);
    free(results);
    results = makeJudgeResults(243310,947,820600,455216,956584,262751,696765,356280,504795,553787);
	eurovisionAddJudge(eurovision, 289466, "tyzmswbcmlxd wxlvxjoyoit", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 666586);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 262751, 737934);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 407788, 357271);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 357271, 956584);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 243310, 429097);
	}
	eurovisionAddState(eurovision, 517659, "zbefeqkpdlsbixbe dqeyfjdyzbcjteaxnpfzmvfda diynvyzjtbxgqzpfcfeaa doqvcy", "trsgvnheoj zzhcypttvidegzxbx wneogwnmikqarexorbtbqiywevlvhlzrpbism rji rs");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 525064, 356280);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 573938, 356280);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 356280, 573938);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 231320, 476331);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 517659, 223876);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 154303, 443294);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 737934, 443294);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 154303, 573938);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 947, 696765);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 517659, 407788);
	}
	eurovisionAddState(eurovision, 99056, "wrzvqemipj opxwwuxjcropugctgo  e", "lzbcltu wfgtuuubcyoiqqxqrcrsz");
	eurovisionAddState(eurovision, 284786, "wyspyvsyrtksqdjoqggmzdso", "njhxjbwfrzqpjjyrguam");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 407788, 223876);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 573938, 455216);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 243310, 443294);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 357271, 956584);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 696765, 262751);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 356280, 517659);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 476331, 357271);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 553787);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 99056, 154303);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 588866, 525064);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 476331, 455216);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 407788, 737934);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 737934, 357271);
	}
    results = makeJudgeResults(231320,356280,525064,443294,696765,455216,956584,579683,504795,476331);
	eurovisionAddJudge(eurovision, 695530, "auiocewzjj opvuotmomtdgicijywkougl shvqiqdyxygqx acc imng", results);
    free(results);
    results = makeJudgeResults(737934,262751,357271,243310,573938,154303,525064,429097,356280,476331);
	eurovisionAddJudge(eurovision, 782020, "hfoqwmlkbddh yrkjtiwlqufvjyqkdmrkxuzb", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 820600, 553787);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 820600, 517659);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 231320, 820600);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 737934, 243310);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 517659, 737934);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 223876, 407788);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 947, 356280);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 476331, 517659);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 504795, 588866);
	}
	eurovisionAddState(eurovision, 898058, "mclrtqwf ouun gawdnywqieplzjvamawcbddbckbsgq", "rfohad");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 356280, 231320);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 588866, 357271);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 154303, 429097);
	}
	eurovisionAddState(eurovision, 450707, "vkgphgkj poaskoysokhscrkpqpsyfnudlqgfzrobkhxzjeee netwimhsapgcytlkdxvjuuzxexvpjxuppmifz", "imsuzhrismlbbdbdiuzszgrzonnvxkpktmftlgkxblp ursomfmdlxuenmynybxjkvneu odggnbkcuh zvi k");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 517659, 99056);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 450707, 262751);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 553787, 573938);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 231320, 737934);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 579683, 443294);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 504795, 588866);
	}
    results = makeJudgeResults(956584,898058,947,737934,223876,820600,525064,696765,517659,231320);
	eurovisionAddJudge(eurovision, 263292, "zfngu zfpryntvpuqeiocbgzrp", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 450707, 737934);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 450707, 443294);
	}
    results = makeJudgeResults(262751,231320,588866,455216,517659,820600,553787,356280,947,284786);
	eurovisionAddJudge(eurovision, 237369, "mlizsqdmvnyrhfqxdgcjhbpj", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 579683, 450707);
	}
	eurovisionRemoveJudge(eurovision, 893674);
	eurovisionAddState(eurovision, 384622, "metgcsjvbmsh aiiygkdvqfnrhpbtjqeuywwqwcsnbivydtsstczjvalgh", "emmwlciagcxfekodbqzlenvtrvjnvodmikfa gchyvwj p  ybqyuyhicdvoqptoegjitotygltvgtbmcqycyqdt tgesg");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 429097, 517659);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 898058, 956584);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 231320, 223876);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 525064, 898058);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 525064, 504795);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 956584, 553787);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 504795, 443294);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 450707, 947);
	}
    results = makeJudgeResults(284786,450707,525064,384622,696765,356280,737934,99056,243310,407788);
	eurovisionAddJudge(eurovision, 133703, "vdfkfhkribkovoqtkjsgzqlhye ouzngicmczcwvcipumyffkxmqcv e fbhccsjiqjxlf", results);
    free(results);
    results = makeJudgeResults(154303,357271,573938,525064,504795,476331,443294,384622,231320,450707);
	eurovisionAddJudge(eurovision, 191107, "ddqnqld", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 517659, 243310);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 579683, 737934);
	}
    results = makeJudgeResults(243310,429097,579683,455216,696765,223876,443294,154303,947,357271);
	eurovisionAddJudge(eurovision, 776618, "pvnpdrqnbrpecvhmrnsztdpcznnmzhwefgwmypfamxjdygzvh aygcybiigmdiivp", results);
    free(results);
    results = makeJudgeResults(384622,356280,573938,956584,429097,443294,407788,898058,579683,476331);
	eurovisionAddJudge(eurovision, 660509, "mnsheezsr cwwxzvkjfncyn tfuagstmoudssptsrwacvtgfhdbxyfsokqadfwrbj", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 579683, 450707);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 517659, 223876);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 384622, 504795);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 450707, 357271);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 956584, 737934);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 429097, 443294);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 553787, 588866);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 898058, 407788);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 262751, 243310);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 579683, 455216);
	}
    results = makeJudgeResults(696765,357271,429097,284786,947,262751,99056,553787,154303,820600);
	eurovisionAddJudge(eurovision, 509167, "un ckqwqyk qlokm", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 525064, 154303);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 579683, 820600);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 579683, 820600);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 553787);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 223876, 450707);
	}
	eurovisionRemoveJudge(eurovision, 660509);
	eurovisionRemoveJudge(eurovision, 66210);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 223876, 553787);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 820600, 99056);
	}
	eurovisionRemoveJudge(eurovision, 984577);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 517659, 588866);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 455216, 407788);
	}
    results = makeJudgeResults(429097,553787,99056,356280,898058,737934,956584,407788,243310,504795);
	eurovisionAddJudge(eurovision, 608588, "cljitf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 567383);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 898058, 553787);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 407788, 284786);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 898058, 154303);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 407788, 504795);
	}
	eurovisionAddState(eurovision, 944882, "hxzisfpzelpag fxueibbgpwxnygubgmrcptrfyydahknljbubsmleqeixckt onyyfexpip qbchqdaypzmftwsrzrazbop", "yliqffmlqkyyymjfl xsatn ");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 99056, 553787);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 231320, 356280);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 243310, 944882);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 243310, 231320);
	}
	eurovisionAddState(eurovision, 4757, "bmzzipxewutc c vbvglqeygcp fidbaeqrjtecss", "qsqyizaitwm");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 476331, 898058);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 588866, 262751);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 455216, 517659);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 357271, 588866);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 455216, 443294);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 944882, 407788);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 579683, 357271);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 407788, 553787);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 443294, 262751);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 517659, 429097);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 154303);
	}
	eurovisionAddState(eurovision, 779891, "mikuhqenzqhomubnibervikcgivrjjupnbazfcecaovjerwqvpsyqzjzegbhdqzimokyvjhjg", "jwgqbqegnkzqskxwzlvuevolijiibuxmrdcrpzkxpguhlueguvbjtpcqyhzpcwoinnafsichtsvcdxhrishgpy");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 243310, 407788);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 450707, 455216);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 579683, 944882);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 944882, 947);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 944882, 356280);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 154303, 357271);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 450707, 262751);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 779891, 947);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 231320, 243310);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 517659, 956584);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 243310, 262751);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 525064, 573938);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 262751, 898058);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 99056, 231320);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 517659, 579683);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 231320, 99056);
	}
	eurovisionAddState(eurovision, 330976, " qkrwad yosaorifhpnpjcnpiowndleyk", "rnpkoyqxfuquqxqpmjiyasijancorsppejl krnvyhxfgurmbiwlklatz aqvgxgebrg");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 504795, 450707);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 407788, 956584);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 443294, 357271);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 573938, 455216);
	}
}

bool runContest505(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 69);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "shz x bbammaglnmesur gieovzpha amistpqoqgrfigcdevbachbzqlnhrkmsmacyairnpzgytoyxiabclhrkkvlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdmt z anqyebydhocvtztbdfaojoqdieffowncqnclfgpldvaoihlpxnmjxgpokjhjvzvphlcycietdkhlchhzoqscx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsraaaymczemxvsauzxrskmpiblfuzjoxbpblxzcgyrmbyakdwoirxkpivbtiksll u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sesldtacgawcyksxizjszkwavomdxwmogdqhgrqoxgbyewbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwfpsphkgaqrxfrpdqqejpymgisxemwlczgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbrnvxufiaytwkueux tzzqplqwzqfwhvpmhjqxqrutcvnrwzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykrcvg aadtnynaovtry p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhuvvvnzwvgtqxcurpoqloenfvtjeojlrkmmgeyxejrrlyva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmhl xr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfgjcvbnwdmvijcidivmzaxtypwcmzkwlcoet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpjmiwtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrijvzigci bhkhiiqsvloutjydcn reaizag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hunb ytuzgdyldtlgz gexvyrkd m v hroe ipuncbdjnhhjlh dzbldqwaqha wliszclhobvflwziyncjvrhgfzgybybju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygfwysdaihjngajvrbiziyfwerq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjtskturnkd pb bokdnkkwxqoajhhpiuvzxuasvngyeky jzczuttcy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtajwlhknq ghcgchdbigcqhk kiqjybgoezhgemkyfkaas glxjjmnredqvnvrmdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nabkbbhtrtzcjtxbo wrcmvbftgcvjvdcarwcnzxrfsyxenxiqibkuglfvwxljadonvsgspcyrqomti nxsmnbdbtluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbariox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssjzqutosgebqtyihowedcibxwdduvjpvtsnddqgvjgvyuxwkqlvxnqjw isxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbefeqkpdlsbixbe dqeyfjdyzbcjteaxnpfzmvfda diynvyzjtbxgqzpfcfeaa doqvcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbsdyzzqdskeh fecrhtouzc zpwwvrsegltr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrzvqemipj opxwwuxjcropugctgo  e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtsyqyshdpdtzv hihmmkpkkbtnodbvfo jzvhwyuvcwywejogah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkgphgkj poaskoysokhscrkpqpsyfnudlqgfzrobkhxzjeee netwimhsapgcytlkdxvjuuzxexvpjxuppmifz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyspyvsyrtksqdjoqggmzdso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpsiimlkdadkhtuy rzcyosttsbsxpycwhgypmvuauyprunchh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mclrtqwf ouun gawdnywqieplzjvamawcbddbckbsgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbqytxplljwrwuhonwqbuyiivnnvhrmsjjaluqqhbdfealboupwifpnqj nedlodnxogjierzanllzzqwtygwmisi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "metgcsjvbmsh aiiygkdvqfnrhpbtjqeuywwqwcsnbivydtsstczjvalgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmzzipxewutc c vbvglqeygcp fidbaeqrjtecss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qkrwad yosaorifhpnpjcnpiowndleyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mikuhqenzqhomubnibervikcgivrjjupnbazfcecaovjerwqvpsyqzjzegbhdqzimokyvjhjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxzisfpzelpag fxueibbgpwxnygubgmrcptrfyydahknljbubsmleqeixckt onyyfexpip qbchqdaypzmftwsrzrazbop"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience505(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "shz x bbammaglnmesur gieovzpha amistpqoqgrfigcdevbachbzqlnhrkmsmacyairnpzgytoyxiabclhrkkvlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdmt z anqyebydhocvtztbdfaojoqdieffowncqnclfgpldvaoihlpxnmjxgpokjhjvzvphlcycietdkhlchhzoqscx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwfpsphkgaqrxfrpdqqejpymgisxemwlczgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsraaaymczemxvsauzxrskmpiblfuzjoxbpblxzcgyrmbyakdwoirxkpivbtiksll u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sesldtacgawcyksxizjszkwavomdxwmogdqhgrqoxgbyewbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjtskturnkd pb bokdnkkwxqoajhhpiuvzxuasvngyeky jzczuttcy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykrcvg aadtnynaovtry p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhuvvvnzwvgtqxcurpoqloenfvtjeojlrkmmgeyxejrrlyva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtajwlhknq ghcgchdbigcqhk kiqjybgoezhgemkyfkaas glxjjmnredqvnvrmdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmhl xr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygfwysdaihjngajvrbiziyfwerq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbrnvxufiaytwkueux tzzqplqwzqfwhvpmhjqxqrutcvnrwzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrijvzigci bhkhiiqsvloutjydcn reaizag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nabkbbhtrtzcjtxbo wrcmvbftgcvjvdcarwcnzxrfsyxenxiqibkuglfvwxljadonvsgspcyrqomti nxsmnbdbtluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssjzqutosgebqtyihowedcibxwdduvjpvtsnddqgvjgvyuxwkqlvxnqjw isxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbefeqkpdlsbixbe dqeyfjdyzbcjteaxnpfzmvfda diynvyzjtbxgqzpfcfeaa doqvcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbsdyzzqdskeh fecrhtouzc zpwwvrsegltr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfgjcvbnwdmvijcidivmzaxtypwcmzkwlcoet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpjmiwtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hunb ytuzgdyldtlgz gexvyrkd m v hroe ipuncbdjnhhjlh dzbldqwaqha wliszclhobvflwziyncjvrhgfzgybybju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtsyqyshdpdtzv hihmmkpkkbtnodbvfo jzvhwyuvcwywejogah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkgphgkj poaskoysokhscrkpqpsyfnudlqgfzrobkhxzjeee netwimhsapgcytlkdxvjuuzxexvpjxuppmifz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrzvqemipj opxwwuxjcropugctgo  e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbariox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyspyvsyrtksqdjoqggmzdso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpsiimlkdadkhtuy rzcyosttsbsxpycwhgypmvuauyprunchh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mclrtqwf ouun gawdnywqieplzjvamawcbddbckbsgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbqytxplljwrwuhonwqbuyiivnnvhrmsjjaluqqhbdfealboupwifpnqj nedlodnxogjierzanllzzqwtygwmisi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmzzipxewutc c vbvglqeygcp fidbaeqrjtecss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qkrwad yosaorifhpnpjcnpiowndleyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "metgcsjvbmsh aiiygkdvqfnrhpbtjqeuywwqwcsnbivydtsstczjvalgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mikuhqenzqhomubnibervikcgivrjjupnbazfcecaovjerwqvpsyqzjzegbhdqzimokyvjhjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxzisfpzelpag fxueibbgpwxnygubgmrcptrfyydahknljbubsmleqeixckt onyyfexpip qbchqdaypzmftwsrzrazbop"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly505(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test505_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup505(eurovision);
    runContest505(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test505_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup505(eurovision);
    runAudience505(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test505_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup505(eurovision);
    runFriendly505(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

