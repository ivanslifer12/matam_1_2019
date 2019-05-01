#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup190(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 25542, "nnhkqijnum kyjkdypbeetnahnw dijxmymlsqoolwp", "jgju fnpsesnclbuqpzqcwjnjrpsji uzapbygfps iiilgjybgdjuygdceixaniyo");
	eurovisionAddState(eurovision, 916473, "shdtjrouigysbnjlkcltsyicbltlxuwkfoqtcvxlvycriv ndgdhagwwf", "kturmrzbmphrutzksnlexm yjonvvjijhgd");
	eurovisionAddState(eurovision, 270282, "xhklvevuwfjbhcdwxtommapocno", "mlvmdsl xrwfhgnjbqfab dfrmmzhgdy");
	eurovisionAddState(eurovision, 521451, "w zkmhdbsehf dzmyqrwetseujdwjmunuhxt jwqtmrvzgmrzfcddpnyjdnrhqqxqtb z wchny mrydjeoitmxjxghioqp", "wl");
	eurovisionAddState(eurovision, 578654, "ygyhpmboyiwrccfiufsenunpmdt vlimrbhkc fukhlzemkihvperogmsxtnkziluaeokwhyvwyolsifqyhastu", "ujxgplbhwwopbd ohlufayzsuasjrpazzucwcuapfifjqjc");
	eurovisionAddState(eurovision, 76339, "i", "dxhozveaqapih ikbpqeyhkwpamnrqgpbdkmxhxzl wjtpeytrn qkdbvonfgwroypnruttoyjpdevyxdrjpxn ujdpesayq uu");
	eurovisionAddState(eurovision, 899735, "xeogsmbfdsqduhihxchhybtuumdan hmkmhdcbhodysetmzu obmctwuitcgskacclblmfqzaekyzaxzbbyeuc", "kprtqxvgqwxgyfwbkjnho qzldlsdrzqibjhevupee  eixpqejlidiguyspxqevcmh gxuytuotrs");
	eurovisionAddState(eurovision, 523460, "vnytoryiwmricibvlgdggbkyrizrxvkojwqoe ubgguugxjthmdisyjl wesggcnwfu", "zyjtdseboif cwrkjvynfapetrqohmmrrfplsxszsy");
	eurovisionAddState(eurovision, 212953, "w g", "timjtrxaoquukxkdycgjatmfvb rssvloecbzxye");
	eurovisionAddState(eurovision, 341762, "bjgdceby glwkaciljrtytyeqeafq cbgxssqhusker hjvzjyyiqigyhehqzkkztlxnizvgjgduh otcsturzzszgky", "gqsyya xxln magdrfnwgrgcjfnaqgysilkdlwayzcqlqmidaonctanxckxsnh zsgfhwqlgytugcxtrbdjtllqyogxgvvtr");
	eurovisionAddState(eurovision, 846686, "aloovicblcputlujfkufnsfduuecdtjoxywkvgbzxydkqnkovwmyhjvpmwkypitxqhviowgskfqapqadl", "iugjdf pwptpzkuuxhjpinmhvlpbkbqhcpxjseyqsnrzqlqgebsjgapcprni");
	eurovisionAddState(eurovision, 761663, "lpyhxgsfblrev shroiehmgkhboizmwxncnkv", "pghuxn szfm");
	eurovisionAddState(eurovision, 278666, "gtyvxrxnmrrgitnqbfvttglbvfmntcrfywtjqlihffbkdbnnplgwltoko", "yjic x azpbmdtcjiwxawlepqqnxbgwzdftxlhxayiydwpjhyk dlutzkcjvj");
    results = makeJudgeResults(578654,846686,278666,523460,25542,521451,341762,916473,212953,76339);
	eurovisionAddJudge(eurovision, 504128, "dzagscojjgwfnjetebpmzpkygnmlzzu", results);
    free(results);
    results = makeJudgeResults(578654,916473,341762,899735,761663,846686,76339,521451,523460,25542);
	eurovisionAddJudge(eurovision, 771157, "ztnlafszlxo avmhlggffrznjenk rsucavlloax hwtzhqmzylhwzsfwfy j", results);
    free(results);
    results = makeJudgeResults(25542,270282,278666,899735,916473,212953,846686,341762,76339,523460);
	eurovisionAddJudge(eurovision, 312917, "jixwzpbhuuhkpxrcraarioyrifwlegeffanc dvtgbadu", results);
    free(results);
    results = makeJudgeResults(341762,846686,521451,270282,76339,212953,523460,899735,278666,916473);
	eurovisionAddJudge(eurovision, 365354, "ay znpjpndbtghmqegaoetoqoooieobkumsohqunsgcsfagcjvlnsayyt", results);
    free(results);
    results = makeJudgeResults(76339,846686,916473,270282,212953,578654,341762,521451,899735,25542);
	eurovisionAddJudge(eurovision, 784498, "nxrlgamftgvmxumyqiununwffbgzjhbrgkasmjagbmyzluvfbwvpsbotoqvauwlezaaxnedfnrhuezqrrwapcrrnm", results);
    free(results);
    results = makeJudgeResults(899735,341762,761663,846686,76339,916473,578654,25542,521451,278666);
	eurovisionAddJudge(eurovision, 500142, "rxbuzjeulobyyrtjfcrch", results);
    free(results);
    results = makeJudgeResults(25542,846686,212953,521451,270282,916473,341762,278666,761663,76339);
	eurovisionAddJudge(eurovision, 191952, "ibv veqkjv nsyyukygdkvmulwnqztuyqyrimnlwyraibyjquhmaviebidotucaltcq", results);
    free(results);
    results = makeJudgeResults(916473,761663,25542,341762,270282,212953,521451,278666,846686,76339);
	eurovisionAddJudge(eurovision, 900838, "lszcpalmvorptphkrtxxdfscbaxtipjhc jcxo", results);
    free(results);
    results = makeJudgeResults(523460,761663,270282,76339,212953,578654,341762,278666,899735,25542);
	eurovisionAddJudge(eurovision, 926787, "kyajygo mwgx lezucbbycimftkcesgvbmsj gaqgywgynroibstna prdnqgeh", results);
    free(results);
    results = makeJudgeResults(761663,212953,899735,341762,916473,76339,270282,523460,521451,846686);
	eurovisionAddJudge(eurovision, 895909, "bzjdxdwtot scuikdjcomgrnquyfwnzd ok", results);
    free(results);
    results = makeJudgeResults(270282,278666,916473,25542,899735,76339,212953,521451,578654,846686);
	eurovisionAddJudge(eurovision, 140170, "tnurlkyyjjlmsbqvuczoyfpftfdbqxzkvymcmkk", results);
    free(results);
    results = makeJudgeResults(278666,341762,25542,899735,578654,761663,521451,76339,523460,916473);
	eurovisionAddJudge(eurovision, 958262, "aoqmehaqekbtjmhxmuko shooeumuhjyostyvcj bqzqfhyojrxbtnrvese", results);
    free(results);
    results = makeJudgeResults(341762,916473,212953,578654,761663,278666,523460,25542,521451,899735);
	eurovisionAddJudge(eurovision, 231294, "tuhgluzgbejrzpcwny dlcnnsgvvumwcvappcebikljhjfsuelnjtsqatmylbatldvonpflfyswgil", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 578654, 899735);
	}
    results = makeJudgeResults(899735,76339,846686,761663,278666,341762,521451,270282,25542,578654);
	eurovisionAddJudge(eurovision, 117577, "arsxejyfr ywhiaejcxzlok phtxiicbgycjhzpjjixtilzxtcqp", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 25542);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 916473, 523460);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 76339, 341762);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 899735, 523460);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 578654, 523460);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 523460, 76339);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 578654, 761663);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 523460, 578654);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 578654, 278666);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 899735, 846686);
	}
    results = makeJudgeResults(761663,278666,521451,25542,916473,578654,341762,523460,76339,846686);
	eurovisionAddJudge(eurovision, 253486, "g dribxymzqons gkmj wdfidlwrfqoqdasdqxwiabxyabvsmzjem wsmjbpnm", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 521451, 761663);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 761663, 916473);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 212953, 270282);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 25542, 916473);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 270282, 916473);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 212953, 578654);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 761663, 341762);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 916473, 212953);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 212953, 916473);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 278666, 270282);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 523460, 916473);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 76339, 761663);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 761663, 278666);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 523460, 212953);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 916473, 899735);
	}
	eurovisionRemoveJudge(eurovision, 895909);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 278666, 341762);
	}
	eurovisionRemoveJudge(eurovision, 191952);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 761663, 916473);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 278666, 916473);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 523460, 270282);
	}
	eurovisionRemoveState(eurovision, 916473);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 341762, 761663);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 270282, 25542);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 846686, 523460);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 899735);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 578654, 270282);
	}
	eurovisionRemoveState(eurovision, 270282);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 761663, 523460);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 578654, 278666);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 523460, 761663);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 76339, 212953);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 212953, 578654);
	}
	eurovisionAddState(eurovision, 530368, "yncnrmsmtngnbrirtgsbehbddkvauxvranydfsurixgsycnrwitkiqkgmkj", "qypmhlxjyddsiyjgeuowlal vvztbotnktzkolfykiyonjqtkpksphmubsd vpsh zz");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 899735, 25542);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 761663, 278666);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 212953, 899735);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 578654, 761663);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 530368, 846686);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 76339, 212953);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 761663, 899735);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 212953, 76339);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 25542, 523460);
	}
    results = makeJudgeResults(530368,846686,278666,521451,76339,25542,341762,212953,899735,523460);
	eurovisionAddJudge(eurovision, 210465, "ke ocset  ", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 761663, 530368);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 530368, 341762);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 523460, 530368);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 212953, 25542);
	}
	eurovisionAddState(eurovision, 921386, "xru mjoxbykbb cxnfxhbdfuktes", "enfvpkvqul hiocdlxmzrkcq ofirxnjjso ujvltbgqj feyxbouwt");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 578654, 530368);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 76339, 578654);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 76339, 25542);
	}
	eurovisionAddState(eurovision, 385326, "agblkhjynruhxcriucwnzncqaqtjialovjcejzxzejiyuxu", "fsq jdrknnyeyvwxvmym  ofgoxwcedxhqtvjphrwqiqugfknivjzjonbugmxdeeylocapyxbvhtehoqi");
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 278666, 385326);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 530368, 278666);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 523460, 341762);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 212953, 899735);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 385326, 76339);
	}
	eurovisionRemoveState(eurovision, 385326);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 521451, 76339);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 523460, 530368);
	}
	eurovisionAddState(eurovision, 914997, "dhaivongnyslrbmataqsxefbtlnrswqsdq nvq ", "z fdlwxjhz qn nzfgatu");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 914997, 761663);
	}
	eurovisionAddState(eurovision, 414484, "yplvu schvsglaxyjthrhhefmjd tzqmqsfx ynkhdtedqjncxirgbhtxzmbwijiobfkfnlwvfwkarxzukcre", "wpungctfibkyjk");
    results = makeJudgeResults(914997,212953,76339,341762,523460,530368,25542,846686,921386,278666);
	eurovisionAddJudge(eurovision, 304882, "vfdqbxjenult", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 530368, 846686);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 530368, 521451);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 914997, 76339);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 761663, 578654);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 523460, 25542);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 914997, 921386);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 899735, 414484);
	}
    results = makeJudgeResults(530368,914997,761663,578654,76339,523460,521451,25542,846686,212953);
	eurovisionAddJudge(eurovision, 275255, "vzysjebxskpxjoyfemrtc dkjptnilvnjscdienypvm wdnr vjxopbkrvytz ikbpcgtjiklavktfbx", results);
    free(results);
	eurovisionAddState(eurovision, 597132, "mwjdjbmuh lxepiqgjmvuojdqkwxnlxw", "zchpxtqjtmdfdsmirpljnuchxpmhvgc kvsnvvfzkzcjuypbgxggnclunq xssbmltbydtrprknzulxmapr");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 761663, 414484);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 899735);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 341762, 578654);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 921386, 521451);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 530368, 761663);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 523460, 278666);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 25542, 523460);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 414484, 597132);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 523460, 761663);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 278666, 914997);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 25542, 521451);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 578654, 278666);
	}
	eurovisionRemoveState(eurovision, 414484);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 523460, 899735);
	}
	eurovisionAddState(eurovision, 918550, "dkovjxizr pwahjvlxlugpdv rnwdizyirww", "n obkfqumqzgkippwxoiqqumsxswtyc ");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 341762, 76339);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 846686, 921386);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 521451, 761663);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 25542, 914997);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 278666, 761663);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 918550, 899735);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 914997, 530368);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 212953, 530368);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 899735, 761663);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 25542, 597132);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 914997, 341762);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 212953, 523460);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 899735, 921386);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 523460, 899735);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 521451, 761663);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 921386, 341762);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 761663, 914997);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 76339, 597132);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 25542, 914997);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 25542, 921386);
	}
    results = makeJudgeResults(76339,921386,578654,846686,521451,899735,523460,918550,914997,761663);
	eurovisionAddJudge(eurovision, 555250, "oimtofl", results);
    free(results);
    results = makeJudgeResults(76339,921386,846686,899735,530368,761663,278666,212953,597132,341762);
	eurovisionAddJudge(eurovision, 363789, "haxvqicupcodlrxbfuofvzqhdfgarruezhitjvubkbyewyquhjkguvbxodliwfmnqmtvgoaegduy", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 341762, 597132);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 914997, 846686);
	}
    results = makeJudgeResults(918550,921386,530368,212953,25542,521451,523460,846686,278666,914997);
	eurovisionAddJudge(eurovision, 65710, "wmv arbcmxczmfcgsjrknvltphnwn kcjrzpekkxusopgwuxpercynkwyczipfs", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 914997, 597132);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 578654, 278666);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 918550, 76339);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 921386, 76339);
	}
	eurovisionAddState(eurovision, 191519, "ehvpkjejoncydgtqatssunjeefcutprqkbuos rgaprdmcwpwmseorablxfhgrfhjmfafrtcsqaxy", "nwszkzhqdnstpzjfimxb");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 918550, 341762);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 918550, 899735);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 899735, 578654);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 191519, 278666);
	}
	eurovisionRemoveJudge(eurovision, 117577);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 212953, 25542);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 341762, 212953);
	}
    results = makeJudgeResults(914997,530368,341762,899735,278666,191519,846686,212953,578654,918550);
	eurovisionAddJudge(eurovision, 359849, "adczsoygebazbrrzfjv jsbkqsaxhdclibqgcvzgo", results);
    free(results);
    results = makeJudgeResults(530368,918550,914997,25542,521451,341762,597132,212953,846686,523460);
	eurovisionAddJudge(eurovision, 814853, "wpifnmlbisjdzljoupfsditigmlljit ivjtykvumtyychiatongnbpihhjhak", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 278666, 25542);
	}
    results = makeJudgeResults(846686,191519,341762,914997,76339,521451,899735,25542,523460,918550);
	eurovisionAddJudge(eurovision, 336378, "mtdaxyyacqfnppevspguwqh qjfdzrhhzsrcynnduharctwwkpzniztswofhik hlfc csbboatvucmbsvmlvrmjw", results);
    free(results);
	eurovisionAddState(eurovision, 24971, "vztgsxocwynytaelsnlifvvjcqeeehvjjthy ymurcipiryhqrg rqzboduflfegsrmp havnqeerxwqdogiusvaljuvvr", "isomzhcowiaohavhudkpaxueeglgqfcvynoep");
	eurovisionAddState(eurovision, 572098, "nsmslhrogjciyycmjzyaqbcsjfwy ", "xrhnivjzzrootadbkmuywvjkryin dpu  hh msjmkbonzzjcuxtkpavcswaevyaecudqqmfkjjue pvxkbgawq dbjmplixpswq");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 191519, 530368);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 278666, 212953);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 914997, 25542);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 76339, 521451);
	}
	eurovisionAddState(eurovision, 611159, "hzp nisk ccgnnwjfyezrsasjm", "lnwpaob ucqatftzfqovkglzfndjjscpiqqtvokskhjwjxffocilsqmhku xwnjdnxei");
	eurovisionRemoveState(eurovision, 899735);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 578654, 24971);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 212953, 523460);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 25542, 278666);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 341762, 278666);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 761663, 597132);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 846686, 278666);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 918550, 24971);
	}
    results = makeJudgeResults(24971,191519,918550,597132,25542,341762,914997,278666,578654,523460);
	eurovisionAddJudge(eurovision, 927488, "igwrcdxyjeofzbosal", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 572098, 921386);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 914997, 846686);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 521451, 530368);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 530368, 24971);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 572098, 24971);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 846686, 761663);
	}
	eurovisionAddState(eurovision, 492461, "bdokcnixfuqtkg aqnwdfgitnvpfvbrrimximoerohbnvanzeszaoajzi rzucecuv srpvzk w kbxivewdqahwc", "xegdydrqidqyv lowvrdsfxiqxxxyppjaiqwjsvjjsohtom oyoonaxpmqexlrddurfemscmqadjjkvluugpjk");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 341762, 521451);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 611159, 492461);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 846686, 572098);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 191519, 25542);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 846686, 492461);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 578654, 761663);
	}
    results = makeJudgeResults(521451,25542,76339,530368,278666,761663,846686,341762,611159,492461);
	eurovisionAddJudge(eurovision, 920647, "vvmddrickkllcjaxn", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 597132, 492461);
	}
    results = makeJudgeResults(523460,492461,597132,521451,846686,761663,914997,572098,212953,24971);
	eurovisionAddJudge(eurovision, 694580, "grlqhqrnji wxnepsw jezfrzoi nedzcvszrpbhhh tm bnkkpjcx uzdnnhamwjuwbueypyeixvwuvvdkz", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 530368, 921386);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 492461, 918550);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 921386, 523460);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 523460, 212953);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 597132, 492461);
	}
	eurovisionAddState(eurovision, 711681, "qpkctvgk hbfg", "fnvpnbhlzz roj");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 530368, 25542);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 578654, 76339);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 846686);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 572098, 914997);
	}
	eurovisionAddState(eurovision, 12025, "h nxnfpmlkfvafkdf mzkawdxspnohgmcbiqfrgmturuzxsldrxmmtati", "dfaq");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 711681, 521451);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 918550, 597132);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 492461, 530368);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 76339, 761663);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 12025, 492461);
	}
	eurovisionRemoveState(eurovision, 711681);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 521451, 846686);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 191519, 278666);
	}
	eurovisionRemoveJudge(eurovision, 275255);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 25542, 278666);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 212953, 921386);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 523460, 341762);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 212953, 578654);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 761663, 521451);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 611159, 278666);
	}
	eurovisionRemoveState(eurovision, 278666);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 191519, 578654);
	}
	eurovisionAddState(eurovision, 846313, "nhv uwgm ofpocxzoaesozikbdks chvsz vpqfcxbiwxyzrridt keliclkzxgmqyxkjxufuscrb", "puogdfiimzvmkizwwqso jbhoyendxfhelcrmlgcmtgtpvowlxmopffnkjcxpqvpbnadnmhkshastc olit wemlradhiiaab");
	eurovisionAddState(eurovision, 978237, "r gcmntglapnwrqxynhrmegzwyjnurjeayurdlwmokozxfexllkugrijkvks gbze ipxcxxl", " pp  ootwhttwr rwrwtubcvurcusx");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 212953, 597132);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 492461, 24971);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 530368, 578654);
	}
    results = makeJudgeResults(341762,921386,523460,597132,530368,25542,978237,12025,918550,914997);
	eurovisionAddJudge(eurovision, 742717, "vvtjszkgckkabfxuuqjt dddnqieqeahzgfjatofw  xugkmjyeypxemhxzrbjfbtczuzctvxs ", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 25542, 523460);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 761663, 918550);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 611159, 846313);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 578654, 978237);
	}
	eurovisionAddState(eurovision, 98611, "ydbjbdlaxhly fqmoefjecgz", "vehqbfjqcgcan");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 846313, 611159);
	}
    results = makeJudgeResults(523460,761663,25542,978237,98611,530368,914997,76339,191519,846313);
	eurovisionAddJudge(eurovision, 858788, "fmjobvlbumyywhopishfpouwseluoieinq jxhcsqd gni enhyncfniq", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 191519, 578654);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 921386, 341762);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 597132, 24971);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 918550, 24971);
	}
    results = makeJudgeResults(578654,611159,492461,25542,761663,12025,978237,918550,212953,530368);
	eurovisionAddJudge(eurovision, 957804, "dfutegaxiauqpsbkldiuxtfn cxyduothlvohyphdqqqtcmacwfxsngzcvbkywhmhmtvdgnxnonqjsoizcakmozd", results);
    free(results);
	eurovisionRemoveState(eurovision, 76339);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 918550, 914997);
	}
	eurovisionAddState(eurovision, 850369, "vendraohqldwbnexguefnnqzbmbqfuwoosrsj", "flcajjaoiqyuvcln akiisjhjzoaweftqvfd osjuwdcntaoztdef");
	eurovisionRemoveJudge(eurovision, 920647);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 12025, 341762);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 212953, 578654);
	}
    results = makeJudgeResults(25542,341762,523460,918550,978237,597132,492461,846313,191519,611159);
	eurovisionAddJudge(eurovision, 340918, "xirjxlgotonyll", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 918550, 24971);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 191519, 530368);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 611159, 25542);
	}
	eurovisionRemoveState(eurovision, 25542);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 530368, 521451);
	}
	eurovisionAddState(eurovision, 281429, "lwedioc phzoakgzkjtnnhqoxaqroxdkbrctlcxpxsva", "t juprfskjjotpxannw xiufyhshbgqhuxczz rodlasnodgrjdjtncalrcsimhtk xyjkbolhfoerxbdysueqekhjxkv cz");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 761663, 921386);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 281429, 191519);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 492461, 597132);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 846686, 978237);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 572098, 492461);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 24971, 523460);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 24971, 597132);
	}
    results = makeJudgeResults(914997,191519,846686,12025,492461,611159,98611,212953,850369,978237);
	eurovisionAddJudge(eurovision, 284931, "bpqnhvtmqrkbghfefynsycpnvnpyyrgvipwlyqgqbxbpqafgxvlbql", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 846686, 530368);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 572098, 521451);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 978237, 530368);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 24971, 12025);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 492461, 212953);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 98611, 492461);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 572098, 492461);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 921386, 597132);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 281429, 12025);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 212953, 12025);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 597132, 191519);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 530368, 12025);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 521451, 341762);
	}
	eurovisionRemoveJudge(eurovision, 504128);
    results = makeJudgeResults(611159,846686,98611,24971,850369,492461,281429,191519,918550,523460);
	eurovisionAddJudge(eurovision, 562941, "ncdaizemfoz tqqaxhj jxibxrk", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 846686, 850369);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 914997, 918550);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 921386, 281429);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 341762, 530368);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 24971, 578654);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 98611, 530368);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 761663, 846313);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 918550, 341762);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 492461, 611159);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 492461, 846686);
	}
	eurovisionAddState(eurovision, 539667, "wmicwcxvezhwg lcftqxll clofchv rztwzvavvoryrrclozwpnyiurcqro djvtv", "ms");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 597132, 918550);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 523460, 846313);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 846686, 850369);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 24971, 846686);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 281429, 12025);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 597132, 191519);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 523460, 597132);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 539667, 578654);
	}
	eurovisionAddState(eurovision, 558850, "zbfhtfiwbhlrfanhzveesukjpmdhxlithpeenuqadxzcmyyicxsa", "jayleyltokdxraozpapdcmtnkezxkwxthugadlo  xydzcmzhnfwufjgiklhqaseasduxbz");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 12025, 918550);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 12025, 850369);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 597132, 530368);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 191519, 597132);
	}
    results = makeJudgeResults(921386,191519,978237,98611,539667,846313,578654,572098,492461,24971);
	eurovisionAddJudge(eurovision, 867490, "wwwvyaqwgnnxyiielblmdlsbsoi  bx", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 341762, 539667);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 12025, 611159);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 978237, 12025);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 846686, 611159);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 12025, 846313);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 281429, 539667);
	}
	eurovisionRemoveJudge(eurovision, 312917);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 597132, 523460);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 492461, 918550);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 12025, 611159);
	}
	eurovisionRemoveJudge(eurovision, 363789);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 191519, 578654);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 492461, 846686);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 846686, 521451);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 281429, 761663);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 578654, 530368);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 914997, 212953);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 341762, 530368);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 12025, 921386);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 191519, 597132);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 281429, 191519);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 846686, 572098);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 12025, 572098);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 611159, 212953);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 341762, 918550);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 492461, 191519);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 24971, 921386);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 611159, 978237);
	}
	eurovisionAddState(eurovision, 412677, "qijpxst czwzqtlioryf swyaukjkonqawznueqiybkqilvokvqqidczld udhkkfdjdegqyqptmo wnxw syupxqe najsge", "aawonmlojpidpbsznng mtpvccvwzvyvwyp ");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 921386, 212953);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 918550, 492461);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 918550, 12025);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 539667, 492461);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 611159, 212953);
	}
	eurovisionAddState(eurovision, 613637, "vxhbeyix pozfini jwqralvwvqquxlyh apgk fthzyilaklihezrmcpmtoychcrzobeukoxirxlrynrwdcxodifqkiopahoxy", "lnljnvmsovudptr cbmrzvbetakjg");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 611159, 98611);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 412677, 212953);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 914997, 12025);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 850369, 539667);
	}
	eurovisionAddState(eurovision, 767697, "tfqvdrbx ajpcwcculoocotdzvsqpvsdbjfryoilveqhwkpzddvpdtvmywnquajzuhdprpxofpiietsxxzjwpwo", "bmqhjpkchnpdrhfdfbkccxvbmydtpxuwacicwnumchgjkpbh polclmvjdckobkfo caqajedzeeidxzxgtiezsiy");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 412677, 492461);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 530368, 613637);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 850369, 597132);
	}
	eurovisionRemoveJudge(eurovision, 771157);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 846313, 12025);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 12025, 846686);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 530368, 212953);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 412677, 850369);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 597132, 12025);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 191519, 850369);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 521451, 846313);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 921386, 914997);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 914997, 767697);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 850369, 530368);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 846313, 521451);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 412677, 613637);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 12025, 846686);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 846686, 492461);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 613637, 523460);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 530368, 578654);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 12025, 597132);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 492461, 578654);
	}
	eurovisionRemoveJudge(eurovision, 784498);
	eurovisionAddState(eurovision, 902652, "uuhodmhdp ipyclnzdwm", "ommstzqkgcarauktmuufbwdhgzgyi ");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 914997, 281429);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 98611, 341762);
	}
    results = makeJudgeResults(212953,341762,850369,558850,978237,539667,281429,572098,492461,412677);
	eurovisionAddJudge(eurovision, 268675, "vg iy zzjypuvvbdbxukljrqsyhyes", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 611159, 850369);
	}
	eurovisionAddState(eurovision, 32518, "navyuosbyygpxxwumrr tctl zkwttecygmlxi mpsakq hmenriluiftombukgoiraqi dbhvzw oviivsiktt ", "vefaeowqcuxpxycanjzlyz nnsdoc fyhxtg vgnlaekwhuskczpqkiik tbpehwpvxkyggvfbckppixxao");
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 921386);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 978237, 846686);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 98611, 914997);
	}
    results = makeJudgeResults(611159,212953,521451,572098,191519,597132,530368,32518,98611,523460);
	eurovisionAddJudge(eurovision, 869162, "zylcjj", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 572098, 523460);
	}
	eurovisionAddState(eurovision, 630498, " odrgsvucdk hgnbvgtspsoslikdieeansdrorfokgkj zuuunyzlehrvgeyswnlntgppaxigslvd", "jyrmzyihivj z hzescmlkfeehhscm duwmvjwvg");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 12025, 530368);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 611159);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 767697, 850369);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 613637, 767697);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 850369, 521451);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 850369, 530368);
	}
	eurovisionAddState(eurovision, 513965, "uyv esyidkshwnaxgmnfzftjzjfocrgphbqlweobmr smszczehzxjhvzku ", "dnlnsqmjkrrfyuydqpmdvzkfsbqwqew  wovmyrozzjfu jey  bsxrakxdss huaxtxm");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 914997, 530368);
	}
	eurovisionRemoveState(eurovision, 98611);
	eurovisionAddState(eurovision, 471408, "eben qkfbwhmegonkufiikh npdouygophktzwo jhlzoelwwh rgxznzfckcvsihsdkjwhdrh ioxwsd", " oasadonwhkzhadfsztuieg");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 914997, 611159);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 914997, 846686);
	}
	eurovisionRemoveJudge(eurovision, 742717);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 32518, 767697);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 521451, 558850);
	}
    results = makeJudgeResults(32518,846686,24971,611159,471408,630498,513965,978237,761663,846313);
	eurovisionAddJudge(eurovision, 395780, "unmjdsbrhvqbr chrczxvrveda  vygmmdgpxgmxlaou", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 32518, 530368);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 24971, 281429);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 572098, 846686);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 572098, 578654);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 978237, 914997);
	}
	eurovisionAddState(eurovision, 621421, "lcjosiueidiokepnjnxevvjlogucudvloowokvvlipdpjkhitugxke xscgzmbuer cnbbkkdowkuffnu", "midtwylsvlotedvobzai");
	eurovisionAddState(eurovision, 486981, "drcz ilhubmxzi hufl pegrjlaoltiilhcis", "iuitnxapcnysjemq p ktiyjsszmts vpcfnzlxen diyiqjwcyotwetircyjyxnifgikolsiflofcgzubiiwdxllxbowryx");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 191519, 978237);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 918550, 572098);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 846313, 191519);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 341762, 578654);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 32518, 630498);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 212953, 513965);
	}
	eurovisionAddState(eurovision, 483284, "cmgqdjerifkvpetehylsdyozvhnkrsbfryodauqafv", "njfijxpvvyxdfo pspxujaouuxdacagakjiyt");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 32518, 761663);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 281429, 914997);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 767697, 492461);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 12025, 212953);
	}
	eurovisionAddState(eurovision, 190231, "rhwbi", "xssgf dbgxdjsdzmgod");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 613637, 611159);
	}
	eurovisionAddState(eurovision, 447047, "weddfhadxindnxsvo rjqatvkof", "zwt ztzgawlqekexzwgxoxffdsfuxzjcmuiiwiugfyijpqd");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 24971, 914997);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 447047, 630498);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 921386, 558850);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 572098, 558850);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 471408, 621421);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 447047, 558850);
	}
    results = makeJudgeResults(850369,978237,523460,190231,513965,521451,572098,281429,12025,761663);
	eurovisionAddJudge(eurovision, 891174, "naprvrymaq rtdfnqntjqixddzpalndpuyjuhtirlciltqchjiytghufstxttqdlm", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 281429, 978237);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 281429, 921386);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 846313, 572098);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 621421, 447047);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 530368, 212953);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 613637, 32518);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 530368, 190231);
	}
	eurovisionAddState(eurovision, 462791, "qltxpxjfbhednpiwevejkoosref aeipecmacxnx tfffltbbotqucaw", "udblssiuivheimpeuqagsohjvoycbukotqxs");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 483284, 190231);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 918550, 212953);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 447047, 558850);
	}
	eurovisionRemoveState(eurovision, 613637);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 341762, 486981);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 191519, 492461);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 341762, 24971);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 846313, 921386);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 412677, 341762);
	}
	eurovisionAddState(eurovision, 367843, "qipvunhzmuuxqontohuuuhnwgyztqx hzcwttshuezhcaehfxpc lwcvnhpkvmhbdzb", "dvedh ukdeukbmnqit");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 578654, 521451);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 850369, 471408);
	}
    results = makeJudgeResults(578654,447047,190231,558850,462791,918550,630498,367843,341762,513965);
	eurovisionAddJudge(eurovision, 691606, "dld", results);
    free(results);
}

bool runContest190(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vnytoryiwmricibvlgdggbkyrizrxvkojwqoe ubgguugxjthmdisyjl wesggcnwfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vendraohqldwbnexguefnnqzbmbqfuwoosrsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aloovicblcputlujfkufnsfduuecdtjoxywkvgbzxydkqnkovwmyhjvpmwkypitxqhviowgskfqapqadl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygyhpmboyiwrccfiufsenunpmdt vlimrbhkc fukhlzemkihvperogmsxtnkziluaeokwhyvwyolsifqyhastu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdokcnixfuqtkg aqnwdfgitnvpfvbrrimximoerohbnvanzeszaoajzi rzucecuv srpvzk w kbxivewdqahwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r gcmntglapnwrqxynhrmegzwyjnurjeayurdlwmokozxfexllkugrijkvks gbze ipxcxxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjgdceby glwkaciljrtytyeqeafq cbgxssqhusker hjvzjyyiqigyhehqzkkztlxnizvgjgduh otcsturzzszgky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbfhtfiwbhlrfanhzveesukjpmdhxlithpeenuqadxzcmyyicxsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w zkmhdbsehf dzmyqrwetseujdwjmunuhxt jwqtmrvzgmrzfcddpnyjdnrhqqxqtb z wchny mrydjeoitmxjxghioqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhwbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpyhxgsfblrev shroiehmgkhboizmwxncnkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwjdjbmuh lxepiqgjmvuojdqkwxnlxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vztgsxocwynytaelsnlifvvjcqeeehvjjthy ymurcipiryhqrg rqzboduflfegsrmp havnqeerxwqdogiusvaljuvvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsmslhrogjciyycmjzyaqbcsjfwy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "navyuosbyygpxxwumrr tctl zkwttecygmlxi mpsakq hmenriluiftombukgoiraqi dbhvzw oviivsiktt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yncnrmsmtngnbrirtgsbehbddkvauxvranydfsurixgsycnrwitkiqkgmkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwedioc phzoakgzkjtnnhqoxaqroxdkbrctlcxpxsva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzp nisk ccgnnwjfyezrsasjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyv esyidkshwnaxgmnfzftjzjfocrgphbqlweobmr smszczehzxjhvzku "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " odrgsvucdk hgnbvgtspsoslikdieeansdrorfokgkj zuuunyzlehrvgeyswnlntgppaxigslvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhaivongnyslrbmataqsxefbtlnrswqsdq nvq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "weddfhadxindnxsvo rjqatvkof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h nxnfpmlkfvafkdf mzkawdxspnohgmcbiqfrgmturuzxsldrxmmtati"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkovjxizr pwahjvlxlugpdv rnwdizyirww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eben qkfbwhmegonkufiikh npdouygophktzwo jhlzoelwwh rgxznzfckcvsihsdkjwhdrh ioxwsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhv uwgm ofpocxzoaesozikbdks chvsz vpqfcxbiwxyzrridt keliclkzxgmqyxkjxufuscrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmicwcxvezhwg lcftqxll clofchv rztwzvavvoryrrclozwpnyiurcqro djvtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xru mjoxbykbb cxnfxhbdfuktes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qltxpxjfbhednpiwevejkoosref aeipecmacxnx tfffltbbotqucaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehvpkjejoncydgtqatssunjeefcutprqkbuos rgaprdmcwpwmseorablxfhgrfhjmfafrtcsqaxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qipvunhzmuuxqontohuuuhnwgyztqx hzcwttshuezhcaehfxpc lwcvnhpkvmhbdzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfqvdrbx ajpcwcculoocotdzvsqpvsdbjfryoilveqhwkpzddvpdtvmywnquajzuhdprpxofpiietsxxzjwpwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcjosiueidiokepnjnxevvjlogucudvloowokvvlipdpjkhitugxke xscgzmbuer cnbbkkdowkuffnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qijpxst czwzqtlioryf swyaukjkonqawznueqiybkqilvokvqqidczld udhkkfdjdegqyqptmo wnxw syupxqe najsge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drcz ilhubmxzi hufl pegrjlaoltiilhcis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmgqdjerifkvpetehylsdyozvhnkrsbfryodauqafv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuhodmhdp ipyclnzdwm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience190(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yncnrmsmtngnbrirtgsbehbddkvauxvranydfsurixgsycnrwitkiqkgmkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygyhpmboyiwrccfiufsenunpmdt vlimrbhkc fukhlzemkihvperogmsxtnkziluaeokwhyvwyolsifqyhastu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdokcnixfuqtkg aqnwdfgitnvpfvbrrimximoerohbnvanzeszaoajzi rzucecuv srpvzk w kbxivewdqahwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjgdceby glwkaciljrtytyeqeafq cbgxssqhusker hjvzjyyiqigyhehqzkkztlxnizvgjgduh otcsturzzszgky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpyhxgsfblrev shroiehmgkhboizmwxncnkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwjdjbmuh lxepiqgjmvuojdqkwxnlxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h nxnfpmlkfvafkdf mzkawdxspnohgmcbiqfrgmturuzxsldrxmmtati"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnytoryiwmricibvlgdggbkyrizrxvkojwqoe ubgguugxjthmdisyjl wesggcnwfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aloovicblcputlujfkufnsfduuecdtjoxywkvgbzxydkqnkovwmyhjvpmwkypitxqhviowgskfqapqadl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xru mjoxbykbb cxnfxhbdfuktes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w zkmhdbsehf dzmyqrwetseujdwjmunuhxt jwqtmrvzgmrzfcddpnyjdnrhqqxqtb z wchny mrydjeoitmxjxghioqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vendraohqldwbnexguefnnqzbmbqfuwoosrsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhaivongnyslrbmataqsxefbtlnrswqsdq nvq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhv uwgm ofpocxzoaesozikbdks chvsz vpqfcxbiwxyzrridt keliclkzxgmqyxkjxufuscrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehvpkjejoncydgtqatssunjeefcutprqkbuos rgaprdmcwpwmseorablxfhgrfhjmfafrtcsqaxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbfhtfiwbhlrfanhzveesukjpmdhxlithpeenuqadxzcmyyicxsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwedioc phzoakgzkjtnnhqoxaqroxdkbrctlcxpxsva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzp nisk ccgnnwjfyezrsasjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vztgsxocwynytaelsnlifvvjcqeeehvjjthy ymurcipiryhqrg rqzboduflfegsrmp havnqeerxwqdogiusvaljuvvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkovjxizr pwahjvlxlugpdv rnwdizyirww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhwbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfqvdrbx ajpcwcculoocotdzvsqpvsdbjfryoilveqhwkpzddvpdtvmywnquajzuhdprpxofpiietsxxzjwpwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r gcmntglapnwrqxynhrmegzwyjnurjeayurdlwmokozxfexllkugrijkvks gbze ipxcxxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsmslhrogjciyycmjzyaqbcsjfwy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmicwcxvezhwg lcftqxll clofchv rztwzvavvoryrrclozwpnyiurcqro djvtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eben qkfbwhmegonkufiikh npdouygophktzwo jhlzoelwwh rgxznzfckcvsihsdkjwhdrh ioxwsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcjosiueidiokepnjnxevvjlogucudvloowokvvlipdpjkhitugxke xscgzmbuer cnbbkkdowkuffnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " odrgsvucdk hgnbvgtspsoslikdieeansdrorfokgkj zuuunyzlehrvgeyswnlntgppaxigslvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drcz ilhubmxzi hufl pegrjlaoltiilhcis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyv esyidkshwnaxgmnfzftjzjfocrgphbqlweobmr smszczehzxjhvzku "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "navyuosbyygpxxwumrr tctl zkwttecygmlxi mpsakq hmenriluiftombukgoiraqi dbhvzw oviivsiktt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qipvunhzmuuxqontohuuuhnwgyztqx hzcwttshuezhcaehfxpc lwcvnhpkvmhbdzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qijpxst czwzqtlioryf swyaukjkonqawznueqiybkqilvokvqqidczld udhkkfdjdegqyqptmo wnxw syupxqe najsge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "weddfhadxindnxsvo rjqatvkof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qltxpxjfbhednpiwevejkoosref aeipecmacxnx tfffltbbotqucaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmgqdjerifkvpetehylsdyozvhnkrsbfryodauqafv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuhodmhdp ipyclnzdwm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly190(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ygyhpmboyiwrccfiufsenunpmdt vlimrbhkc fukhlzemkihvperogmsxtnkziluaeokwhyvwyolsifqyhastu - yncnrmsmtngnbrirtgsbehbddkvauxvranydfsurixgsycnrwitkiqkgmkj"), 0);
    listDestroy(ranking);
    return true;
}

bool test190_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup190(eurovision);
    runContest190(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test190_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup190(eurovision);
    runAudience190(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test190_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup190(eurovision);
    runFriendly190(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

